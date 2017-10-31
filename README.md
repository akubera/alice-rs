# ALICE-rs #

This repository demonstrates how the public data released by the the CERN based ALICE collaboration can be analysed with the Rust programming language and with minimal further external dependencies.

**This is not an official ALICE or CERN project**

This collection of crates provides and demonstrates:

* A library/binary for downloading a desired amount of the publicly released data. See the [alice-download](https://github.com/cbourjau/alice-rs/tree/master/alice-download) crate. The [alice-open-data](https://github.com/cbourjau/alice-rs/tree/master/alice-open-data) crate provides some conviniences for latter locating and reading the downloaded files
* Reading of so-called Event Summary Data (ESD) from [ROOT](https://root.cern.ch/)'s binary file format.
  This is achieved through automatically generated c++ code from ROOT (TTree::MakeClass) as well as from the Rust side (bindgen). See [alice-sys](https://github.com/cbourjau/alice-rs/tree/master/alice-sys).
* A safe wrapper around a limited subset of the automatically generated bindings.
  These bindings enable a convinient asynchronous IO and re-organize the data with a rustic interface. Alternative backends like databases would be integrated at this this level. See the  [alice](https://github.com/cbourjau/alice-rs/tree/master/alice) crate
* High performace n-dimensional histograms for streaming data.
  Maintains a binned count of the data which can be successivly filled. See [histogram](https://github.com/cbourjau/alice-rs/tree/master/histogram)
* A very simple analysis demonstrating how it all plays together. See [simple-analysis](https://github.com/cbourjau/alice-rs/tree/master/simple-analysis)

## Dependencies

There are no dependencies on any ALICE specific software! However, the public data was released in the [ROOT](https://root.cern.ch/) framework's binary data format. Therefore, a working ROOT 6 installation is required for the IO process.

Furthermore, various excellent crates from the rust ecosystem have been leveraged. Most notably gcc-rs, bindgen, bitflags, chan, rayon, and ndarray. I am truely amazed by all of them! 

## CERN, LHC, and ALICE

ALICE (A Large Ion Collider Experiment) is the dedicated Heavy Ion experiment at the Large Hadron Collider (LHC) in Switzerland. Just like most other CERN based experiments, its goal is to better understand the fundamental particles and forces of the universe. In particular, ALICE is concerned with the so called strong force which is the dominant actor for processes within an atomic nuclei. Many of the properties of this force manifest them self at extreme pressures and temperatures as they were found micro seconds after the Big Bang. By colliding heavy nuclei such as lead ions at nearly the speed of light, we are able to recreate such extreme conditions for a very brief moment within the ALICE detector. By carefully studying the particles produced at such collisions we can deduce the properties of the strong force which will help us to better understand nuclear reactions, neutron stars, the first moments of the universe and much more.

## CERN open data

ALICE, as well as some other CERN based experiments have released a small subset of their recorded data into the public domain. The dataset in question for this project is in total approximately 6.5TB. While some analyses really need all the data they can get, others (like the example one) can be run on just a ~1GB.


## Why this project?

I started this project with the intend of learning the Rust programming language. It did not take long until I was plainly fascinated by its ease of use, all the little gems like the debug formatting of bitflags, and the never the less uncompromising speed. 

In the mean time I was able to strip of more and more dependencies to the ALICE software stack (aka. [AliRoot](https://github.com/alisw/AliRoot) and [AliPhysics](https://github.com/alisw/AliPhysics)). Finally I reached the point where I was able to drop all of the ~5M lines of code and solely depend on the ROOT framework to read the binary data from disk.

I realized that this project might be of interest to a wider group of people who would like to use the ALICE public data but are understandibly lost in the ALICE software stack. Currently, the only way to analyze the published data is through that huge and largely undocumented ALICE framework, which I consider an almost insurmountable entry barrier. Even if somebody does not want to learn Rust, this repository might still provide valuable clues on how to analyze ALICE's data with minimal dependencies.

Perhaps not surprisingly, removing so much code and indirection from the analysis improved the performance significantly. 

## Performance

It is difficult to write a true apples to apples bench mark, though.
Running any analysis through the ALICE framework implicitly does many more things which you might or (probably) might not want.
With this caveat aside, it is safe to say that ALICE-rs is faster than the standard AliRoot/AliPhysics stack by at least a factor of six if you just want some straight forward results.
Three main points are mainly responsible for this.

*(Given that I am very new to Rust, I am sure that this design can still be improved and I would be very greatful for any such tips and recommendations!)*

### Reading only the data needed
AliRoot always reads in all the data of a given collision (aka "event") instead of selecting only the "columns" of interest. This is due to a monolithic design choice. The data is exposed to the user in one huge "event" object which encompasses all possible data associated with the current event. Its all or nothing and it all has to be read from disc and decompressed.

This project reads in only the data directly needed for the analysis. The data is split up in small individual structs which are then composes into a very minimal "event" struct.
Possibly missing data can easily be handled with Rust's `Option` enum.
Clearly, some similar design could have been chosen in (modern) c++ as well.
However, it is still a testament to the benefits of having data in simple structs instead of mangling it up  with functionality as ROOT likes to do.


### Having a parallel io thread with a FIFO buffer
In the standard framework, each collision is read in from disk and processed sequentially. ALICE-rs does these two things in separate threads using `chan`'s MPMC model which even comes with a buffer finite buffer. This is something which I would have dreaded to do in c++. In Rust it turned out to be a piece of cake in Rust.


### A high performance n-dimensional histogram
This project also implements an n-dimensional histogram, which appears to be significantly faster than ROOT's alternative. This becomes especially important if a histogram has to be filled in nested loops (which is the case in the example analysis).
