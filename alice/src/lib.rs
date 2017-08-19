extern crate libc;
#[macro_use]
extern crate bitflags;
extern crate alice_sys;
#[macro_use]
extern crate log;

pub mod dataset;
pub mod event;
pub mod primary_vertex;
pub mod track;
pub mod trigger_mask;
pub mod vzero;
pub mod esd;


#[cfg(test)]
mod tests {
    use dataset::Dataset;
    use track;
    use trigger_mask::TriggerMask;

    const PATH: &str = "/home/christian/lhc_data/alice/data/2010/LHC10h/000139510/ESDs/pass2/10000139510001.170/AliESDs.root";

    #[test]
    fn primary_vertices() {
        let ds = Dataset::new(PATH);
        let sum = ds
            .filter(|ev| {ev.primary_vertex.is_some()})
            .fold(0.0, |mut acc, ev| {acc += ev.primary_vertex.unwrap().x.abs();
                                      acc});
        assert!(sum > 0., "Primary vertices did not load!");
    }

    #[test]
    fn tracks() {
        let ds = Dataset::new(PATH);
        for ev in ds.filter(|ev| {ev.primary_vertex.is_some()}) {
            let pv = ev.primary_vertex.unwrap();
            let etas =
                ev.tracks
                .iter()
                .filter(|tr| {tr.flags.contains(track::ITS_REFIT)})
                .filter(|tr| {tr.dca_to_point_xy(pv.x, pv.y) < 2.4})
                .filter(|tr| {tr.dca_to_point_z(pv.z) < 3.2})
                // .inspect(|tr| {println!("tr: {:?}", tr)})
                .map(|tr| {tr.eta()});
            assert!(etas.count() > 0, "No tracks loaded?");
        }
    }

    #[test]
    fn triggers() {
        let ds = Dataset::new(PATH);
        // Combine many events to be sure that we have some triggers
        let many_trgs = ds
            .map(|ev| ev.trigger_mask)
            .collect::<TriggerMask>();
        assert!(!many_trgs.is_empty());
    }
}
