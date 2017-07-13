extern crate histogram;
extern crate alice;
extern crate gnuplot;

use std::f64::consts::PI;
    
use alice::dataset::Dataset;
use alice::track::Track;
use alice::track;

use histogram::*;
use gnuplot::{Figure, Caption, Color, AxesCommon};


fn main() {
    let ds = Dataset::new("/home/christian/Downloads/AliESDs.root");

    let mut hist_eta = Histogram::new((100, ), &[-2.], &[2.]);
    let mut hist_pt_high = Histogram::new((100, ), &[0.], &[4.]);
    let mut hist_pt_low = Histogram::new((100, ), &[0.], &[4.]);
    let mut hist_mult = Histogram::new((10, ), &[0.], &[5000.]);
    let mut event_counter = Histogram::new((2, ), &[0.], &[2.0]);

    let mut hist_eta_phi = Histogram::new((10, 10), &[-1.0, 0.0], &[1.0, 2.0*PI]);
    let mut hist_phi_phi = Histogram::new((10, 10), &[0.0, 0.0], &[2.0*PI, 2.0*PI]);
    
    let sel_events = ds
        .filter(|ev| {ev.primary_vertex.as_ref()
                      .map(|pv| {pv.z.abs() < 10.})
                      .unwrap_or(false)});
    for ev in sel_events {
        hist_mult.fill_1(&[ev.multiplicity as f64]);
        let pv = ev.primary_vertex.unwrap();
        let filtered_tracks: Vec<&Track>= ev.tracks.iter()
            .filter(|tr| {tr.flags.contains(track::ITS_REFIT)})
            .filter(|tr| {tr.dca_to_point_xy(pv.x, pv.y) < 2.4})
            .filter(|tr| {tr.dca_to_point_z(pv.z) < 3.2})
            .map(|tr| tr)
            .collect();
        let etas = filtered_tracks.iter().map(|tr| [tr.eta()]);
        hist_eta.extend(etas);

        let pts = filtered_tracks.iter().map(|tr| {[tr.pt()]});
        if ev.multiplicity > 1000 {
            hist_pt_high.extend(pts);
            event_counter.fill_1(&[0.5]);
        } else {
            hist_pt_low.extend(pts);
            event_counter.fill_1(&[1.5]);
        }
        println!("ntracks: {:?}", ev.tracks.iter().count());
        for i_t1 in 0..filtered_tracks.len() {
            for i_t2 in 0..filtered_tracks.len() {
                hist_eta_phi.fill_2(&[filtered_tracks[i_t1].eta(),
                                      filtered_tracks[i_t2].phi()]);
                hist_phi_phi.fill_2(&[filtered_tracks[i_t1].phi(),
                                      filtered_tracks[i_t2].phi()]);
            }
        }
    }

    let raa: Vec<f64> =
        hist_pt_high.counts.iter()
        .zip(hist_pt_low.counts.iter())
        .map(|(h, l)| {(h / event_counter.counts[1] as f64)
                       / (l / event_counter.counts[0] as f64)})
        .collect();
    let mut fg = Figure::new();
    fg.axes2d()
        .set_pos_grid(2, 3, 0)
        .set_title("η track distribution", &[])
        .set_x_label("η", &[])
        .lines(&hist_eta.centers(0), &hist_eta.counts, &[Caption("A line"), Color("black")]);
    fg.axes2d()
        .set_pos_grid(2, 3, 1)
        .set_title("p_{T} distribution", &[])
        .set_x_label("p_{T} [GeV]", &[])
        .lines(&hist_pt_high.centers(0), &raa, &[Caption("A line"), Color("red")]);
    fg.axes2d()
        .set_pos_grid(2, 3, 2)
        .set_title("Multiplicity distribution", &[])
        .set_x_label("SPD tracklets", &[])
        .boxes_set_width(&hist_mult.centers(0), &hist_mult.counts, &hist_mult.widths(0),
                         &[Caption("A line"), Color("red")]);
    fg.axes2d()
        .set_pos_grid(2, 3, 3)
        .set_title("eta eta", &[])
        .set_x_label("eta", &[])
        .image(&hist_eta_phi.counts,
                 hist_eta_phi.counts.shape()[0], hist_eta_phi.counts.shape()[0],
                 None, &[]);
    fg.axes2d()
        .set_pos_grid(2, 3, 4)
        .set_title("eta eta", &[])
        .set_x_label("eta", &[])
        .image(&hist_phi_phi.counts,
                 hist_phi_phi.counts.shape()[0], hist_eta_phi.counts.shape()[0],
                 None, &[]);
    
    fg.show();
}
