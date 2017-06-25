//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jun 11 02:46:13 2017 by ROOT version 5.34/30
// from TTree esdTree/Tree with ESD objects
// found on file: /home/christian/Downloads/AliESDs.root
//////////////////////////////////////////////////////////

#ifndef ESD_h
#define ESD_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TNamed.h>
#include <TObject.h>
#include <TBits.h>
#include <TClonesArray.h>


// Header file for the classes stored in the TTree if any.
#include "AliESDEvent.h"
#include "AliESDACORDE.h"
#include "AliESDAD.h"
#include "AliESDCaloCells.h"
#include "AliESDCaloCluster.h"
#include "AliESDCaloTrigger.h"
#include "AliESDCosmicTrack.h"
#include "AliESDFIT.h"
#include "AliESDFMD.h"
#include "AliESDHLTDecision.h"
#include "AliESDHeader.h"
#include "AliESDMuonCluster.h"
#include "AliESDMuonGlobalTrack.h"
#include "AliESDMuonPad.h"
#include "AliESDMuonTrack.h"
#include "AliESDPmdTrack.h"
#include "AliESDRun.h"
#include "AliESDTOFCluster.h"
#include "AliESDTOFHit.h"
#include "AliESDTOFMatch.h"
#include "AliESDTZERO.h"
#include "AliESDTrdTrack.h"
#include "AliESDTrdTracklet.h"
#include "AliESDTrdTrigger.h"
#include "AliESDVZERO.h"
#include "AliESDVertex.h"
#include "AliESDZDC.h"
#include "AliESDcascade.h"
#include "AliESDkink.h"
#include "AliESDtrack.h"
#include "AliESDv0.h"
#include "AliFMDFloatMap.h"
#include "AliFMDMap.h"
#include "AliMultiplicity.h"
#include "AliRawDataErrorLog.h"
#include "AliTriggerScalersRecordESD.h"
#include "AliVertex.h"
#include "AliExternalTrackParam.h"
#include "AliTOFHeader.h"
#include "AliTimeStamp.h"

// One of the includes seems to enable Weffc++ and wrecks the complete output
// The following line disables this warning on gcc
#pragma GCC diagnostic ignored "-Weffc++"

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxAliESDRun = 1;
   const Int_t kMaxAliESDHeader = 1;
   const Int_t kMaxAliESDZDC = 1;
   const Int_t kMaxAliESDFMD = 1;
   const Int_t kMaxAliESDVZERO = 1;
   const Int_t kMaxAliESDTZERO = 1;
   const Int_t kMaxTPCVertex = 1;
   const Int_t kMaxSPDVertex = 1;
   const Int_t kMaxPrimaryVertex = 1;
   const Int_t kMaxAliMultiplicity = 1;
   const Int_t kMaxPHOSTrigger = 1;
   const Int_t kMaxEMCALTrigger = 1;
   const Int_t kMaxSPDPileupVertices = 1;
   const Int_t kMaxTrkPileupVertices = 1;
   const Int_t kMaxTracks = 15708;
   const Int_t kMaxMuonTracks = 44;
   const Int_t kMaxMuonClusters = 281;
   const Int_t kMaxMuonPads = 2701;
   const Int_t kMaxMuonGlobalTracks = 1;
   const Int_t kMaxPmdTracks = 1;
   const Int_t kMaxAliESDTrdTrigger = 1;
   const Int_t kMaxTrdTracks = 525;
   const Int_t kMaxTrdTracklets = 46918;
   const Int_t kMaxV0s = 81326;
   const Int_t kMaxCascades = 1799;
   const Int_t kMaxKinks = 383;
   const Int_t kMaxCaloClusters = 1592;
   const Int_t kMaxEMCALCells = 1;
   const Int_t kMaxPHOSCells = 1;
   const Int_t kMaxAliRawDataErrorLogs = 16;
   const Int_t kMaxAliESDACORDE = 1;
   const Int_t kMaxAliESDAD = 1;
   const Int_t kMaxAliTOFHeader = 1;
   const Int_t kMaxCosmicTracks = 4;
   const Int_t kMaxAliESDTOFCluster = 6314;
   const Int_t kMaxAliESDTOFHit = 6314;
   const Int_t kMaxAliESDTOFMatch = 9831;
   const Int_t kMaxAliESDFIT = 1;
   const Int_t kMaxHLTGlobalTrigger = 1;
   const Int_t kMaxHLTGlobalTrigger_fInputObjectInfo = 1;

class ESD {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
 //AliESDRun       *AliESDRun_;
   UInt_t          AliESDRun_TObject_fUniqueID;
   UInt_t          AliESDRun_TObject_fBits;
   Float_t         AliESDRun_fCurrentL3;
   Float_t         AliESDRun_fCurrentDip;
   Float_t         AliESDRun_fBeamEnergy;
   Double32_t      AliESDRun_fMagneticField;
   Double32_t      AliESDRun_fMeanBeamInt[2][2];
   Double32_t      AliESDRun_fDiamondXY[2];
   Double32_t      AliESDRun_fDiamondCovXY[3];
   Double32_t      AliESDRun_fDiamondZ;
   Double32_t      AliESDRun_fDiamondSig2Z;
   UInt_t          AliESDRun_fPeriodNumber;
   Int_t           AliESDRun_fRunNumber;
   Int_t           AliESDRun_fRecoVersion;
   Int_t           AliESDRun_fBeamParticle[2];
   TString         AliESDRun_fBeamType;
   TObjArray       AliESDRun_fTriggerClasses;
   UInt_t          AliESDRun_fDetInDAQ;
   UInt_t          AliESDRun_fDetInReco;
   Float_t         AliESDRun_fT0spread[4];
   Int_t           AliESDRun_fCaloTriggerType[15];
   Float_t         AliESDRun_fVZEROEqFactors[64];
   Int_t           AliESDRun_fCaloTriggerTypeNew[19];
   UInt_t          AliESDRun_fCTPStart_fUniqueID;
   UInt_t          AliESDRun_fCTPStart_fBits;
   UInt_t          AliESDRun_fCTPStart_fOrbit;
   UInt_t          AliESDRun_fCTPStart_fPeriod;
   ULong64_t       AliESDRun_fCTPStart_fBunchCross;
 //AliESDHeader    *AliESDHeader_;
   UInt_t          AliESDHeader_AliVHeader_fUniqueID;
   UInt_t          AliESDHeader_AliVHeader_fBits;
   TString         AliESDHeader_AliVHeader_fName;
   TString         AliESDHeader_AliVHeader_fTitle;
   ULong64_t       AliESDHeader_fTriggerMask;
   ULong64_t       AliESDHeader_fTriggerMaskNext50;
   UInt_t          AliESDHeader_fOrbitNumber;
   UInt_t          AliESDHeader_fTimeStamp;
   UInt_t          AliESDHeader_fEventType;
   UInt_t          AliESDHeader_fEventSpecie;
   UInt_t          AliESDHeader_fPeriodNumber;
   Int_t           AliESDHeader_fEventNumberInFile;
   UShort_t        AliESDHeader_fBunchCrossNumber;
   UChar_t         AliESDHeader_fTriggerCluster;
   UInt_t          AliESDHeader_fL0TriggerInputs;
   UInt_t          AliESDHeader_fL1TriggerInputs;
   UShort_t        AliESDHeader_fL2TriggerInputs;
   UInt_t          AliESDHeader_fTriggerScalers_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalers_fBits;
   UInt_t          AliESDHeader_fTriggerScalers_fTimestamp_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalers_fTimestamp_fBits;
   UInt_t          AliESDHeader_fTriggerScalers_fTimestamp_fOrbit;
   UInt_t          AliESDHeader_fTriggerScalers_fTimestamp_fPeriod;
   ULong64_t       AliESDHeader_fTriggerScalers_fTimestamp_fBunchCross;
   TObjArray       AliESDHeader_fTriggerScalers_fScalers;
   UInt_t          AliESDHeader_fTriggerScalers_fTimeGroup;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fBits;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBits;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fOrbit;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fPeriod;
   ULong64_t       AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBunchCross;
   TObjArray       AliESDHeader_fTriggerScalersDeltaEvent_fScalers;
   UInt_t          AliESDHeader_fTriggerScalersDeltaEvent_fTimeGroup;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fBits;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fUniqueID;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBits;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fOrbit;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fPeriod;
   ULong64_t       AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBunchCross;
   TObjArray       AliESDHeader_fTriggerScalersDeltaRun_fScalers;
   UInt_t          AliESDHeader_fTriggerScalersDeltaRun_fTimeGroup;
   TObjArray       AliESDHeader_fTriggerInputsNames;
   TObjArray       AliESDHeader_fIRBufferArray;
   UInt_t          AliESDHeader_fIRInt2InteractionsMap_fUniqueID;
   UInt_t          AliESDHeader_fIRInt2InteractionsMap_fBits;
   UInt_t          AliESDHeader_fIRInt2InteractionsMap_fNbits;
   UInt_t          AliESDHeader_fIRInt2InteractionsMap_fNbytes;
   UChar_t         AliESDHeader_fIRInt2InteractionsMap_fAllBits[1];   //[AliESDHeader.fIRInt2InteractionsMap.fNbytes]
   UInt_t          AliESDHeader_fIRInt1InteractionsMap_fUniqueID;
   UInt_t          AliESDHeader_fIRInt1InteractionsMap_fBits;
   UInt_t          AliESDHeader_fIRInt1InteractionsMap_fNbits;
   UInt_t          AliESDHeader_fIRInt1InteractionsMap_fNbytes;
   UChar_t         AliESDHeader_fIRInt1InteractionsMap_fAllBits[1];   //[AliESDHeader.fIRInt1InteractionsMap.fNbytes]
   UChar_t         AliESDHeader_fTPCNoiseFilterCounter[3];
 //AliESDZDC       *AliESDZDC_;
   UInt_t          AliESDZDC_AliVZDC_fUniqueID;
   UInt_t          AliESDZDC_AliVZDC_fBits;
   Double32_t      AliESDZDC_fZDCN1Energy;
   Double32_t      AliESDZDC_fZDCP1Energy;
   Double32_t      AliESDZDC_fZDCN2Energy;
   Double32_t      AliESDZDC_fZDCP2Energy;
   Double32_t      AliESDZDC_fZDCEMEnergy;
   Double32_t      AliESDZDC_fZDCEMEnergy1;
   Double32_t      AliESDZDC_fZN1TowerEnergy[5];
   Double32_t      AliESDZDC_fZN2TowerEnergy[5];
   Double32_t      AliESDZDC_fZP1TowerEnergy[5];
   Double32_t      AliESDZDC_fZP2TowerEnergy[5];
   Double32_t      AliESDZDC_fZN1TowerEnergyLR[5];
   Double32_t      AliESDZDC_fZN2TowerEnergyLR[5];
   Double32_t      AliESDZDC_fZP1TowerEnergyLR[5];
   Double32_t      AliESDZDC_fZP2TowerEnergyLR[5];
   Short_t         AliESDZDC_fZDCParticipants;
   Short_t         AliESDZDC_fZDCPartSideA;
   Short_t         AliESDZDC_fZDCPartSideC;
   Double32_t      AliESDZDC_fImpactParameter;
   Double32_t      AliESDZDC_fImpactParamSideA;
   Double32_t      AliESDZDC_fImpactParamSideC;
   Double32_t      AliESDZDC_fZNACentrCoord[2];
   Double32_t      AliESDZDC_fZNCCentrCoord[2];
   UInt_t          AliESDZDC_fESDQuality;
   UInt_t          AliESDZDC_fVMEScaler[32];
   Int_t           AliESDZDC_fZDCTDCData[32][4];
   Float_t         AliESDZDC_fZDCTDCCorrected[32][4];
   Bool_t          AliESDZDC_fZNCTDChit;
   Bool_t          AliESDZDC_fZNATDChit;
   Bool_t          AliESDZDC_fZPCTDChit;
   Bool_t          AliESDZDC_fZPATDChit;
   Bool_t          AliESDZDC_fZEM1TDChit;
   Bool_t          AliESDZDC_fZEM2TDChit;
   Int_t           AliESDZDC_fZDCTDCChannels[7];
 //AliESDFMD       *AliESDFMD_;
   UInt_t          AliESDFMD_TObject_fUniqueID;
   UInt_t          AliESDFMD_TObject_fBits;
   UInt_t          AliESDFMD_fMultiplicity_fUniqueID;
   UInt_t          AliESDFMD_fMultiplicity_fBits;
   UShort_t        AliESDFMD_fMultiplicity_fMaxDetectors;
   UShort_t        AliESDFMD_fMultiplicity_fMaxRings;
   UShort_t        AliESDFMD_fMultiplicity_fMaxSectors;
   UShort_t        AliESDFMD_fMultiplicity_fMaxStrips;
   Int_t           AliESDFMD_fMultiplicity_fTotal;
   Float_t         AliESDFMD_fMultiplicity_fData[51200];   //[AliESDFMD.fMultiplicity.fTotal]
   UInt_t          AliESDFMD_fEta_fUniqueID;
   UInt_t          AliESDFMD_fEta_fBits;
   UShort_t        AliESDFMD_fEta_fMaxDetectors;
   UShort_t        AliESDFMD_fEta_fMaxRings;
   UShort_t        AliESDFMD_fEta_fMaxSectors;
   UShort_t        AliESDFMD_fEta_fMaxStrips;
   Int_t           AliESDFMD_fEta_fTotal;
   Float_t         AliESDFMD_fEta_fData[3072];   //[AliESDFMD.fEta.fTotal]
   Float_t         AliESDFMD_fNoiseFactor;
   Bool_t          AliESDFMD_fAngleCorrected;
 //AliESDVZERO     *AliESDVZERO_;
   UInt_t          AliESDVZERO_AliVVZERO_fUniqueID;
   UInt_t          AliESDVZERO_AliVVZERO_fBits;
   UInt_t          AliESDVZERO_fBBtriggerV0A;
   UInt_t          AliESDVZERO_fBGtriggerV0A;
   UInt_t          AliESDVZERO_fBBtriggerV0C;
   UInt_t          AliESDVZERO_fBGtriggerV0C;
   Float_t         AliESDVZERO_fMultiplicity[64];
   Float_t         AliESDVZERO_fAdc[64];
   Float_t         AliESDVZERO_fTime[64];
   Float_t         AliESDVZERO_fWidth[64];
   Bool_t          AliESDVZERO_fBBFlag[64];
   Bool_t          AliESDVZERO_fBGFlag[64];
   Float_t         AliESDVZERO_fV0ATime;
   Float_t         AliESDVZERO_fV0CTime;
   Float_t         AliESDVZERO_fV0ATimeError;
   Float_t         AliESDVZERO_fV0CTimeError;
   Int_t           AliESDVZERO_fV0ADecision;
   Int_t           AliESDVZERO_fV0CDecision;
   UShort_t        AliESDVZERO_fTriggerChargeA;
   UShort_t        AliESDVZERO_fTriggerChargeC;
   UShort_t        AliESDVZERO_fTriggerBits;
   Bool_t          AliESDVZERO_fIsBB[64][21];
   Bool_t          AliESDVZERO_fIsBG[64][21];
 //AliESDTZERO     *AliESDTZERO_;
   UInt_t          AliESDTZERO_TObject_fUniqueID;
   UInt_t          AliESDTZERO_TObject_fBits;
   Float_t         AliESDTZERO_fT0clock;
   Double32_t      AliESDTZERO_fT0TOF[3];
   Double32_t      AliESDTZERO_fT0zVertex;
   Double32_t      AliESDTZERO_fT0timeStart;
   Int_t           AliESDTZERO_fT0trig;
   Double32_t      AliESDTZERO_fT0time[24];
   Double32_t      AliESDTZERO_fT0amplitude[24];
   Float_t         AliESDTZERO_fTimeFull[24][5];
   Float_t         AliESDTZERO_fOrA[5];
   Float_t         AliESDTZERO_fOrC[5];
   Float_t         AliESDTZERO_fTVDC[5];
   Bool_t          AliESDTZERO_fPileup;
   Bool_t          AliESDTZERO_fSattelite;
   Float_t         AliESDTZERO_fMultC;
   Float_t         AliESDTZERO_fMultA;
   Bool_t          AliESDTZERO_fBackground;
   Float_t         AliESDTZERO_fPileupTime[6];
   Double32_t      AliESDTZERO_fT0TOFbest[3];
   Double32_t      AliESDTZERO_fT0NewAmplitude[24];
   UInt_t          AliESDTZERO_fPileupBits_fUniqueID;
   UInt_t          AliESDTZERO_fPileupBits_fBits;
   UInt_t          AliESDTZERO_fPileupBits_fNbits;
   UInt_t          AliESDTZERO_fPileupBits_fNbytes;
   UChar_t         AliESDTZERO_fPileupBits_fAllBits[1];   //[AliESDTZERO.fPileupBits.fNbytes]
 //AliESDVertex    *TPCVertex_;
   UInt_t          TPCVertex_AliVertex_fUniqueID;
   UInt_t          TPCVertex_AliVertex_fBits;
   TString         TPCVertex_AliVertex_fName;
   TString         TPCVertex_AliVertex_fTitle;
   Double32_t      TPCVertex_AliVertex_fPosition[3];
   Double32_t      TPCVertex_AliVertex_fSigma;
   Int_t           TPCVertex_AliVertex_fNContributors;
   Int_t           TPCVertex_AliVertex_fNIndices;
   UShort_t        TPCVertex_AliVertex_fIndices[4153];   //[TPCVertex.AliVertex.fNIndices]
   Double32_t      TPCVertex_fCovXX;
   Double32_t      TPCVertex_fCovXY;
   Double32_t      TPCVertex_fCovYY;
   Double32_t      TPCVertex_fCovXZ;
   Double32_t      TPCVertex_fCovYZ;
   Double32_t      TPCVertex_fCovZZ;
   Double32_t      TPCVertex_fSNR[3];
   Double32_t      TPCVertex_fChi2;
   Char_t          TPCVertex_fID;
   Char_t          TPCVertex_fBCID;
 //AliESDVertex    *SPDVertex_;
   UInt_t          SPDVertex_AliVertex_fUniqueID;
   UInt_t          SPDVertex_AliVertex_fBits;
   TString         SPDVertex_AliVertex_fName;
   TString         SPDVertex_AliVertex_fTitle;
   Double32_t      SPDVertex_AliVertex_fPosition[3];
   Double32_t      SPDVertex_AliVertex_fSigma;
   Int_t           SPDVertex_AliVertex_fNContributors;
   Int_t           SPDVertex_AliVertex_fNIndices;
   UShort_t        SPDVertex_AliVertex_fIndices[1];   //[SPDVertex.AliVertex.fNIndices]
   Double32_t      SPDVertex_fCovXX;
   Double32_t      SPDVertex_fCovXY;
   Double32_t      SPDVertex_fCovYY;
   Double32_t      SPDVertex_fCovXZ;
   Double32_t      SPDVertex_fCovYZ;
   Double32_t      SPDVertex_fCovZZ;
   Double32_t      SPDVertex_fSNR[3];
   Double32_t      SPDVertex_fChi2;
   Char_t          SPDVertex_fID;
   Char_t          SPDVertex_fBCID;
 //AliESDVertex    *PrimaryVertex_;
   UInt_t          PrimaryVertex_AliVertex_fUniqueID;
   UInt_t          PrimaryVertex_AliVertex_fBits;
   TString         PrimaryVertex_AliVertex_fName;
   TString         PrimaryVertex_AliVertex_fTitle;
   Double32_t      PrimaryVertex_AliVertex_fPosition[3];
   Double32_t      PrimaryVertex_AliVertex_fSigma;
   Int_t           PrimaryVertex_AliVertex_fNContributors;
   Int_t           PrimaryVertex_AliVertex_fNIndices;
   UShort_t        PrimaryVertex_AliVertex_fIndices[3309];   //[PrimaryVertex.AliVertex.fNIndices]
   Double32_t      PrimaryVertex_fCovXX;
   Double32_t      PrimaryVertex_fCovXY;
   Double32_t      PrimaryVertex_fCovYY;
   Double32_t      PrimaryVertex_fCovXZ;
   Double32_t      PrimaryVertex_fCovYZ;
   Double32_t      PrimaryVertex_fCovZZ;
   Double32_t      PrimaryVertex_fSNR[3];
   Double32_t      PrimaryVertex_fChi2;
   Char_t          PrimaryVertex_fID;
   Char_t          PrimaryVertex_fBCID;
 //AliMultiplicity *AliMultiplicity_;
   UInt_t          AliMultiplicity_AliVMultiplicity_fUniqueID;
   UInt_t          AliMultiplicity_AliVMultiplicity_fBits;
   TString         AliMultiplicity_AliVMultiplicity_fName;
   TString         AliMultiplicity_AliVMultiplicity_fTitle;
   Int_t           AliMultiplicity_fNtracks;
   Int_t           AliMultiplicity_fNsingle;
   Int_t           AliMultiplicity_fNsingleSPD2;
   Float_t         AliMultiplicity_fDPhiWindow2;
   Float_t         AliMultiplicity_fDThetaWindow2;
   Float_t         AliMultiplicity_fDPhiShift;
   Float_t         AliMultiplicity_fNStdDev;
   Int_t           AliMultiplicity_fLabels[5129];   //[AliMultiplicity.fNtracks]
   Int_t           AliMultiplicity_fLabelsL2[5129];   //[AliMultiplicity.fNtracks]
   UInt_t          AliMultiplicity_fUsedClusS[4321];   //[AliMultiplicity.fNsingle]
   ULong64_t       AliMultiplicity_fUsedClusT[5129];   //[AliMultiplicity.fNtracks]
   Double32_t      AliMultiplicity_fTh[5129];   //[AliMultiplicity.fNtracks]
   Double32_t      AliMultiplicity_fPhi[5129];   //[AliMultiplicity.fNtracks]
   Double32_t      AliMultiplicity_fDeltTh[5129];   //[AliMultiplicity.fNtracks]
   Double32_t      AliMultiplicity_fDeltPhi[5129];   //[AliMultiplicity.fNtracks]
   Double32_t      AliMultiplicity_fThsingle[4321];   //[AliMultiplicity.fNsingle]
   Double32_t      AliMultiplicity_fPhisingle[4321];   //[AliMultiplicity.fNsingle]
   Int_t           AliMultiplicity_fLabelssingle[4321];   //[AliMultiplicity.fNsingle]
   Short_t         AliMultiplicity_fFiredChips[2];
   UInt_t          AliMultiplicity_fITSClusters[6];
   UInt_t          AliMultiplicity_fFastOrFiredChips_fUniqueID;
   UInt_t          AliMultiplicity_fFastOrFiredChips_fBits;
   UInt_t          AliMultiplicity_fFastOrFiredChips_fNbits;
   UInt_t          AliMultiplicity_fFastOrFiredChips_fNbytes;
   UChar_t         AliMultiplicity_fFastOrFiredChips_fAllBits[1];   //[AliMultiplicity.fFastOrFiredChips.fNbytes]
   UInt_t          AliMultiplicity_fClusterFiredChips_fUniqueID;
   UInt_t          AliMultiplicity_fClusterFiredChips_fBits;
   UInt_t          AliMultiplicity_fClusterFiredChips_fNbits;
   UInt_t          AliMultiplicity_fClusterFiredChips_fNbytes;
   UChar_t         AliMultiplicity_fClusterFiredChips_fAllBits[1];   //[AliMultiplicity.fClusterFiredChips.fNbytes]
 //AliESDCaloTrigger *PHOSTrigger_;
   UInt_t          PHOSTrigger_AliVCaloTrigger_fUniqueID;
   UInt_t          PHOSTrigger_AliVCaloTrigger_fBits;
   TString         PHOSTrigger_AliVCaloTrigger_fName;
   TString         PHOSTrigger_AliVCaloTrigger_fTitle;
   Int_t           PHOSTrigger_fNEntries;
   Int_t           PHOSTrigger_fCurrent;
   Int_t           PHOSTrigger_fColumn[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fRow[1];   //[PHOSTrigger.fNEntries]
   Float_t         PHOSTrigger_fAmplitude[1];   //[PHOSTrigger.fNEntries]
   Float_t         PHOSTrigger_fTime[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fNL0Times[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fL1TimeSum[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fTriggerBits[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fL1Threshold[4];
   Int_t           PHOSTrigger_fL1V0[2];
   Int_t           PHOSTrigger_fL1FrameMask;
   Int_t           PHOSTrigger_fL1DCALThreshold[4];
   Int_t           PHOSTrigger_fL1SubRegion[1];   //[PHOSTrigger.fNEntries]
   Int_t           PHOSTrigger_fL1DCALFrameMask;
   Int_t           PHOSTrigger_fMedian[2];
   Int_t           PHOSTrigger_fTriggerBitWord;
   Int_t           PHOSTrigger_fL1DCALV0[2];
 //AliESDCaloTrigger *EMCALTrigger_;
   UInt_t          EMCALTrigger_AliVCaloTrigger_fUniqueID;
   UInt_t          EMCALTrigger_AliVCaloTrigger_fBits;
   TString         EMCALTrigger_AliVCaloTrigger_fName;
   TString         EMCALTrigger_AliVCaloTrigger_fTitle;
   Int_t           EMCALTrigger_fNEntries;
   Int_t           EMCALTrigger_fCurrent;
   Int_t           EMCALTrigger_fColumn[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fRow[2611];   //[EMCALTrigger.fNEntries]
   Float_t         EMCALTrigger_fAmplitude[2611];   //[EMCALTrigger.fNEntries]
   Float_t         EMCALTrigger_fTime[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fNL0Times[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fL1TimeSum[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fTriggerBits[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fL1Threshold[4];
   Int_t           EMCALTrigger_fL1V0[2];
   Int_t           EMCALTrigger_fL1FrameMask;
   Int_t           EMCALTrigger_fL1DCALThreshold[4];
   Int_t           EMCALTrigger_fL1SubRegion[2611];   //[EMCALTrigger.fNEntries]
   Int_t           EMCALTrigger_fL1DCALFrameMask;
   Int_t           EMCALTrigger_fMedian[2];
   Int_t           EMCALTrigger_fTriggerBitWord;
   Int_t           EMCALTrigger_fL1DCALV0[2];
   Int_t           SPDPileupVertices_;
   UInt_t          SPDPileupVertices_fUniqueID[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   UInt_t          SPDPileupVertices_fBits[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   TString         SPDPileupVertices_fName[kMaxSPDPileupVertices];
   TString         SPDPileupVertices_fTitle[kMaxSPDPileupVertices];
   Double32_t      SPDPileupVertices_fPosition[kMaxSPDPileupVertices][3];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fSigma[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Int_t           SPDPileupVertices_fNContributors[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Int_t           SPDPileupVertices_fNIndices[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   UShort_t       *SPDPileupVertices_fIndices[kMaxSPDPileupVertices];   //[SPDPileupVertices_fNIndices]
   Double32_t      SPDPileupVertices_fCovXX[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fCovXY[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fCovYY[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fCovXZ[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fCovYZ[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fCovZZ[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fSNR[kMaxSPDPileupVertices][3];   //[SPDPileupVertices_]
   Double32_t      SPDPileupVertices_fChi2[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Char_t          SPDPileupVertices_fID[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Char_t          SPDPileupVertices_fBCID[kMaxSPDPileupVertices];   //[SPDPileupVertices_]
   Int_t           TrkPileupVertices_;
   UInt_t          TrkPileupVertices_fUniqueID[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   UInt_t          TrkPileupVertices_fBits[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   TString         TrkPileupVertices_fName[kMaxTrkPileupVertices];
   TString         TrkPileupVertices_fTitle[kMaxTrkPileupVertices];
   Double32_t      TrkPileupVertices_fPosition[kMaxTrkPileupVertices][3];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fSigma[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Int_t           TrkPileupVertices_fNContributors[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Int_t           TrkPileupVertices_fNIndices[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   UShort_t       *TrkPileupVertices_fIndices[kMaxTrkPileupVertices];   //[TrkPileupVertices_fNIndices]
   Double32_t      TrkPileupVertices_fCovXX[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fCovXY[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fCovYY[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fCovXZ[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fCovYZ[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fCovZZ[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fSNR[kMaxTrkPileupVertices][3];   //[TrkPileupVertices_]
   Double32_t      TrkPileupVertices_fChi2[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Char_t          TrkPileupVertices_fID[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Char_t          TrkPileupVertices_fBCID[kMaxTrkPileupVertices];   //[TrkPileupVertices_]
   Int_t           Tracks_;
   UInt_t          Tracks_fUniqueID[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fBits[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fX[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fAlpha[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fP[kMaxTracks][5];   //[Tracks_]
   Double32_t      Tracks_fC[kMaxTracks][15];   //[Tracks_]
   UInt_t          Tracks_fTPCFitMap_fUniqueID[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCFitMap_fBits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCFitMap_fNbits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCFitMap_fNbytes[kMaxTracks];   //[Tracks_]
   UChar_t        *Tracks_fTPCFitMap_fAllBits[kMaxTracks];   //[Tracks_fTPCFitMap_fNbytes]
   UInt_t          Tracks_fTPCClusterMap_fUniqueID[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCClusterMap_fBits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCClusterMap_fNbits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCClusterMap_fNbytes[kMaxTracks];   //[Tracks_]
   UChar_t        *Tracks_fTPCClusterMap_fAllBits[kMaxTracks];   //[Tracks_fTPCClusterMap_fNbytes]
   UInt_t          Tracks_fTPCSharedMap_fUniqueID[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCSharedMap_fBits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCSharedMap_fNbits[kMaxTracks];   //[Tracks_]
   UInt_t          Tracks_fTPCSharedMap_fNbytes[kMaxTracks];   //[Tracks_]
   UChar_t        *Tracks_fTPCSharedMap_fAllBits[kMaxTracks];   //[Tracks_fTPCSharedMap_fNbytes]
   UShort_t        Tracks_fFrTrackID[kMaxTracks];   //[Tracks_]
   ULong_t         Tracks_fFlags[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fID[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fLabel[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fITSLabel[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fITSModule[kMaxTracks][12];   //[Tracks_]
   Int_t           Tracks_fTPCLabel[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fTRDLabel[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fTOFindex[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fHMPIDqn[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fHMPIDcluIdx[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fCaloIndex[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fKinkIndexes[kMaxTracks][3];   //[Tracks_]
   Int_t           Tracks_fV0Indexes[kMaxTracks][3];   //[Tracks_]
   Double32_t      Tracks_fHMPIDtrkTheta[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDtrkPhi[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDsignal[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fdTPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fzTPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCddTPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCdzTPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCzzTPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCchi2TPC[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fD[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fZ[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCdd[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCdz[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCzz[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fITSchi2Std[kMaxTracks][3];   //[Tracks_]
   Double32_t      Tracks_fITSchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTPCchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTPCchi2Iter1[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTRDchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTOFchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDchi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fGlobalChi2[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fITSsignal[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fITSdEdxSamples[kMaxTracks][4];   //[Tracks_]
   Double32_t      Tracks_fTPCsignal[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTPCsignalS[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTPCPoints[kMaxTracks][4];   //[Tracks_]
   Double32_t      Tracks_fTRDsignal[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTRDQuality[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fTRDBudget[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCaloDx[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fCaloDz[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDtrkX[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDtrkY[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDmipX[kMaxTracks];   //[Tracks_]
   Double32_t      Tracks_fHMPIDmipY[kMaxTracks];   //[Tracks_]
   UShort_t        Tracks_fTPCncls[kMaxTracks];   //[Tracks_]
   UShort_t        Tracks_fTPCnclsF[kMaxTracks];   //[Tracks_]
   UShort_t        Tracks_fTPCsignalN[kMaxTracks];   //[Tracks_]
   UShort_t        Tracks_fTPCnclsIter1[kMaxTracks];   //[Tracks_]
   UShort_t        Tracks_fTPCnclsFIter1[kMaxTracks];   //[Tracks_]
   Char_t          Tracks_fITSncls[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fITSClusterMap[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fITSSharedMap[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fTRDncls[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fTRDncls0[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fTRDntracklets[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fTRDNchamberdEdx[kMaxTracks];   //[Tracks_]
   UChar_t         Tracks_fTRDNclusterdEdx[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fTRDnSlices[kMaxTracks];   //[Tracks_]
   Double32_t     *Tracks_fTRDslices[kMaxTracks];   //[Tracks_fTRDnSlices]
   Char_t          Tracks_fTRDTimBin[kMaxTracks][6];   //[Tracks_]
   Char_t          Tracks_fVertexID[kMaxTracks];   //[Tracks_]
   Char_t          Tracks_fPIDForTracking[kMaxTracks];   //[Tracks_]
   Double_t        Tracks_fTrackPhiOnEMCal[kMaxTracks];   //[Tracks_]
   Double_t        Tracks_fTrackEtaOnEMCal[kMaxTracks];   //[Tracks_]
   Double_t        Tracks_fTrackPtOnEMCal[kMaxTracks];   //[Tracks_]
   Int_t           Tracks_fNtofClusters[kMaxTracks];   //[Tracks_]
   Int_t          *Tracks_fTOFcluster[kMaxTracks];   //[Tracks_fNtofClusters]
   Int_t           MuonTracks_;
   UInt_t          MuonTracks_fUniqueID[kMaxMuonTracks];   //[MuonTracks_]
   UInt_t          MuonTracks_fBits[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fInverseBendingMomentum[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaX[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaY[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fZ[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fBendingCoor[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fNonBendingCoor[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fInverseBendingMomentumAtDCA[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaXAtDCA[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaYAtDCA[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fBendingCoorAtDCA[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fNonBendingCoorAtDCA[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fInverseBendingMomentumUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaXUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fThetaYUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fZUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fBendingCoorUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fNonBendingCoorUncorrected[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fCovariances[kMaxMuonTracks][15];   //[MuonTracks_]
   Double32_t      MuonTracks_fRAtAbsorberEnd[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fChi2[kMaxMuonTracks];   //[MuonTracks_]
   Double32_t      MuonTracks_fChi2MatchTrigger[kMaxMuonTracks];   //[MuonTracks_]
   Int_t           MuonTracks_fLocalTrigger[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fX1Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fY1Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fX2Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fY2Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fX3Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fY3Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fX4Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fY4Pattern[kMaxMuonTracks];   //[MuonTracks_]
   UInt_t          MuonTracks_fMuonClusterMap[kMaxMuonTracks];   //[MuonTracks_]
   UShort_t        MuonTracks_fHitsPatternInTrigCh[kMaxMuonTracks];   //[MuonTracks_]
   UInt_t          MuonTracks_fHitsPatternInTrigChTrk[kMaxMuonTracks];   //[MuonTracks_]
   UChar_t         MuonTracks_fNHit[kMaxMuonTracks];   //[MuonTracks_]
   Int_t           MuonTracks_fLabel[kMaxMuonTracks];   //[MuonTracks_]
   Int_t           MuonClusters_;
   UInt_t          MuonClusters_fUniqueID[kMaxMuonClusters];   //[MuonClusters_]
   UInt_t          MuonClusters_fBits[kMaxMuonClusters];   //[MuonClusters_]
   Double32_t      MuonClusters_fXYZ[kMaxMuonClusters][3];   //[MuonClusters_]
   Double32_t      MuonClusters_fErrXY[kMaxMuonClusters][2];   //[MuonClusters_]
   Double32_t      MuonClusters_fCharge[kMaxMuonClusters];   //[MuonClusters_]
   Double32_t      MuonClusters_fChi2[kMaxMuonClusters];   //[MuonClusters_]
   Int_t           MuonClusters_fNPads[kMaxMuonClusters];   //[MuonClusters_]
   Int_t           MuonClusters_fLabel[kMaxMuonClusters];   //[MuonClusters_]
   Int_t           MuonPads_;
   UInt_t          MuonPads_fUniqueID[kMaxMuonPads];   //[MuonPads_]
   UInt_t          MuonPads_fBits[kMaxMuonPads];   //[MuonPads_]
   Int_t           MuonPads_fADC[kMaxMuonPads];   //[MuonPads_]
   Double32_t      MuonPads_fCharge[kMaxMuonPads];   //[MuonPads_]
   Int_t           MuonGlobalTracks_;
   UInt_t          MuonGlobalTracks_fUniqueID[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   UInt_t          MuonGlobalTracks_fBits[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Short_t         MuonGlobalTracks_fCharge[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Short_t         MuonGlobalTracks_fMatchTrigger[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Short_t         MuonGlobalTracks_fNMFTClusters[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Short_t         MuonGlobalTracks_fNWrongMFTClustersMC[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   ULong_t         MuonGlobalTracks_fMFTClusterPattern[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fPx[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fPy[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fPz[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fPt[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fP[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fEta[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fRapidity[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fFirstTrackingPointX[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fFirstTrackingPointY[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fFirstTrackingPointZ[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fXAtVertex[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fYAtVertex[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fRAtAbsorberEnd[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fChi2OverNdf[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fChi2MatchTrigger[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Int_t           MuonGlobalTracks_fLabel[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   UInt_t          MuonGlobalTracks_fMuonClusterMap[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   UShort_t        MuonGlobalTracks_fHitsPatternInTrigCh[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   UInt_t          MuonGlobalTracks_fHitsPatternInTrigChTrk[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Int_t           MuonGlobalTracks_fLoCircuit[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Bool_t          MuonGlobalTracks_fIsConnected[kMaxMuonGlobalTracks];   //[MuonGlobalTracks_]
   Double_t        MuonGlobalTracks_fProdVertexXYZ[kMaxMuonGlobalTracks][3];   //[MuonGlobalTracks_]
   Int_t           PmdTracks_;
   UInt_t          PmdTracks_fUniqueID[kMaxPmdTracks];   //[PmdTracks_]
   UInt_t          PmdTracks_fBits[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fX[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fY[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fZ[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fCluADC[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fCluPID[kMaxPmdTracks];   //[PmdTracks_]
   UChar_t         PmdTracks_fDet[kMaxPmdTracks];   //[PmdTracks_]
   UChar_t         PmdTracks_fNcell[kMaxPmdTracks];   //[PmdTracks_]
   Int_t           PmdTracks_fSmn[kMaxPmdTracks];   //[PmdTracks_]
   Int_t           PmdTracks_fTrackNo[kMaxPmdTracks];   //[PmdTracks_]
   Int_t           PmdTracks_fTrackPid[kMaxPmdTracks];   //[PmdTracks_]
   UShort_t        PmdTracks_fClMatching[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fSigX[kMaxPmdTracks];   //[PmdTracks_]
   Double32_t      PmdTracks_fSigY[kMaxPmdTracks];   //[PmdTracks_]
 //AliESDTrdTrigger *AliESDTrdTrigger_;
   UInt_t          AliESDTrdTrigger_TObject_fUniqueID;
   UInt_t          AliESDTrdTrigger_TObject_fBits;
   UInt_t          AliESDTrdTrigger_fFlags[18];
   Int_t           TrdTracks_;
   UInt_t          TrdTracks_fUniqueID[kMaxTrdTracks];   //[TrdTracks_]
   UInt_t          TrdTracks_fBits[kMaxTrdTracks];   //[TrdTracks_]
   Int_t           TrdTracks_fSector[kMaxTrdTracks];   //[TrdTracks_]
   Char_t          TrdTracks_fStack[kMaxTrdTracks];   //[TrdTracks_]
   Int_t           TrdTracks_fA[kMaxTrdTracks];   //[TrdTracks_]
   Int_t           TrdTracks_fB[kMaxTrdTracks];   //[TrdTracks_]
   Short_t         TrdTracks_fC[kMaxTrdTracks];   //[TrdTracks_]
   Short_t         TrdTracks_fY[kMaxTrdTracks];   //[TrdTracks_]
   UChar_t         TrdTracks_fPID[kMaxTrdTracks];   //[TrdTracks_]
   Char_t          TrdTracks_fLayerMask[kMaxTrdTracks];   //[TrdTracks_]
   Char_t          TrdTracks_fTrackletIndex[kMaxTrdTracks][6];   //[TrdTracks_]
   UShort_t        TrdTracks_fFlags[kMaxTrdTracks];   //[TrdTracks_]
   UChar_t         TrdTracks_fFlagsTiming[kMaxTrdTracks];   //[TrdTracks_]
   UChar_t         TrdTracks_fReserved[kMaxTrdTracks];   //[TrdTracks_]
   TRef            TrdTracks_fTrackletRefs[6][kMaxTrdTracks];
   TRef            TrdTracks_fTrackMatch[kMaxTrdTracks];
   Int_t           TrdTracks_fLabel[kMaxTrdTracks];   //[TrdTracks_]
   Int_t           TrdTracklets_;
   UInt_t          TrdTracklets_fUniqueID[kMaxTrdTracklets];   //[TrdTracklets_]
   UInt_t          TrdTracklets_fBits[kMaxTrdTracklets];   //[TrdTracklets_]
   Short_t         TrdTracklets_fHCId[kMaxTrdTracklets];   //[TrdTracklets_]
   UInt_t          TrdTracklets_fTrackletWord[kMaxTrdTracklets];   //[TrdTracklets_]
   Int_t           TrdTracklets_fLabel[kMaxTrdTracklets];   //[TrdTracklets_]
   Int_t           V0s_;
   UInt_t          V0s_fUniqueID[kMaxV0s];   //[V0s_]
   UInt_t          V0s_fBits[kMaxV0s];   //[V0s_]
   UInt_t          V0s_fParamN_fUniqueID[kMaxV0s];   //[V0s_]
   UInt_t          V0s_fParamN_fBits[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamN_fX[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamN_fAlpha[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamN_fP[kMaxV0s][5];   //[V0s_]
   Double32_t      V0s_fParamN_fC[kMaxV0s][15];   //[V0s_]
   UInt_t          V0s_fParamP_fUniqueID[kMaxV0s];   //[V0s_]
   UInt_t          V0s_fParamP_fBits[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamP_fX[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamP_fAlpha[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fParamP_fP[kMaxV0s][5];   //[V0s_]
   Double32_t      V0s_fParamP_fC[kMaxV0s][15];   //[V0s_]
   Double32_t      V0s_fEffMass[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fDcaV0Daughters[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fChi2V0[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fPos[kMaxV0s][3];   //[V0s_]
   Double32_t      V0s_fPosCov[kMaxV0s][6];   //[V0s_]
   Double32_t      V0s_fNmom[kMaxV0s][3];   //[V0s_]
   Double32_t      V0s_fPmom[kMaxV0s][3];   //[V0s_]
   Double32_t      V0s_fNormDCAPrim[kMaxV0s][2];   //[V0s_]
   Double32_t      V0s_fRr[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fDistSigma[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fChi2Before[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fChi2After[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fCausality[kMaxV0s][4];   //[V0s_]
   Double32_t      V0s_fAngle[kMaxV0s][3];   //[V0s_]
   Double32_t      V0s_fPointAngleFi[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fPointAngleTh[kMaxV0s];   //[V0s_]
   Double32_t      V0s_fPointAngle[kMaxV0s];   //[V0s_]
   Int_t           V0s_fPdgCode[kMaxV0s];   //[V0s_]
   Int_t           V0s_fNidx[kMaxV0s];   //[V0s_]
   Int_t           V0s_fPidx[kMaxV0s];   //[V0s_]
   Short_t         V0s_fStatus[kMaxV0s];   //[V0s_]
   Short_t         V0s_fNBefore[kMaxV0s];   //[V0s_]
   Short_t         V0s_fNAfter[kMaxV0s];   //[V0s_]
   Bool_t          V0s_fOnFlyStatus[kMaxV0s];   //[V0s_]
   Int_t           Cascades_;
   UInt_t          Cascades_fUniqueID[kMaxCascades];   //[Cascades_]
   UInt_t          Cascades_fBits[kMaxCascades];   //[Cascades_]
   UInt_t          Cascades_fParamN_fUniqueID[kMaxCascades];   //[Cascades_]
   UInt_t          Cascades_fParamN_fBits[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamN_fX[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamN_fAlpha[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamN_fP[kMaxCascades][5];   //[Cascades_]
   Double32_t      Cascades_fParamN_fC[kMaxCascades][15];   //[Cascades_]
   UInt_t          Cascades_fParamP_fUniqueID[kMaxCascades];   //[Cascades_]
   UInt_t          Cascades_fParamP_fBits[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamP_fX[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamP_fAlpha[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fParamP_fP[kMaxCascades][5];   //[Cascades_]
   Double32_t      Cascades_fParamP_fC[kMaxCascades][15];   //[Cascades_]
   Double32_t      Cascades_fEffMass[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fDcaV0Daughters[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fChi2V0[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fPos[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fPosCov[kMaxCascades][6];   //[Cascades_]
   Double32_t      Cascades_fNmom[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fPmom[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fNormDCAPrim[kMaxCascades][2];   //[Cascades_]
   Double32_t      Cascades_fRr[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fDistSigma[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fChi2Before[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fChi2After[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fCausality[kMaxCascades][4];   //[Cascades_]
   Double32_t      Cascades_fAngle[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fPointAngleFi[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fPointAngleTh[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fPointAngle[kMaxCascades];   //[Cascades_]
   Int_t           Cascades_fPdgCode[kMaxCascades];   //[Cascades_]
   Int_t           Cascades_fNidx[kMaxCascades];   //[Cascades_]
   Int_t           Cascades_fPidx[kMaxCascades];   //[Cascades_]
   Short_t         Cascades_fStatus[kMaxCascades];   //[Cascades_]
   Short_t         Cascades_fNBefore[kMaxCascades];   //[Cascades_]
   Short_t         Cascades_fNAfter[kMaxCascades];   //[Cascades_]
   Bool_t          Cascades_fOnFlyStatus[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fEffMassXi[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fChi2Xi[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fDcaXiDaughters[kMaxCascades];   //[Cascades_]
   Double32_t      Cascades_fPosXi[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fPosCovXi[kMaxCascades][6];   //[Cascades_]
   Double32_t      Cascades_fBachMom[kMaxCascades][3];   //[Cascades_]
   Double32_t      Cascades_fBachMomCov[kMaxCascades][6];   //[Cascades_]
   Int_t           Cascades_fPdgCodeXi[kMaxCascades];   //[Cascades_]
   Int_t           Cascades_fBachIdx[kMaxCascades];   //[Cascades_]
   Int_t           Kinks_;
   UInt_t          Kinks_fUniqueID[kMaxKinks];   //[Kinks_]
   UInt_t          Kinks_fBits[kMaxKinks];   //[Kinks_]
   UInt_t          Kinks_fParamDaughter_fUniqueID[kMaxKinks];   //[Kinks_]
   UInt_t          Kinks_fParamDaughter_fBits[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamDaughter_fX[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamDaughter_fAlpha[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamDaughter_fP[kMaxKinks][5];   //[Kinks_]
   Double32_t      Kinks_fParamDaughter_fC[kMaxKinks][15];   //[Kinks_]
   UInt_t          Kinks_fParamMother_fUniqueID[kMaxKinks];   //[Kinks_]
   UInt_t          Kinks_fParamMother_fBits[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamMother_fX[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamMother_fAlpha[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fParamMother_fP[kMaxKinks][5];   //[Kinks_]
   Double32_t      Kinks_fParamMother_fC[kMaxKinks][15];   //[Kinks_]
   Double32_t      Kinks_fDist1[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fDist2[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fPdr[kMaxKinks][3];   //[Kinks_]
   Double32_t      Kinks_fXr[kMaxKinks][3];   //[Kinks_]
   Double32_t      Kinks_fPm[kMaxKinks][3];   //[Kinks_]
   Double32_t      Kinks_fRr[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fShapeFactor[kMaxKinks];   //[Kinks_]
   Double32_t      Kinks_fTPCdensity[kMaxKinks][2][2];   //[Kinks_]
   Double32_t      Kinks_fAngle[kMaxKinks][3];   //[Kinks_]
   Int_t           Kinks_fLab[kMaxKinks][2];   //[Kinks_]
   Int_t           Kinks_fIndex[kMaxKinks][2];   //[Kinks_]
   Short_t         Kinks_fID[kMaxKinks];   //[Kinks_]
   UChar_t         Kinks_fRow0[kMaxKinks];   //[Kinks_]
   UChar_t         Kinks_fMultiple[kMaxKinks][2];   //[Kinks_]
   UChar_t         Kinks_fTPCncls[kMaxKinks][2];   //[Kinks_]
   Char_t          Kinks_fStatus[kMaxKinks][12];   //[Kinks_]
   Int_t           CaloClusters_;
   UInt_t          CaloClusters_fUniqueID[kMaxCaloClusters];   //[CaloClusters_]
   UInt_t          CaloClusters_fBits[kMaxCaloClusters];   //[CaloClusters_]
   Int_t           CaloClusters_fNCells[kMaxCaloClusters];   //[CaloClusters_]
   UShort_t       *CaloClusters_fCellsAbsId[kMaxCaloClusters];   //[CaloClusters_fNCells]
   Double32_t     *CaloClusters_fCellsAmpFraction[kMaxCaloClusters];   //[CaloClusters_fNCells]
   Double32_t      CaloClusters_fGlobalPos[kMaxCaloClusters][3];   //[CaloClusters_]
   Double32_t      CaloClusters_fEnergy[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fDispersion[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fChi2[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fM20[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fM02[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fEmcCpvDistance[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fTrackDx[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fTrackDz[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fDistToBadChannel[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fPID[kMaxCaloClusters][14];   //[CaloClusters_]
   Int_t           CaloClusters_fID[kMaxCaloClusters];   //[CaloClusters_]
   UChar_t         CaloClusters_fNExMax[kMaxCaloClusters];   //[CaloClusters_]
   Char_t          CaloClusters_fClusterType[kMaxCaloClusters];   //[CaloClusters_]
   Double_t        CaloClusters_fTOF[kMaxCaloClusters];   //[CaloClusters_]
   Double32_t      CaloClusters_fCoreEnergy[kMaxCaloClusters];   //[CaloClusters_]
   UInt_t          CaloClusters_fNLabel[kMaxCaloClusters];   //[CaloClusters_]
   UShort_t       *CaloClusters_fClusterMCEdepFraction[kMaxCaloClusters];   //[CaloClusters_fNLabel]
   UInt_t         *CaloClusters_fCellsMCEdepFractionMap[kMaxCaloClusters];   //[CaloClusters_fNCells]
 //AliESDCaloCells *EMCALCells_;
   UInt_t          EMCALCells_AliVCaloCells_fUniqueID;
   UInt_t          EMCALCells_AliVCaloCells_fBits;
   TString         EMCALCells_AliVCaloCells_fName;
   TString         EMCALCells_AliVCaloCells_fTitle;
   Int_t           EMCALCells_fNCells;
   Bool_t          EMCALCells_fHGLG[5504];   //[EMCALCells.fNCells]
   Short_t         EMCALCells_fCellNumber[5504];   //[EMCALCells.fNCells]
   Double32_t      EMCALCells_fAmplitude[5504];   //[EMCALCells.fNCells]
   Double32_t      EMCALCells_fTime[5504];   //[EMCALCells.fNCells]
   Double32_t      EMCALCells_fEFraction[5504];   //[EMCALCells.fNCells]
   Int_t           EMCALCells_fMCLabel[5504];   //[EMCALCells.fNCells]
   Char_t          EMCALCells_fType;
 //AliESDCaloCells *PHOSCells_;
   UInt_t          PHOSCells_AliVCaloCells_fUniqueID;
   UInt_t          PHOSCells_AliVCaloCells_fBits;
   TString         PHOSCells_AliVCaloCells_fName;
   TString         PHOSCells_AliVCaloCells_fTitle;
   Int_t           PHOSCells_fNCells;
   Bool_t          PHOSCells_fHGLG[1];   //[PHOSCells.fNCells]
   Short_t         PHOSCells_fCellNumber[1];   //[PHOSCells.fNCells]
   Double32_t      PHOSCells_fAmplitude[1];   //[PHOSCells.fNCells]
   Double32_t      PHOSCells_fTime[1];   //[PHOSCells.fNCells]
   Double32_t      PHOSCells_fEFraction[1];   //[PHOSCells.fNCells]
   Int_t           PHOSCells_fMCLabel[1];   //[PHOSCells.fNCells]
   Char_t          PHOSCells_fType;
   Int_t           AliRawDataErrorLogs_;
   UInt_t          AliRawDataErrorLogs_fUniqueID[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   UInt_t          AliRawDataErrorLogs_fBits[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   TString         AliRawDataErrorLogs_fName[kMaxAliRawDataErrorLogs];
   TString         AliRawDataErrorLogs_fTitle[kMaxAliRawDataErrorLogs];
   Int_t           AliRawDataErrorLogs_fEventNumber[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   Int_t           AliRawDataErrorLogs_fDdlID[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   Int_t           AliRawDataErrorLogs_fErrorLevel[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   Int_t           AliRawDataErrorLogs_fErrorCode[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
   Int_t           AliRawDataErrorLogs_fCount[kMaxAliRawDataErrorLogs];   //[AliRawDataErrorLogs_]
 //AliESDACORDE    *AliESDACORDE_;
   UInt_t          AliESDACORDE_TObject_fUniqueID;
   UInt_t          AliESDACORDE_TObject_fBits;
   Bool_t          AliESDACORDE_fACORDEBitPattern[60];
 //AliESDAD        *AliESDAD_;
   UInt_t          AliESDAD_AliVAD_fUniqueID;
   UInt_t          AliESDAD_AliVAD_fBits;
   UInt_t          AliESDAD_fBBtriggerADA;
   UInt_t          AliESDAD_fBGtriggerADA;
   UInt_t          AliESDAD_fBBtriggerADC;
   UInt_t          AliESDAD_fBGtriggerADC;
   Float_t         AliESDAD_fMultiplicity[16];
   Float_t         AliESDAD_fAdc[16];
   Float_t         AliESDAD_fTime[16];
   Float_t         AliESDAD_fWidth[16];
   Bool_t          AliESDAD_fBBFlag[16];
   Bool_t          AliESDAD_fBGFlag[16];
   Float_t         AliESDAD_fADATime;
   Float_t         AliESDAD_fADCTime;
   Float_t         AliESDAD_fADATimeError;
   Float_t         AliESDAD_fADCTimeError;
   Int_t           AliESDAD_fADADecision;
   Int_t           AliESDAD_fADCDecision;
   UShort_t        AliESDAD_fTriggerChargeA;
   UShort_t        AliESDAD_fTriggerChargeC;
   UShort_t        AliESDAD_fTriggerBits;
   Bool_t          AliESDAD_fIsBB[16][21];
   Bool_t          AliESDAD_fIsBG[16][21];
   Float_t         AliESDAD_fAdcTail[16];
   Float_t         AliESDAD_fAdcTrigger[16];
 //AliTOFHeader    *AliTOFHeader_;
   UInt_t          AliTOFHeader_TObject_fUniqueID;
   UInt_t          AliTOFHeader_TObject_fBits;
   Float_t         AliTOFHeader_fDefaultEventTimeValue;
   Float_t         AliTOFHeader_fDefaultEventTimeRes;
   Int_t           AliTOFHeader_fNbins;
   Float_t         AliTOFHeader_fTOFtimeResolution;
   Float_t         AliTOFHeader_fT0spread;
   Int_t           AliTOFHeader_fNumberOfTOFclusters;
   Int_t           AliTOFHeader_fNumberOfTOFtrgPads;
   Int_t           CosmicTracks_;
   UInt_t          CosmicTracks_fUniqueID[kMaxCosmicTracks];   //[CosmicTracks_]
   UInt_t          CosmicTracks_fBits[kMaxCosmicTracks];   //[CosmicTracks_]
   Double32_t      CosmicTracks_fX[kMaxCosmicTracks];   //[CosmicTracks_]
   Double32_t      CosmicTracks_fAlpha[kMaxCosmicTracks];   //[CosmicTracks_]
   Double32_t      CosmicTracks_fP[kMaxCosmicTracks][5];   //[CosmicTracks_]
   Double32_t      CosmicTracks_fC[kMaxCosmicTracks][15];   //[CosmicTracks_]
   Int_t           CosmicTracks_fESDtrackIndex[kMaxCosmicTracks][2];   //[CosmicTracks_]
   Int_t           CosmicTracks_fNCluster[kMaxCosmicTracks];   //[CosmicTracks_]
   Double_t        CosmicTracks_fLeverArm[kMaxCosmicTracks];   //[CosmicTracks_]
   Double_t        CosmicTracks_fChi2PerCluster[kMaxCosmicTracks];   //[CosmicTracks_]
   Double_t        CosmicTracks_fImpactD[kMaxCosmicTracks];   //[CosmicTracks_]
   Double_t        CosmicTracks_fImpactZ[kMaxCosmicTracks];   //[CosmicTracks_]
   Bool_t          CosmicTracks_fIsReuse[kMaxCosmicTracks];   //[CosmicTracks_]
   Double_t        CosmicTracks_fFindableRatio[kMaxCosmicTracks];   //[CosmicTracks_]
   Int_t           AliESDTOFCluster_;
   UInt_t          AliESDTOFCluster_fUniqueID[kMaxAliESDTOFCluster];   //[AliESDTOFCluster_]
   UInt_t          AliESDTOFCluster_fBits[kMaxAliESDTOFCluster];   //[AliESDTOFCluster_]
   Int_t           AliESDTOFCluster_fID[kMaxAliESDTOFCluster];   //[AliESDTOFCluster_]
   Char_t          AliESDTOFCluster_fNTOFhits[kMaxAliESDTOFCluster];   //[AliESDTOFCluster_]
   Char_t          AliESDTOFCluster_fNmatchableTracks[kMaxAliESDTOFCluster];   //[AliESDTOFCluster_]
   Int_t           AliESDTOFCluster_fHitIndex[kMaxAliESDTOFCluster][4];   //[AliESDTOFCluster_]
   Int_t           AliESDTOFCluster_fMatchIndex[kMaxAliESDTOFCluster][7];   //[AliESDTOFCluster_]
   Int_t           AliESDTOFHit_;
   UInt_t          AliESDTOFHit_fUniqueID[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   UInt_t          AliESDTOFHit_fBits[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Double32_t      AliESDTOFHit_fTimeRaw[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Double32_t      AliESDTOFHit_fTime[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Double32_t      AliESDTOFHit_fTOT[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Int_t           AliESDTOFHit_fTOFLabel[kMaxAliESDTOFHit][3];   //[AliESDTOFHit_]
   Int_t           AliESDTOFHit_fL0L1Latency[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Int_t           AliESDTOFHit_fDeltaBC[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Int_t           AliESDTOFHit_fTOFchannel[kMaxAliESDTOFHit];   //[AliESDTOFHit_]
   Int_t           AliESDTOFMatch_;
   UInt_t          AliESDTOFMatch_fUniqueID[kMaxAliESDTOFMatch];   //[AliESDTOFMatch_]
   UInt_t          AliESDTOFMatch_fBits[kMaxAliESDTOFMatch];   //[AliESDTOFMatch_]
   Double32_t      AliESDTOFMatch_fDx[kMaxAliESDTOFMatch];   //[AliESDTOFMatch_]
   Double32_t      AliESDTOFMatch_fDz[kMaxAliESDTOFMatch];   //[AliESDTOFMatch_]
   Double32_t      AliESDTOFMatch_fTrackLength[kMaxAliESDTOFMatch];   //[AliESDTOFMatch_]
   Double32_t      AliESDTOFMatch_fIntegratedTimes[kMaxAliESDTOFMatch][9];   //[AliESDTOFMatch_]
 //AliESDFIT       *AliESDFIT_;
   UInt_t          AliESDFIT_TObject_fUniqueID;
   UInt_t          AliESDFIT_TObject_fBits;
   Float_t         AliESDFIT_fT0[3];
   Float_t         AliESDFIT_fFITzVertex;
   Float_t         AliESDFIT_fFITtime[240];
   Float_t         AliESDFIT_fFITamplitude[240];
   Float_t         AliESDFIT_fT0best[3];
 //AliESDHLTDecision *HLTGlobalTrigger_;
   UInt_t          HLTGlobalTrigger_TNamed_fUniqueID;
   UInt_t          HLTGlobalTrigger_TNamed_fBits;
   TString         HLTGlobalTrigger_TNamed_fName;
   TString         HLTGlobalTrigger_TNamed_fTitle;
   Int_t           HLTGlobalTrigger_fInputObjectInfo_;
   UInt_t          HLTGlobalTrigger_fInputObjectInfo_fUniqueID[kMaxHLTGlobalTrigger_fInputObjectInfo];   //[HLTGlobalTrigger.fInputObjectInfo_]
   UInt_t          HLTGlobalTrigger_fInputObjectInfo_fBits[kMaxHLTGlobalTrigger_fInputObjectInfo];   //[HLTGlobalTrigger.fInputObjectInfo_]
   TString         HLTGlobalTrigger_fInputObjectInfo_fName[kMaxHLTGlobalTrigger_fInputObjectInfo];
   TString         HLTGlobalTrigger_fInputObjectInfo_fTitle[kMaxHLTGlobalTrigger_fInputObjectInfo];
   TArrayI         HLTGlobalTrigger_fTriggerItems;
   TArrayL64       HLTGlobalTrigger_fCounters;
   ULong64_t       fDetectorStatus;
   UInt_t          fDAQDetectorPattern;
   UInt_t          fDAQAttributes;
   Int_t           fNTPCClusters;

   // List of branches
   TBranch        *b_AliESDRun_TObject_fUniqueID;   //!
   TBranch        *b_AliESDRun_TObject_fBits;   //!
   TBranch        *b_AliESDRun_fCurrentL3;   //!
   TBranch        *b_AliESDRun_fCurrentDip;   //!
   TBranch        *b_AliESDRun_fBeamEnergy;   //!
   TBranch        *b_AliESDRun_fMagneticField;   //!
   TBranch        *b_AliESDRun_fMeanBeamInt;   //!
   TBranch        *b_AliESDRun_fDiamondXY;   //!
   TBranch        *b_AliESDRun_fDiamondCovXY;   //!
   TBranch        *b_AliESDRun_fDiamondZ;   //!
   TBranch        *b_AliESDRun_fDiamondSig2Z;   //!
   TBranch        *b_AliESDRun_fPeriodNumber;   //!
   TBranch        *b_AliESDRun_fRunNumber;   //!
   TBranch        *b_AliESDRun_fRecoVersion;   //!
   TBranch        *b_AliESDRun_fBeamParticle;   //!
   TBranch        *b_AliESDRun_fBeamType;   //!
   TBranch        *b_AliESDRun_fTriggerClasses;   //!
   TBranch        *b_AliESDRun_fDetInDAQ;   //!
   TBranch        *b_AliESDRun_fDetInReco;   //!
   TBranch        *b_AliESDRun_fT0spread;   //!
   TBranch        *b_AliESDRun_fCaloTriggerType;   //!
   TBranch        *b_AliESDRun_fVZEROEqFactors;   //!
   TBranch        *b_AliESDRun_fCaloTriggerTypeNew;   //!
   TBranch        *b_AliESDRun_fCTPStart_fUniqueID;   //!
   TBranch        *b_AliESDRun_fCTPStart_fBits;   //!
   TBranch        *b_AliESDRun_fCTPStart_fOrbit;   //!
   TBranch        *b_AliESDRun_fCTPStart_fPeriod;   //!
   TBranch        *b_AliESDRun_fCTPStart_fBunchCross;   //!
   TBranch        *b_AliESDHeader_AliVHeader_fUniqueID;   //!
   TBranch        *b_AliESDHeader_AliVHeader_fBits;   //!
   TBranch        *b_AliESDHeader_AliVHeader_fName;   //!
   TBranch        *b_AliESDHeader_AliVHeader_fTitle;   //!
   TBranch        *b_AliESDHeader_fTriggerMask;   //!
   TBranch        *b_AliESDHeader_fTriggerMaskNext50;   //!
   TBranch        *b_AliESDHeader_fOrbitNumber;   //!
   TBranch        *b_AliESDHeader_fTimeStamp;   //!
   TBranch        *b_AliESDHeader_fEventType;   //!
   TBranch        *b_AliESDHeader_fEventSpecie;   //!
   TBranch        *b_AliESDHeader_fPeriodNumber;   //!
   TBranch        *b_AliESDHeader_fEventNumberInFile;   //!
   TBranch        *b_AliESDHeader_fBunchCrossNumber;   //!
   TBranch        *b_AliESDHeader_fTriggerCluster;   //!
   TBranch        *b_AliESDHeader_fL0TriggerInputs;   //!
   TBranch        *b_AliESDHeader_fL1TriggerInputs;   //!
   TBranch        *b_AliESDHeader_fL2TriggerInputs;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimestamp_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimestamp_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimestamp_fOrbit;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimestamp_fPeriod;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimestamp_fBunchCross;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fScalers;   //!
   TBranch        *b_AliESDHeader_fTriggerScalers_fTimeGroup;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fOrbit;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fPeriod;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBunchCross;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fScalers;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaEvent_fTimeGroup;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBits;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fOrbit;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fPeriod;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBunchCross;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fScalers;   //!
   TBranch        *b_AliESDHeader_fTriggerScalersDeltaRun_fTimeGroup;   //!
   TBranch        *b_AliESDHeader_fTriggerInputsNames;   //!
   TBranch        *b_AliESDHeader_fIRBufferArray;   //!
   TBranch        *b_AliESDHeader_fIRInt2InteractionsMap_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fIRInt2InteractionsMap_fBits;   //!
   TBranch        *b_AliESDHeader_fIRInt2InteractionsMap_fNbits;   //!
   TBranch        *b_AliESDHeader_fIRInt2InteractionsMap_fNbytes;   //!
   TBranch        *b_AliESDHeader_fIRInt2InteractionsMap_fAllBits;   //!
   TBranch        *b_AliESDHeader_fIRInt1InteractionsMap_fUniqueID;   //!
   TBranch        *b_AliESDHeader_fIRInt1InteractionsMap_fBits;   //!
   TBranch        *b_AliESDHeader_fIRInt1InteractionsMap_fNbits;   //!
   TBranch        *b_AliESDHeader_fIRInt1InteractionsMap_fNbytes;   //!
   TBranch        *b_AliESDHeader_fIRInt1InteractionsMap_fAllBits;   //!
   TBranch        *b_AliESDHeader_fTPCNoiseFilterCounter;   //!
   TBranch        *b_AliESDZDC_AliVZDC_fUniqueID;   //!
   TBranch        *b_AliESDZDC_AliVZDC_fBits;   //!
   TBranch        *b_AliESDZDC_fZDCN1Energy;   //!
   TBranch        *b_AliESDZDC_fZDCP1Energy;   //!
   TBranch        *b_AliESDZDC_fZDCN2Energy;   //!
   TBranch        *b_AliESDZDC_fZDCP2Energy;   //!
   TBranch        *b_AliESDZDC_fZDCEMEnergy;   //!
   TBranch        *b_AliESDZDC_fZDCEMEnergy1;   //!
   TBranch        *b_AliESDZDC_fZN1TowerEnergy;   //!
   TBranch        *b_AliESDZDC_fZN2TowerEnergy;   //!
   TBranch        *b_AliESDZDC_fZP1TowerEnergy;   //!
   TBranch        *b_AliESDZDC_fZP2TowerEnergy;   //!
   TBranch        *b_AliESDZDC_fZN1TowerEnergyLR;   //!
   TBranch        *b_AliESDZDC_fZN2TowerEnergyLR;   //!
   TBranch        *b_AliESDZDC_fZP1TowerEnergyLR;   //!
   TBranch        *b_AliESDZDC_fZP2TowerEnergyLR;   //!
   TBranch        *b_AliESDZDC_fZDCParticipants;   //!
   TBranch        *b_AliESDZDC_fZDCPartSideA;   //!
   TBranch        *b_AliESDZDC_fZDCPartSideC;   //!
   TBranch        *b_AliESDZDC_fImpactParameter;   //!
   TBranch        *b_AliESDZDC_fImpactParamSideA;   //!
   TBranch        *b_AliESDZDC_fImpactParamSideC;   //!
   TBranch        *b_AliESDZDC_fZNACentrCoord;   //!
   TBranch        *b_AliESDZDC_fZNCCentrCoord;   //!
   TBranch        *b_AliESDZDC_fESDQuality;   //!
   TBranch        *b_AliESDZDC_fVMEScaler;   //!
   TBranch        *b_AliESDZDC_fZDCTDCData;   //!
   TBranch        *b_AliESDZDC_fZDCTDCCorrected;   //!
   TBranch        *b_AliESDZDC_fZNCTDChit;   //!
   TBranch        *b_AliESDZDC_fZNATDChit;   //!
   TBranch        *b_AliESDZDC_fZPCTDChit;   //!
   TBranch        *b_AliESDZDC_fZPATDChit;   //!
   TBranch        *b_AliESDZDC_fZEM1TDChit;   //!
   TBranch        *b_AliESDZDC_fZEM2TDChit;   //!
   TBranch        *b_AliESDZDC_fZDCTDCChannels;   //!
   TBranch        *b_AliESDFMD_TObject_fUniqueID;   //!
   TBranch        *b_AliESDFMD_TObject_fBits;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fUniqueID;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fBits;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fMaxDetectors;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fMaxRings;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fMaxSectors;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fMaxStrips;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fTotal;   //!
   TBranch        *b_AliESDFMD_fMultiplicity_fData;   //!
   TBranch        *b_AliESDFMD_fEta_fUniqueID;   //!
   TBranch        *b_AliESDFMD_fEta_fBits;   //!
   TBranch        *b_AliESDFMD_fEta_fMaxDetectors;   //!
   TBranch        *b_AliESDFMD_fEta_fMaxRings;   //!
   TBranch        *b_AliESDFMD_fEta_fMaxSectors;   //!
   TBranch        *b_AliESDFMD_fEta_fMaxStrips;   //!
   TBranch        *b_AliESDFMD_fEta_fTotal;   //!
   TBranch        *b_AliESDFMD_fEta_fData;   //!
   TBranch        *b_AliESDFMD_fNoiseFactor;   //!
   TBranch        *b_AliESDFMD_fAngleCorrected;   //!
   TBranch        *b_AliESDVZERO_AliVVZERO_fUniqueID;   //!
   TBranch        *b_AliESDVZERO_AliVVZERO_fBits;   //!
   TBranch        *b_AliESDVZERO_fBBtriggerV0A;   //!
   TBranch        *b_AliESDVZERO_fBGtriggerV0A;   //!
   TBranch        *b_AliESDVZERO_fBBtriggerV0C;   //!
   TBranch        *b_AliESDVZERO_fBGtriggerV0C;   //!
   TBranch        *b_AliESDVZERO_fMultiplicity;   //!
   TBranch        *b_AliESDVZERO_fAdc;   //!
   TBranch        *b_AliESDVZERO_fTime;   //!
   TBranch        *b_AliESDVZERO_fWidth;   //!
   TBranch        *b_AliESDVZERO_fBBFlag;   //!
   TBranch        *b_AliESDVZERO_fBGFlag;   //!
   TBranch        *b_AliESDVZERO_fV0ATime;   //!
   TBranch        *b_AliESDVZERO_fV0CTime;   //!
   TBranch        *b_AliESDVZERO_fV0ATimeError;   //!
   TBranch        *b_AliESDVZERO_fV0CTimeError;   //!
   TBranch        *b_AliESDVZERO_fV0ADecision;   //!
   TBranch        *b_AliESDVZERO_fV0CDecision;   //!
   TBranch        *b_AliESDVZERO_fTriggerChargeA;   //!
   TBranch        *b_AliESDVZERO_fTriggerChargeC;   //!
   TBranch        *b_AliESDVZERO_fTriggerBits;   //!
   TBranch        *b_AliESDVZERO_fIsBB;   //!
   TBranch        *b_AliESDVZERO_fIsBG;   //!
   TBranch        *b_AliESDTZERO_TObject_fUniqueID;   //!
   TBranch        *b_AliESDTZERO_TObject_fBits;   //!
   TBranch        *b_AliESDTZERO_fT0clock;   //!
   TBranch        *b_AliESDTZERO_fT0TOF;   //!
   TBranch        *b_AliESDTZERO_fT0zVertex;   //!
   TBranch        *b_AliESDTZERO_fT0timeStart;   //!
   TBranch        *b_AliESDTZERO_fT0trig;   //!
   TBranch        *b_AliESDTZERO_fT0time;   //!
   TBranch        *b_AliESDTZERO_fT0amplitude;   //!
   TBranch        *b_AliESDTZERO_fTimeFull;   //!
   TBranch        *b_AliESDTZERO_fOrA;   //!
   TBranch        *b_AliESDTZERO_fOrC;   //!
   TBranch        *b_AliESDTZERO_fTVDC;   //!
   TBranch        *b_AliESDTZERO_fPileup;   //!
   TBranch        *b_AliESDTZERO_fSattelite;   //!
   TBranch        *b_AliESDTZERO_fMultC;   //!
   TBranch        *b_AliESDTZERO_fMultA;   //!
   TBranch        *b_AliESDTZERO_fBackground;   //!
   TBranch        *b_AliESDTZERO_fPileupTime;   //!
   TBranch        *b_AliESDTZERO_fT0TOFbest;   //!
   TBranch        *b_AliESDTZERO_fT0NewAmplitude;   //!
   TBranch        *b_AliESDTZERO_fPileupBits_fUniqueID;   //!
   TBranch        *b_AliESDTZERO_fPileupBits_fBits;   //!
   TBranch        *b_AliESDTZERO_fPileupBits_fNbits;   //!
   TBranch        *b_AliESDTZERO_fPileupBits_fNbytes;   //!
   TBranch        *b_AliESDTZERO_fPileupBits_fAllBits;   //!
   TBranch        *b_TPCVertex_AliVertex_fUniqueID;   //!
   TBranch        *b_TPCVertex_AliVertex_fBits;   //!
   TBranch        *b_TPCVertex_AliVertex_fName;   //!
   TBranch        *b_TPCVertex_AliVertex_fTitle;   //!
   TBranch        *b_TPCVertex_AliVertex_fPosition;   //!
   TBranch        *b_TPCVertex_AliVertex_fSigma;   //!
   TBranch        *b_TPCVertex_AliVertex_fNContributors;   //!
   TBranch        *b_TPCVertex_AliVertex_fNIndices;   //!
   TBranch        *b_TPCVertex_AliVertex_fIndices;   //!
   TBranch        *b_TPCVertex_fCovXX;   //!
   TBranch        *b_TPCVertex_fCovXY;   //!
   TBranch        *b_TPCVertex_fCovYY;   //!
   TBranch        *b_TPCVertex_fCovXZ;   //!
   TBranch        *b_TPCVertex_fCovYZ;   //!
   TBranch        *b_TPCVertex_fCovZZ;   //!
   TBranch        *b_TPCVertex_fSNR;   //!
   TBranch        *b_TPCVertex_fChi2;   //!
   TBranch        *b_TPCVertex_fID;   //!
   TBranch        *b_TPCVertex_fBCID;   //!
   TBranch        *b_SPDVertex_AliVertex_fUniqueID;   //!
   TBranch        *b_SPDVertex_AliVertex_fBits;   //!
   TBranch        *b_SPDVertex_AliVertex_fName;   //!
   TBranch        *b_SPDVertex_AliVertex_fTitle;   //!
   TBranch        *b_SPDVertex_AliVertex_fPosition;   //!
   TBranch        *b_SPDVertex_AliVertex_fSigma;   //!
   TBranch        *b_SPDVertex_AliVertex_fNContributors;   //!
   TBranch        *b_SPDVertex_AliVertex_fNIndices;   //!
   TBranch        *b_SPDVertex_AliVertex_fIndices;   //!
   TBranch        *b_SPDVertex_fCovXX;   //!
   TBranch        *b_SPDVertex_fCovXY;   //!
   TBranch        *b_SPDVertex_fCovYY;   //!
   TBranch        *b_SPDVertex_fCovXZ;   //!
   TBranch        *b_SPDVertex_fCovYZ;   //!
   TBranch        *b_SPDVertex_fCovZZ;   //!
   TBranch        *b_SPDVertex_fSNR;   //!
   TBranch        *b_SPDVertex_fChi2;   //!
   TBranch        *b_SPDVertex_fID;   //!
   TBranch        *b_SPDVertex_fBCID;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fUniqueID;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fBits;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fName;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fTitle;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fPosition;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fSigma;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fNContributors;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fNIndices;   //!
   TBranch        *b_PrimaryVertex_AliVertex_fIndices;   //!
   TBranch        *b_PrimaryVertex_fCovXX;   //!
   TBranch        *b_PrimaryVertex_fCovXY;   //!
   TBranch        *b_PrimaryVertex_fCovYY;   //!
   TBranch        *b_PrimaryVertex_fCovXZ;   //!
   TBranch        *b_PrimaryVertex_fCovYZ;   //!
   TBranch        *b_PrimaryVertex_fCovZZ;   //!
   TBranch        *b_PrimaryVertex_fSNR;   //!
   TBranch        *b_PrimaryVertex_fChi2;   //!
   TBranch        *b_PrimaryVertex_fID;   //!
   TBranch        *b_PrimaryVertex_fBCID;   //!
   TBranch        *b_AliMultiplicity_AliVMultiplicity_fUniqueID;   //!
   TBranch        *b_AliMultiplicity_AliVMultiplicity_fBits;   //!
   TBranch        *b_AliMultiplicity_AliVMultiplicity_fName;   //!
   TBranch        *b_AliMultiplicity_AliVMultiplicity_fTitle;   //!
   TBranch        *b_AliMultiplicity_fNtracks;   //!
   TBranch        *b_AliMultiplicity_fNsingle;   //!
   TBranch        *b_AliMultiplicity_fNsingleSPD2;   //!
   TBranch        *b_AliMultiplicity_fDPhiWindow2;   //!
   TBranch        *b_AliMultiplicity_fDThetaWindow2;   //!
   TBranch        *b_AliMultiplicity_fDPhiShift;   //!
   TBranch        *b_AliMultiplicity_fNStdDev;   //!
   TBranch        *b_AliMultiplicity_fLabels;   //!
   TBranch        *b_AliMultiplicity_fLabelsL2;   //!
   TBranch        *b_AliMultiplicity_fUsedClusS;   //!
   TBranch        *b_AliMultiplicity_fUsedClusT;   //!
   TBranch        *b_AliMultiplicity_fTh;   //!
   TBranch        *b_AliMultiplicity_fPhi;   //!
   TBranch        *b_AliMultiplicity_fDeltTh;   //!
   TBranch        *b_AliMultiplicity_fDeltPhi;   //!
   TBranch        *b_AliMultiplicity_fThsingle;   //!
   TBranch        *b_AliMultiplicity_fPhisingle;   //!
   TBranch        *b_AliMultiplicity_fLabelssingle;   //!
   TBranch        *b_AliMultiplicity_fFiredChips;   //!
   TBranch        *b_AliMultiplicity_fITSClusters;   //!
   TBranch        *b_AliMultiplicity_fFastOrFiredChips_fUniqueID;   //!
   TBranch        *b_AliMultiplicity_fFastOrFiredChips_fBits;   //!
   TBranch        *b_AliMultiplicity_fFastOrFiredChips_fNbits;   //!
   TBranch        *b_AliMultiplicity_fFastOrFiredChips_fNbytes;   //!
   TBranch        *b_AliMultiplicity_fFastOrFiredChips_fAllBits;   //!
   TBranch        *b_AliMultiplicity_fClusterFiredChips_fUniqueID;   //!
   TBranch        *b_AliMultiplicity_fClusterFiredChips_fBits;   //!
   TBranch        *b_AliMultiplicity_fClusterFiredChips_fNbits;   //!
   TBranch        *b_AliMultiplicity_fClusterFiredChips_fNbytes;   //!
   TBranch        *b_AliMultiplicity_fClusterFiredChips_fAllBits;   //!
   TBranch        *b_PHOSTrigger_AliVCaloTrigger_fUniqueID;   //!
   TBranch        *b_PHOSTrigger_AliVCaloTrigger_fBits;   //!
   TBranch        *b_PHOSTrigger_AliVCaloTrigger_fName;   //!
   TBranch        *b_PHOSTrigger_AliVCaloTrigger_fTitle;   //!
   TBranch        *b_PHOSTrigger_fNEntries;   //!
   TBranch        *b_PHOSTrigger_fCurrent;   //!
   TBranch        *b_PHOSTrigger_fColumn;   //!
   TBranch        *b_PHOSTrigger_fRow;   //!
   TBranch        *b_PHOSTrigger_fAmplitude;   //!
   TBranch        *b_PHOSTrigger_fTime;   //!
   TBranch        *b_PHOSTrigger_fNL0Times;   //!
   TBranch        *b_PHOSTrigger_fL1TimeSum;   //!
   TBranch        *b_PHOSTrigger_fTriggerBits;   //!
   TBranch        *b_PHOSTrigger_fL1Threshold;   //!
   TBranch        *b_PHOSTrigger_fL1V0;   //!
   TBranch        *b_PHOSTrigger_fL1FrameMask;   //!
   TBranch        *b_PHOSTrigger_fL1DCALThreshold;   //!
   TBranch        *b_PHOSTrigger_fL1SubRegion;   //!
   TBranch        *b_PHOSTrigger_fL1DCALFrameMask;   //!
   TBranch        *b_PHOSTrigger_fMedian;   //!
   TBranch        *b_PHOSTrigger_fTriggerBitWord;   //!
   TBranch        *b_PHOSTrigger_fL1DCALV0;   //!
   TBranch        *b_EMCALTrigger_AliVCaloTrigger_fUniqueID;   //!
   TBranch        *b_EMCALTrigger_AliVCaloTrigger_fBits;   //!
   TBranch        *b_EMCALTrigger_AliVCaloTrigger_fName;   //!
   TBranch        *b_EMCALTrigger_AliVCaloTrigger_fTitle;   //!
   TBranch        *b_EMCALTrigger_fNEntries;   //!
   TBranch        *b_EMCALTrigger_fCurrent;   //!
   TBranch        *b_EMCALTrigger_fColumn;   //!
   TBranch        *b_EMCALTrigger_fRow;   //!
   TBranch        *b_EMCALTrigger_fAmplitude;   //!
   TBranch        *b_EMCALTrigger_fTime;   //!
   TBranch        *b_EMCALTrigger_fNL0Times;   //!
   TBranch        *b_EMCALTrigger_fL1TimeSum;   //!
   TBranch        *b_EMCALTrigger_fTriggerBits;   //!
   TBranch        *b_EMCALTrigger_fL1Threshold;   //!
   TBranch        *b_EMCALTrigger_fL1V0;   //!
   TBranch        *b_EMCALTrigger_fL1FrameMask;   //!
   TBranch        *b_EMCALTrigger_fL1DCALThreshold;   //!
   TBranch        *b_EMCALTrigger_fL1SubRegion;   //!
   TBranch        *b_EMCALTrigger_fL1DCALFrameMask;   //!
   TBranch        *b_EMCALTrigger_fMedian;   //!
   TBranch        *b_EMCALTrigger_fTriggerBitWord;   //!
   TBranch        *b_EMCALTrigger_fL1DCALV0;   //!
   TBranch        *b_SPDPileupVertices_;   //!
   TBranch        *b_SPDPileupVertices_fUniqueID;   //!
   TBranch        *b_SPDPileupVertices_fBits;   //!
   TBranch        *b_SPDPileupVertices_fName;   //!
   TBranch        *b_SPDPileupVertices_fTitle;   //!
   TBranch        *b_SPDPileupVertices_fPosition;   //!
   TBranch        *b_SPDPileupVertices_fSigma;   //!
   TBranch        *b_SPDPileupVertices_fNContributors;   //!
   TBranch        *b_SPDPileupVertices_fNIndices;   //!
   TBranch        *b_SPDPileupVertices_fIndices;   //!
   TBranch        *b_SPDPileupVertices_fCovXX;   //!
   TBranch        *b_SPDPileupVertices_fCovXY;   //!
   TBranch        *b_SPDPileupVertices_fCovYY;   //!
   TBranch        *b_SPDPileupVertices_fCovXZ;   //!
   TBranch        *b_SPDPileupVertices_fCovYZ;   //!
   TBranch        *b_SPDPileupVertices_fCovZZ;   //!
   TBranch        *b_SPDPileupVertices_fSNR;   //!
   TBranch        *b_SPDPileupVertices_fChi2;   //!
   TBranch        *b_SPDPileupVertices_fID;   //!
   TBranch        *b_SPDPileupVertices_fBCID;   //!
   TBranch        *b_TrkPileupVertices_;   //!
   TBranch        *b_TrkPileupVertices_fUniqueID;   //!
   TBranch        *b_TrkPileupVertices_fBits;   //!
   TBranch        *b_TrkPileupVertices_fName;   //!
   TBranch        *b_TrkPileupVertices_fTitle;   //!
   TBranch        *b_TrkPileupVertices_fPosition;   //!
   TBranch        *b_TrkPileupVertices_fSigma;   //!
   TBranch        *b_TrkPileupVertices_fNContributors;   //!
   TBranch        *b_TrkPileupVertices_fNIndices;   //!
   TBranch        *b_TrkPileupVertices_fIndices;   //!
   TBranch        *b_TrkPileupVertices_fCovXX;   //!
   TBranch        *b_TrkPileupVertices_fCovXY;   //!
   TBranch        *b_TrkPileupVertices_fCovYY;   //!
   TBranch        *b_TrkPileupVertices_fCovXZ;   //!
   TBranch        *b_TrkPileupVertices_fCovYZ;   //!
   TBranch        *b_TrkPileupVertices_fCovZZ;   //!
   TBranch        *b_TrkPileupVertices_fSNR;   //!
   TBranch        *b_TrkPileupVertices_fChi2;   //!
   TBranch        *b_TrkPileupVertices_fID;   //!
   TBranch        *b_TrkPileupVertices_fBCID;   //!
   TBranch        *b_Tracks_;   //!
   TBranch        *b_Tracks_fUniqueID;   //!
   TBranch        *b_Tracks_fBits;   //!
   TBranch        *b_Tracks_fX;   //!
   TBranch        *b_Tracks_fAlpha;   //!
   TBranch        *b_Tracks_fP;   //!
   TBranch        *b_Tracks_fC;   //!
   TBranch        *b_Tracks_fTPCFitMap_fUniqueID;   //!
   TBranch        *b_Tracks_fTPCFitMap_fBits;   //!
   TBranch        *b_Tracks_fTPCFitMap_fNbits;   //!
   TBranch        *b_Tracks_fTPCFitMap_fNbytes;   //!
   TBranch        *b_Tracks_fTPCFitMap_fAllBits;   //!
   TBranch        *b_Tracks_fTPCClusterMap_fUniqueID;   //!
   TBranch        *b_Tracks_fTPCClusterMap_fBits;   //!
   TBranch        *b_Tracks_fTPCClusterMap_fNbits;   //!
   TBranch        *b_Tracks_fTPCClusterMap_fNbytes;   //!
   TBranch        *b_Tracks_fTPCClusterMap_fAllBits;   //!
   TBranch        *b_Tracks_fTPCSharedMap_fUniqueID;   //!
   TBranch        *b_Tracks_fTPCSharedMap_fBits;   //!
   TBranch        *b_Tracks_fTPCSharedMap_fNbits;   //!
   TBranch        *b_Tracks_fTPCSharedMap_fNbytes;   //!
   TBranch        *b_Tracks_fTPCSharedMap_fAllBits;   //!
   TBranch        *b_Tracks_fFrTrackID;   //!
   TBranch        *b_Tracks_fFlags;   //!
   TBranch        *b_Tracks_fID;   //!
   TBranch        *b_Tracks_fLabel;   //!
   TBranch        *b_Tracks_fITSLabel;   //!
   TBranch        *b_Tracks_fITSModule;   //!
   TBranch        *b_Tracks_fTPCLabel;   //!
   TBranch        *b_Tracks_fTRDLabel;   //!
   TBranch        *b_Tracks_fTOFindex;   //!
   TBranch        *b_Tracks_fHMPIDqn;   //!
   TBranch        *b_Tracks_fHMPIDcluIdx;   //!
   TBranch        *b_Tracks_fCaloIndex;   //!
   TBranch        *b_Tracks_fKinkIndexes;   //!
   TBranch        *b_Tracks_fV0Indexes;   //!
   TBranch        *b_Tracks_fHMPIDtrkTheta;   //!
   TBranch        *b_Tracks_fHMPIDtrkPhi;   //!
   TBranch        *b_Tracks_fHMPIDsignal;   //!
   TBranch        *b_Tracks_fdTPC;   //!
   TBranch        *b_Tracks_fzTPC;   //!
   TBranch        *b_Tracks_fCddTPC;   //!
   TBranch        *b_Tracks_fCdzTPC;   //!
   TBranch        *b_Tracks_fCzzTPC;   //!
   TBranch        *b_Tracks_fCchi2TPC;   //!
   TBranch        *b_Tracks_fD;   //!
   TBranch        *b_Tracks_fZ;   //!
   TBranch        *b_Tracks_fCdd;   //!
   TBranch        *b_Tracks_fCdz;   //!
   TBranch        *b_Tracks_fCzz;   //!
   TBranch        *b_Tracks_fCchi2;   //!
   TBranch        *b_Tracks_fITSchi2Std;   //!
   TBranch        *b_Tracks_fITSchi2;   //!
   TBranch        *b_Tracks_fTPCchi2;   //!
   TBranch        *b_Tracks_fTPCchi2Iter1;   //!
   TBranch        *b_Tracks_fTRDchi2;   //!
   TBranch        *b_Tracks_fTOFchi2;   //!
   TBranch        *b_Tracks_fHMPIDchi2;   //!
   TBranch        *b_Tracks_fGlobalChi2;   //!
   TBranch        *b_Tracks_fITSsignal;   //!
   TBranch        *b_Tracks_fITSdEdxSamples;   //!
   TBranch        *b_Tracks_fTPCsignal;   //!
   TBranch        *b_Tracks_fTPCsignalS;   //!
   TBranch        *b_Tracks_fTPCPoints;   //!
   TBranch        *b_Tracks_fTRDsignal;   //!
   TBranch        *b_Tracks_fTRDQuality;   //!
   TBranch        *b_Tracks_fTRDBudget;   //!
   TBranch        *b_Tracks_fCaloDx;   //!
   TBranch        *b_Tracks_fCaloDz;   //!
   TBranch        *b_Tracks_fHMPIDtrkX;   //!
   TBranch        *b_Tracks_fHMPIDtrkY;   //!
   TBranch        *b_Tracks_fHMPIDmipX;   //!
   TBranch        *b_Tracks_fHMPIDmipY;   //!
   TBranch        *b_Tracks_fTPCncls;   //!
   TBranch        *b_Tracks_fTPCnclsF;   //!
   TBranch        *b_Tracks_fTPCsignalN;   //!
   TBranch        *b_Tracks_fTPCnclsIter1;   //!
   TBranch        *b_Tracks_fTPCnclsFIter1;   //!
   TBranch        *b_Tracks_fITSncls;   //!
   TBranch        *b_Tracks_fITSClusterMap;   //!
   TBranch        *b_Tracks_fITSSharedMap;   //!
   TBranch        *b_Tracks_fTRDncls;   //!
   TBranch        *b_Tracks_fTRDncls0;   //!
   TBranch        *b_Tracks_fTRDntracklets;   //!
   TBranch        *b_Tracks_fTRDNchamberdEdx;   //!
   TBranch        *b_Tracks_fTRDNclusterdEdx;   //!
   TBranch        *b_Tracks_fTRDnSlices;   //!
   TBranch        *b_Tracks_fTRDslices;   //!
   TBranch        *b_Tracks_fTRDTimBin;   //!
   TBranch        *b_Tracks_fVertexID;   //!
   TBranch        *b_Tracks_fPIDForTracking;   //!
   TBranch        *b_Tracks_fTrackPhiOnEMCal;   //!
   TBranch        *b_Tracks_fTrackEtaOnEMCal;   //!
   TBranch        *b_Tracks_fTrackPtOnEMCal;   //!
   TBranch        *b_Tracks_fNtofClusters;   //!
   TBranch        *b_Tracks_fTOFcluster;   //!
   TBranch        *b_MuonTracks_;   //!
   TBranch        *b_MuonTracks_fUniqueID;   //!
   TBranch        *b_MuonTracks_fBits;   //!
   TBranch        *b_MuonTracks_fInverseBendingMomentum;   //!
   TBranch        *b_MuonTracks_fThetaX;   //!
   TBranch        *b_MuonTracks_fThetaY;   //!
   TBranch        *b_MuonTracks_fZ;   //!
   TBranch        *b_MuonTracks_fBendingCoor;   //!
   TBranch        *b_MuonTracks_fNonBendingCoor;   //!
   TBranch        *b_MuonTracks_fInverseBendingMomentumAtDCA;   //!
   TBranch        *b_MuonTracks_fThetaXAtDCA;   //!
   TBranch        *b_MuonTracks_fThetaYAtDCA;   //!
   TBranch        *b_MuonTracks_fBendingCoorAtDCA;   //!
   TBranch        *b_MuonTracks_fNonBendingCoorAtDCA;   //!
   TBranch        *b_MuonTracks_fInverseBendingMomentumUncorrected;   //!
   TBranch        *b_MuonTracks_fThetaXUncorrected;   //!
   TBranch        *b_MuonTracks_fThetaYUncorrected;   //!
   TBranch        *b_MuonTracks_fZUncorrected;   //!
   TBranch        *b_MuonTracks_fBendingCoorUncorrected;   //!
   TBranch        *b_MuonTracks_fNonBendingCoorUncorrected;   //!
   TBranch        *b_MuonTracks_fCovariances;   //!
   TBranch        *b_MuonTracks_fRAtAbsorberEnd;   //!
   TBranch        *b_MuonTracks_fChi2;   //!
   TBranch        *b_MuonTracks_fChi2MatchTrigger;   //!
   TBranch        *b_MuonTracks_fLocalTrigger;   //!
   TBranch        *b_MuonTracks_fX1Pattern;   //!
   TBranch        *b_MuonTracks_fY1Pattern;   //!
   TBranch        *b_MuonTracks_fX2Pattern;   //!
   TBranch        *b_MuonTracks_fY2Pattern;   //!
   TBranch        *b_MuonTracks_fX3Pattern;   //!
   TBranch        *b_MuonTracks_fY3Pattern;   //!
   TBranch        *b_MuonTracks_fX4Pattern;   //!
   TBranch        *b_MuonTracks_fY4Pattern;   //!
   TBranch        *b_MuonTracks_fMuonClusterMap;   //!
   TBranch        *b_MuonTracks_fHitsPatternInTrigCh;   //!
   TBranch        *b_MuonTracks_fHitsPatternInTrigChTrk;   //!
   TBranch        *b_MuonTracks_fNHit;   //!
   TBranch        *b_MuonTracks_fLabel;   //!
   TBranch        *b_MuonClusters_;   //!
   TBranch        *b_MuonClusters_fUniqueID;   //!
   TBranch        *b_MuonClusters_fBits;   //!
   TBranch        *b_MuonClusters_fXYZ;   //!
   TBranch        *b_MuonClusters_fErrXY;   //!
   TBranch        *b_MuonClusters_fCharge;   //!
   TBranch        *b_MuonClusters_fChi2;   //!
   TBranch        *b_MuonClusters_fNPads;   //!
   TBranch        *b_MuonClusters_fLabel;   //!
   TBranch        *b_MuonPads_;   //!
   TBranch        *b_MuonPads_fUniqueID;   //!
   TBranch        *b_MuonPads_fBits;   //!
   TBranch        *b_MuonPads_fADC;   //!
   TBranch        *b_MuonPads_fCharge;   //!
   TBranch        *b_MuonGlobalTracks_;   //!
   TBranch        *b_MuonGlobalTracks_fUniqueID;   //!
   TBranch        *b_MuonGlobalTracks_fBits;   //!
   TBranch        *b_MuonGlobalTracks_fCharge;   //!
   TBranch        *b_MuonGlobalTracks_fMatchTrigger;   //!
   TBranch        *b_MuonGlobalTracks_fNMFTClusters;   //!
   TBranch        *b_MuonGlobalTracks_fNWrongMFTClustersMC;   //!
   TBranch        *b_MuonGlobalTracks_fMFTClusterPattern;   //!
   TBranch        *b_MuonGlobalTracks_fPx;   //!
   TBranch        *b_MuonGlobalTracks_fPy;   //!
   TBranch        *b_MuonGlobalTracks_fPz;   //!
   TBranch        *b_MuonGlobalTracks_fPt;   //!
   TBranch        *b_MuonGlobalTracks_fP;   //!
   TBranch        *b_MuonGlobalTracks_fEta;   //!
   TBranch        *b_MuonGlobalTracks_fRapidity;   //!
   TBranch        *b_MuonGlobalTracks_fFirstTrackingPointX;   //!
   TBranch        *b_MuonGlobalTracks_fFirstTrackingPointY;   //!
   TBranch        *b_MuonGlobalTracks_fFirstTrackingPointZ;   //!
   TBranch        *b_MuonGlobalTracks_fXAtVertex;   //!
   TBranch        *b_MuonGlobalTracks_fYAtVertex;   //!
   TBranch        *b_MuonGlobalTracks_fRAtAbsorberEnd;   //!
   TBranch        *b_MuonGlobalTracks_fChi2OverNdf;   //!
   TBranch        *b_MuonGlobalTracks_fChi2MatchTrigger;   //!
   TBranch        *b_MuonGlobalTracks_fLabel;   //!
   TBranch        *b_MuonGlobalTracks_fMuonClusterMap;   //!
   TBranch        *b_MuonGlobalTracks_fHitsPatternInTrigCh;   //!
   TBranch        *b_MuonGlobalTracks_fHitsPatternInTrigChTrk;   //!
   TBranch        *b_MuonGlobalTracks_fLoCircuit;   //!
   TBranch        *b_MuonGlobalTracks_fIsConnected;   //!
   TBranch        *b_MuonGlobalTracks_fProdVertexXYZ;   //!
   TBranch        *b_PmdTracks_;   //!
   TBranch        *b_PmdTracks_fUniqueID;   //!
   TBranch        *b_PmdTracks_fBits;   //!
   TBranch        *b_PmdTracks_fX;   //!
   TBranch        *b_PmdTracks_fY;   //!
   TBranch        *b_PmdTracks_fZ;   //!
   TBranch        *b_PmdTracks_fCluADC;   //!
   TBranch        *b_PmdTracks_fCluPID;   //!
   TBranch        *b_PmdTracks_fDet;   //!
   TBranch        *b_PmdTracks_fNcell;   //!
   TBranch        *b_PmdTracks_fSmn;   //!
   TBranch        *b_PmdTracks_fTrackNo;   //!
   TBranch        *b_PmdTracks_fTrackPid;   //!
   TBranch        *b_PmdTracks_fClMatching;   //!
   TBranch        *b_PmdTracks_fSigX;   //!
   TBranch        *b_PmdTracks_fSigY;   //!
   TBranch        *b_AliESDTrdTrigger_TObject_fUniqueID;   //!
   TBranch        *b_AliESDTrdTrigger_TObject_fBits;   //!
   TBranch        *b_AliESDTrdTrigger_fFlags;   //!
   TBranch        *b_TrdTracks_;   //!
   TBranch        *b_TrdTracks_fUniqueID;   //!
   TBranch        *b_TrdTracks_fBits;   //!
   TBranch        *b_TrdTracks_fSector;   //!
   TBranch        *b_TrdTracks_fStack;   //!
   TBranch        *b_TrdTracks_fA;   //!
   TBranch        *b_TrdTracks_fB;   //!
   TBranch        *b_TrdTracks_fC;   //!
   TBranch        *b_TrdTracks_fY;   //!
   TBranch        *b_TrdTracks_fPID;   //!
   TBranch        *b_TrdTracks_fLayerMask;   //!
   TBranch        *b_TrdTracks_fTrackletIndex;   //!
   TBranch        *b_TrdTracks_fFlags;   //!
   TBranch        *b_TrdTracks_fFlagsTiming;   //!
   TBranch        *b_TrdTracks_fReserved;   //!
   TBranch        *b_TrdTracks_fTrackletRefs;   //!
   TBranch        *b_TrdTracks_fTrackMatch;   //!
   TBranch        *b_TrdTracks_fLabel;   //!
   TBranch        *b_TrdTracklets_;   //!
   TBranch        *b_TrdTracklets_fUniqueID;   //!
   TBranch        *b_TrdTracklets_fBits;   //!
   TBranch        *b_TrdTracklets_fHCId;   //!
   TBranch        *b_TrdTracklets_fTrackletWord;   //!
   TBranch        *b_TrdTracklets_fLabel;   //!
   TBranch        *b_V0s_;   //!
   TBranch        *b_V0s_fUniqueID;   //!
   TBranch        *b_V0s_fBits;   //!
   TBranch        *b_V0s_fParamN_fUniqueID;   //!
   TBranch        *b_V0s_fParamN_fBits;   //!
   TBranch        *b_V0s_fParamN_fX;   //!
   TBranch        *b_V0s_fParamN_fAlpha;   //!
   TBranch        *b_V0s_fParamN_fP;   //!
   TBranch        *b_V0s_fParamN_fC;   //!
   TBranch        *b_V0s_fParamP_fUniqueID;   //!
   TBranch        *b_V0s_fParamP_fBits;   //!
   TBranch        *b_V0s_fParamP_fX;   //!
   TBranch        *b_V0s_fParamP_fAlpha;   //!
   TBranch        *b_V0s_fParamP_fP;   //!
   TBranch        *b_V0s_fParamP_fC;   //!
   TBranch        *b_V0s_fEffMass;   //!
   TBranch        *b_V0s_fDcaV0Daughters;   //!
   TBranch        *b_V0s_fChi2V0;   //!
   TBranch        *b_V0s_fPos;   //!
   TBranch        *b_V0s_fPosCov;   //!
   TBranch        *b_V0s_fNmom;   //!
   TBranch        *b_V0s_fPmom;   //!
   TBranch        *b_V0s_fNormDCAPrim;   //!
   TBranch        *b_V0s_fRr;   //!
   TBranch        *b_V0s_fDistSigma;   //!
   TBranch        *b_V0s_fChi2Before;   //!
   TBranch        *b_V0s_fChi2After;   //!
   TBranch        *b_V0s_fCausality;   //!
   TBranch        *b_V0s_fAngle;   //!
   TBranch        *b_V0s_fPointAngleFi;   //!
   TBranch        *b_V0s_fPointAngleTh;   //!
   TBranch        *b_V0s_fPointAngle;   //!
   TBranch        *b_V0s_fPdgCode;   //!
   TBranch        *b_V0s_fNidx;   //!
   TBranch        *b_V0s_fPidx;   //!
   TBranch        *b_V0s_fStatus;   //!
   TBranch        *b_V0s_fNBefore;   //!
   TBranch        *b_V0s_fNAfter;   //!
   TBranch        *b_V0s_fOnFlyStatus;   //!
   TBranch        *b_Cascades_;   //!
   TBranch        *b_Cascades_fUniqueID;   //!
   TBranch        *b_Cascades_fBits;   //!
   TBranch        *b_Cascades_fParamN_fUniqueID;   //!
   TBranch        *b_Cascades_fParamN_fBits;   //!
   TBranch        *b_Cascades_fParamN_fX;   //!
   TBranch        *b_Cascades_fParamN_fAlpha;   //!
   TBranch        *b_Cascades_fParamN_fP;   //!
   TBranch        *b_Cascades_fParamN_fC;   //!
   TBranch        *b_Cascades_fParamP_fUniqueID;   //!
   TBranch        *b_Cascades_fParamP_fBits;   //!
   TBranch        *b_Cascades_fParamP_fX;   //!
   TBranch        *b_Cascades_fParamP_fAlpha;   //!
   TBranch        *b_Cascades_fParamP_fP;   //!
   TBranch        *b_Cascades_fParamP_fC;   //!
   TBranch        *b_Cascades_fEffMass;   //!
   TBranch        *b_Cascades_fDcaV0Daughters;   //!
   TBranch        *b_Cascades_fChi2V0;   //!
   TBranch        *b_Cascades_fPos;   //!
   TBranch        *b_Cascades_fPosCov;   //!
   TBranch        *b_Cascades_fNmom;   //!
   TBranch        *b_Cascades_fPmom;   //!
   TBranch        *b_Cascades_fNormDCAPrim;   //!
   TBranch        *b_Cascades_fRr;   //!
   TBranch        *b_Cascades_fDistSigma;   //!
   TBranch        *b_Cascades_fChi2Before;   //!
   TBranch        *b_Cascades_fChi2After;   //!
   TBranch        *b_Cascades_fCausality;   //!
   TBranch        *b_Cascades_fAngle;   //!
   TBranch        *b_Cascades_fPointAngleFi;   //!
   TBranch        *b_Cascades_fPointAngleTh;   //!
   TBranch        *b_Cascades_fPointAngle;   //!
   TBranch        *b_Cascades_fPdgCode;   //!
   TBranch        *b_Cascades_fNidx;   //!
   TBranch        *b_Cascades_fPidx;   //!
   TBranch        *b_Cascades_fStatus;   //!
   TBranch        *b_Cascades_fNBefore;   //!
   TBranch        *b_Cascades_fNAfter;   //!
   TBranch        *b_Cascades_fOnFlyStatus;   //!
   TBranch        *b_Cascades_fEffMassXi;   //!
   TBranch        *b_Cascades_fChi2Xi;   //!
   TBranch        *b_Cascades_fDcaXiDaughters;   //!
   TBranch        *b_Cascades_fPosXi;   //!
   TBranch        *b_Cascades_fPosCovXi;   //!
   TBranch        *b_Cascades_fBachMom;   //!
   TBranch        *b_Cascades_fBachMomCov;   //!
   TBranch        *b_Cascades_fPdgCodeXi;   //!
   TBranch        *b_Cascades_fBachIdx;   //!
   TBranch        *b_Kinks_;   //!
   TBranch        *b_Kinks_fUniqueID;   //!
   TBranch        *b_Kinks_fBits;   //!
   TBranch        *b_Kinks_fParamDaughter_fUniqueID;   //!
   TBranch        *b_Kinks_fParamDaughter_fBits;   //!
   TBranch        *b_Kinks_fParamDaughter_fX;   //!
   TBranch        *b_Kinks_fParamDaughter_fAlpha;   //!
   TBranch        *b_Kinks_fParamDaughter_fP;   //!
   TBranch        *b_Kinks_fParamDaughter_fC;   //!
   TBranch        *b_Kinks_fParamMother_fUniqueID;   //!
   TBranch        *b_Kinks_fParamMother_fBits;   //!
   TBranch        *b_Kinks_fParamMother_fX;   //!
   TBranch        *b_Kinks_fParamMother_fAlpha;   //!
   TBranch        *b_Kinks_fParamMother_fP;   //!
   TBranch        *b_Kinks_fParamMother_fC;   //!
   TBranch        *b_Kinks_fDist1;   //!
   TBranch        *b_Kinks_fDist2;   //!
   TBranch        *b_Kinks_fPdr;   //!
   TBranch        *b_Kinks_fXr;   //!
   TBranch        *b_Kinks_fPm;   //!
   TBranch        *b_Kinks_fRr;   //!
   TBranch        *b_Kinks_fShapeFactor;   //!
   TBranch        *b_Kinks_fTPCdensity;   //!
   TBranch        *b_Kinks_fAngle;   //!
   TBranch        *b_Kinks_fLab;   //!
   TBranch        *b_Kinks_fIndex;   //!
   TBranch        *b_Kinks_fID;   //!
   TBranch        *b_Kinks_fRow0;   //!
   TBranch        *b_Kinks_fMultiple;   //!
   TBranch        *b_Kinks_fTPCncls;   //!
   TBranch        *b_Kinks_fStatus;   //!
   TBranch        *b_CaloClusters_;   //!
   TBranch        *b_CaloClusters_fUniqueID;   //!
   TBranch        *b_CaloClusters_fBits;   //!
   TBranch        *b_CaloClusters_fNCells;   //!
   TBranch        *b_CaloClusters_fCellsAbsId;   //!
   TBranch        *b_CaloClusters_fCellsAmpFraction;   //!
   TBranch        *b_CaloClusters_fGlobalPos;   //!
   TBranch        *b_CaloClusters_fEnergy;   //!
   TBranch        *b_CaloClusters_fDispersion;   //!
   TBranch        *b_CaloClusters_fChi2;   //!
   TBranch        *b_CaloClusters_fM20;   //!
   TBranch        *b_CaloClusters_fM02;   //!
   TBranch        *b_CaloClusters_fEmcCpvDistance;   //!
   TBranch        *b_CaloClusters_fTrackDx;   //!
   TBranch        *b_CaloClusters_fTrackDz;   //!
   TBranch        *b_CaloClusters_fDistToBadChannel;   //!
   TBranch        *b_CaloClusters_fPID;   //!
   TBranch        *b_CaloClusters_fID;   //!
   TBranch        *b_CaloClusters_fNExMax;   //!
   TBranch        *b_CaloClusters_fClusterType;   //!
   TBranch        *b_CaloClusters_fTOF;   //!
   TBranch        *b_CaloClusters_fCoreEnergy;   //!
   TBranch        *b_CaloClusters_fNLabel;   //!
   TBranch        *b_CaloClusters_fClusterMCEdepFraction;   //!
   TBranch        *b_CaloClusters_fCellsMCEdepFractionMap;   //!
   TBranch        *b_EMCALCells_AliVCaloCells_fUniqueID;   //!
   TBranch        *b_EMCALCells_AliVCaloCells_fBits;   //!
   TBranch        *b_EMCALCells_AliVCaloCells_fName;   //!
   TBranch        *b_EMCALCells_AliVCaloCells_fTitle;   //!
   TBranch        *b_EMCALCells_fNCells;   //!
   TBranch        *b_EMCALCells_fHGLG;   //!
   TBranch        *b_EMCALCells_fCellNumber;   //!
   TBranch        *b_EMCALCells_fAmplitude;   //!
   TBranch        *b_EMCALCells_fTime;   //!
   TBranch        *b_EMCALCells_fEFraction;   //!
   TBranch        *b_EMCALCells_fMCLabel;   //!
   TBranch        *b_EMCALCells_fType;   //!
   TBranch        *b_PHOSCells_AliVCaloCells_fUniqueID;   //!
   TBranch        *b_PHOSCells_AliVCaloCells_fBits;   //!
   TBranch        *b_PHOSCells_AliVCaloCells_fName;   //!
   TBranch        *b_PHOSCells_AliVCaloCells_fTitle;   //!
   TBranch        *b_PHOSCells_fNCells;   //!
   TBranch        *b_PHOSCells_fHGLG;   //!
   TBranch        *b_PHOSCells_fCellNumber;   //!
   TBranch        *b_PHOSCells_fAmplitude;   //!
   TBranch        *b_PHOSCells_fTime;   //!
   TBranch        *b_PHOSCells_fEFraction;   //!
   TBranch        *b_PHOSCells_fMCLabel;   //!
   TBranch        *b_PHOSCells_fType;   //!
   TBranch        *b_AliRawDataErrorLogs_;   //!
   TBranch        *b_AliRawDataErrorLogs_fUniqueID;   //!
   TBranch        *b_AliRawDataErrorLogs_fBits;   //!
   TBranch        *b_AliRawDataErrorLogs_fName;   //!
   TBranch        *b_AliRawDataErrorLogs_fTitle;   //!
   TBranch        *b_AliRawDataErrorLogs_fEventNumber;   //!
   TBranch        *b_AliRawDataErrorLogs_fDdlID;   //!
   TBranch        *b_AliRawDataErrorLogs_fErrorLevel;   //!
   TBranch        *b_AliRawDataErrorLogs_fErrorCode;   //!
   TBranch        *b_AliRawDataErrorLogs_fCount;   //!
   TBranch        *b_AliESDACORDE_TObject_fUniqueID;   //!
   TBranch        *b_AliESDACORDE_TObject_fBits;   //!
   TBranch        *b_AliESDACORDE_fACORDEBitPattern;   //!
   TBranch        *b_AliESDAD_AliVAD_fUniqueID;   //!
   TBranch        *b_AliESDAD_AliVAD_fBits;   //!
   TBranch        *b_AliESDAD_fBBtriggerADA;   //!
   TBranch        *b_AliESDAD_fBGtriggerADA;   //!
   TBranch        *b_AliESDAD_fBBtriggerADC;   //!
   TBranch        *b_AliESDAD_fBGtriggerADC;   //!
   TBranch        *b_AliESDAD_fMultiplicity;   //!
   TBranch        *b_AliESDAD_fAdc;   //!
   TBranch        *b_AliESDAD_fTime;   //!
   TBranch        *b_AliESDAD_fWidth;   //!
   TBranch        *b_AliESDAD_fBBFlag;   //!
   TBranch        *b_AliESDAD_fBGFlag;   //!
   TBranch        *b_AliESDAD_fADATime;   //!
   TBranch        *b_AliESDAD_fADCTime;   //!
   TBranch        *b_AliESDAD_fADATimeError;   //!
   TBranch        *b_AliESDAD_fADCTimeError;   //!
   TBranch        *b_AliESDAD_fADADecision;   //!
   TBranch        *b_AliESDAD_fADCDecision;   //!
   TBranch        *b_AliESDAD_fTriggerChargeA;   //!
   TBranch        *b_AliESDAD_fTriggerChargeC;   //!
   TBranch        *b_AliESDAD_fTriggerBits;   //!
   TBranch        *b_AliESDAD_fIsBB;   //!
   TBranch        *b_AliESDAD_fIsBG;   //!
   TBranch        *b_AliESDAD_fAdcTail;   //!
   TBranch        *b_AliESDAD_fAdcTrigger;   //!
   TBranch        *b_AliTOFHeader_TObject_fUniqueID;   //!
   TBranch        *b_AliTOFHeader_TObject_fBits;   //!
   TBranch        *b_AliTOFHeader_fDefaultEventTimeValue;   //!
   TBranch        *b_AliTOFHeader_fDefaultEventTimeRes;   //!
   TBranch        *b_AliTOFHeader_fNbins;   //!
   TBranch        *b_AliTOFHeader_fTOFtimeResolution;   //!
   TBranch        *b_AliTOFHeader_fT0spread;   //!
   TBranch        *b_AliTOFHeader_fNumberOfTOFclusters;   //!
   TBranch        *b_AliTOFHeader_fNumberOfTOFtrgPads;   //!
   TBranch        *b_CosmicTracks_;   //!
   TBranch        *b_CosmicTracks_fUniqueID;   //!
   TBranch        *b_CosmicTracks_fBits;   //!
   TBranch        *b_CosmicTracks_fX;   //!
   TBranch        *b_CosmicTracks_fAlpha;   //!
   TBranch        *b_CosmicTracks_fP;   //!
   TBranch        *b_CosmicTracks_fC;   //!
   TBranch        *b_CosmicTracks_fESDtrackIndex;   //!
   TBranch        *b_CosmicTracks_fNCluster;   //!
   TBranch        *b_CosmicTracks_fLeverArm;   //!
   TBranch        *b_CosmicTracks_fChi2PerCluster;   //!
   TBranch        *b_CosmicTracks_fImpactD;   //!
   TBranch        *b_CosmicTracks_fImpactZ;   //!
   TBranch        *b_CosmicTracks_fIsReuse;   //!
   TBranch        *b_CosmicTracks_fFindableRatio;   //!
   TBranch        *b_AliESDTOFCluster_;   //!
   TBranch        *b_AliESDTOFCluster_fUniqueID;   //!
   TBranch        *b_AliESDTOFCluster_fBits;   //!
   TBranch        *b_AliESDTOFCluster_fID;   //!
   TBranch        *b_AliESDTOFCluster_fNTOFhits;   //!
   TBranch        *b_AliESDTOFCluster_fNmatchableTracks;   //!
   TBranch        *b_AliESDTOFCluster_fHitIndex;   //!
   TBranch        *b_AliESDTOFCluster_fMatchIndex;   //!
   TBranch        *b_AliESDTOFHit_;   //!
   TBranch        *b_AliESDTOFHit_fUniqueID;   //!
   TBranch        *b_AliESDTOFHit_fBits;   //!
   TBranch        *b_AliESDTOFHit_fTimeRaw;   //!
   TBranch        *b_AliESDTOFHit_fTime;   //!
   TBranch        *b_AliESDTOFHit_fTOT;   //!
   TBranch        *b_AliESDTOFHit_fTOFLabel;   //!
   TBranch        *b_AliESDTOFHit_fL0L1Latency;   //!
   TBranch        *b_AliESDTOFHit_fDeltaBC;   //!
   TBranch        *b_AliESDTOFHit_fTOFchannel;   //!
   TBranch        *b_AliESDTOFMatch_;   //!
   TBranch        *b_AliESDTOFMatch_fUniqueID;   //!
   TBranch        *b_AliESDTOFMatch_fBits;   //!
   TBranch        *b_AliESDTOFMatch_fDx;   //!
   TBranch        *b_AliESDTOFMatch_fDz;   //!
   TBranch        *b_AliESDTOFMatch_fTrackLength;   //!
   TBranch        *b_AliESDTOFMatch_fIntegratedTimes;   //!
   TBranch        *b_AliESDFIT_TObject_fUniqueID;   //!
   TBranch        *b_AliESDFIT_TObject_fBits;   //!
   TBranch        *b_AliESDFIT_fT0;   //!
   TBranch        *b_AliESDFIT_fFITzVertex;   //!
   TBranch        *b_AliESDFIT_fFITtime;   //!
   TBranch        *b_AliESDFIT_fFITamplitude;   //!
   TBranch        *b_AliESDFIT_fT0best;   //!
   TBranch        *b_HLTGlobalTrigger_TNamed_fUniqueID;   //!
   TBranch        *b_HLTGlobalTrigger_TNamed_fBits;   //!
   TBranch        *b_HLTGlobalTrigger_TNamed_fName;   //!
   TBranch        *b_HLTGlobalTrigger_TNamed_fTitle;   //!
   TBranch        *b_HLTGlobalTrigger_fInputObjectInfo_;   //!
   TBranch        *b_HLTGlobalTrigger_fInputObjectInfo_fUniqueID;   //!
   TBranch        *b_HLTGlobalTrigger_fInputObjectInfo_fBits;   //!
   TBranch        *b_HLTGlobalTrigger_fInputObjectInfo_fName;   //!
   TBranch        *b_HLTGlobalTrigger_fInputObjectInfo_fTitle;   //!
   TBranch        *b_HLTGlobalTrigger_fTriggerItems;   //!
   TBranch        *b_HLTGlobalTrigger_fCounters;   //!
   TBranch        *b_fDetectorStatus;   //!
   TBranch        *b_fDAQDetectorPattern;   //!
   TBranch        *b_fDAQAttributes;   //!
   TBranch        *b_fNTPCClusters;   //!

   ESD(const char*);
   virtual ~ESD();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ESD_cxx
ESD::ESD(const char* path) : fChain(0) 
{
  TFile *f  = TFile::Open(path);
  TTree *tree = 0;
  f->GetObject("esdTree",tree);
  Init(tree);
}

ESD::~ESD()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ESD::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ESD::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ESD::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set array pointer
   for(int i=0; i<kMaxSPDPileupVertices; ++i) SPDPileupVertices_fIndices[i] = 0;
   for(int i=0; i<kMaxTrkPileupVertices; ++i) TrkPileupVertices_fIndices[i] = 0;
   for(int i=0; i<kMaxTracks; ++i) Tracks_fTPCFitMap_fAllBits[i] = 0;
   for(int i=0; i<kMaxTracks; ++i) Tracks_fTPCClusterMap_fAllBits[i] = 0;
   for(int i=0; i<kMaxTracks; ++i) Tracks_fTPCSharedMap_fAllBits[i] = 0;
   for(int i=0; i<kMaxTracks; ++i) Tracks_fTRDslices[i] = 0;
   for(int i=0; i<kMaxTracks; ++i) Tracks_fTOFcluster[i] = 0;
   for(int i=0; i<kMaxCaloClusters; ++i) CaloClusters_fCellsAbsId[i] = 0;
   for(int i=0; i<kMaxCaloClusters; ++i) CaloClusters_fCellsAmpFraction[i] = 0;
   for(int i=0; i<kMaxCaloClusters; ++i) CaloClusters_fClusterMCEdepFraction[i] = 0;
   for(int i=0; i<kMaxCaloClusters; ++i) CaloClusters_fCellsMCEdepFractionMap[i] = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);
   fChain->SetBranchStatus("*",0);  // disable all branches. Segfault if not done! WOOP!
   fChain->SetBranchStatus("PrimaryVertex.*", 1);  // enable Primary Vertex
   fChain->SetBranchStatus("Tracks.*", 1);  // enable Tracks
   fChain->SetBranchStatus("AliMultiplicity.fNtracks", 1);  // enable Tracks
   
   fChain->SetBranchAddress("AliESDRun.TObject.fUniqueID", &AliESDRun_TObject_fUniqueID, &b_AliESDRun_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDRun.TObject.fBits", &AliESDRun_TObject_fBits, &b_AliESDRun_TObject_fBits);
   fChain->SetBranchAddress("AliESDRun.fCurrentL3", &AliESDRun_fCurrentL3, &b_AliESDRun_fCurrentL3);
   fChain->SetBranchAddress("AliESDRun.fCurrentDip", &AliESDRun_fCurrentDip, &b_AliESDRun_fCurrentDip);
   fChain->SetBranchAddress("AliESDRun.fBeamEnergy", &AliESDRun_fBeamEnergy, &b_AliESDRun_fBeamEnergy);
   fChain->SetBranchAddress("AliESDRun.fMagneticField", &AliESDRun_fMagneticField, &b_AliESDRun_fMagneticField);
   fChain->SetBranchAddress("AliESDRun.fMeanBeamInt[2][2]", AliESDRun_fMeanBeamInt, &b_AliESDRun_fMeanBeamInt);
   fChain->SetBranchAddress("AliESDRun.fDiamondXY[2]", AliESDRun_fDiamondXY, &b_AliESDRun_fDiamondXY);
   fChain->SetBranchAddress("AliESDRun.fDiamondCovXY[3]", AliESDRun_fDiamondCovXY, &b_AliESDRun_fDiamondCovXY);
   fChain->SetBranchAddress("AliESDRun.fDiamondZ", &AliESDRun_fDiamondZ, &b_AliESDRun_fDiamondZ);
   fChain->SetBranchAddress("AliESDRun.fDiamondSig2Z", &AliESDRun_fDiamondSig2Z, &b_AliESDRun_fDiamondSig2Z);
   fChain->SetBranchAddress("AliESDRun.fPeriodNumber", &AliESDRun_fPeriodNumber, &b_AliESDRun_fPeriodNumber);
   fChain->SetBranchAddress("AliESDRun.fRunNumber", &AliESDRun_fRunNumber, &b_AliESDRun_fRunNumber);
   fChain->SetBranchAddress("AliESDRun.fRecoVersion", &AliESDRun_fRecoVersion, &b_AliESDRun_fRecoVersion);
   fChain->SetBranchAddress("AliESDRun.fBeamParticle[2]", AliESDRun_fBeamParticle, &b_AliESDRun_fBeamParticle);
   fChain->SetBranchAddress("AliESDRun.fBeamType", &AliESDRun_fBeamType, &b_AliESDRun_fBeamType);
   fChain->SetBranchAddress("AliESDRun.fTriggerClasses", &AliESDRun_fTriggerClasses, &b_AliESDRun_fTriggerClasses);
   fChain->SetBranchAddress("AliESDRun.fDetInDAQ", &AliESDRun_fDetInDAQ, &b_AliESDRun_fDetInDAQ);
   fChain->SetBranchAddress("AliESDRun.fDetInReco", &AliESDRun_fDetInReco, &b_AliESDRun_fDetInReco);
   fChain->SetBranchAddress("AliESDRun.fT0spread[4]", AliESDRun_fT0spread, &b_AliESDRun_fT0spread);
   fChain->SetBranchAddress("AliESDRun.fCaloTriggerType[15]", AliESDRun_fCaloTriggerType, &b_AliESDRun_fCaloTriggerType);
   fChain->SetBranchAddress("AliESDRun.fVZEROEqFactors[64]", AliESDRun_fVZEROEqFactors, &b_AliESDRun_fVZEROEqFactors);
   fChain->SetBranchAddress("AliESDRun.fCaloTriggerTypeNew[19]", AliESDRun_fCaloTriggerTypeNew, &b_AliESDRun_fCaloTriggerTypeNew);
   fChain->SetBranchAddress("AliESDRun.fCTPStart.fUniqueID", &AliESDRun_fCTPStart_fUniqueID, &b_AliESDRun_fCTPStart_fUniqueID);
   fChain->SetBranchAddress("AliESDRun.fCTPStart.fBits", &AliESDRun_fCTPStart_fBits, &b_AliESDRun_fCTPStart_fBits);
   fChain->SetBranchAddress("AliESDRun.fCTPStart.fOrbit", &AliESDRun_fCTPStart_fOrbit, &b_AliESDRun_fCTPStart_fOrbit);
   fChain->SetBranchAddress("AliESDRun.fCTPStart.fPeriod", &AliESDRun_fCTPStart_fPeriod, &b_AliESDRun_fCTPStart_fPeriod);
   fChain->SetBranchAddress("AliESDRun.fCTPStart.fBunchCross", &AliESDRun_fCTPStart_fBunchCross, &b_AliESDRun_fCTPStart_fBunchCross);
   fChain->SetBranchAddress("AliESDHeader.AliVHeader.fUniqueID", &AliESDHeader_AliVHeader_fUniqueID, &b_AliESDHeader_AliVHeader_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.AliVHeader.fBits", &AliESDHeader_AliVHeader_fBits, &b_AliESDHeader_AliVHeader_fBits);
   fChain->SetBranchAddress("AliESDHeader.AliVHeader.fName", &AliESDHeader_AliVHeader_fName, &b_AliESDHeader_AliVHeader_fName);
   fChain->SetBranchAddress("AliESDHeader.AliVHeader.fTitle", &AliESDHeader_AliVHeader_fTitle, &b_AliESDHeader_AliVHeader_fTitle);
   fChain->SetBranchAddress("AliESDHeader.fTriggerMask", &AliESDHeader_fTriggerMask, &b_AliESDHeader_fTriggerMask);
   fChain->SetBranchAddress("AliESDHeader.fTriggerMaskNext50", &AliESDHeader_fTriggerMaskNext50, &b_AliESDHeader_fTriggerMaskNext50);
   fChain->SetBranchAddress("AliESDHeader.fOrbitNumber", &AliESDHeader_fOrbitNumber, &b_AliESDHeader_fOrbitNumber);
   fChain->SetBranchAddress("AliESDHeader.fTimeStamp", &AliESDHeader_fTimeStamp, &b_AliESDHeader_fTimeStamp);
   fChain->SetBranchAddress("AliESDHeader.fEventType", &AliESDHeader_fEventType, &b_AliESDHeader_fEventType);
   fChain->SetBranchAddress("AliESDHeader.fEventSpecie", &AliESDHeader_fEventSpecie, &b_AliESDHeader_fEventSpecie);
   fChain->SetBranchAddress("AliESDHeader.fPeriodNumber", &AliESDHeader_fPeriodNumber, &b_AliESDHeader_fPeriodNumber);
   fChain->SetBranchAddress("AliESDHeader.fEventNumberInFile", &AliESDHeader_fEventNumberInFile, &b_AliESDHeader_fEventNumberInFile);
   fChain->SetBranchAddress("AliESDHeader.fBunchCrossNumber", &AliESDHeader_fBunchCrossNumber, &b_AliESDHeader_fBunchCrossNumber);
   fChain->SetBranchAddress("AliESDHeader.fTriggerCluster", &AliESDHeader_fTriggerCluster, &b_AliESDHeader_fTriggerCluster);
   fChain->SetBranchAddress("AliESDHeader.fL0TriggerInputs", &AliESDHeader_fL0TriggerInputs, &b_AliESDHeader_fL0TriggerInputs);
   fChain->SetBranchAddress("AliESDHeader.fL1TriggerInputs", &AliESDHeader_fL1TriggerInputs, &b_AliESDHeader_fL1TriggerInputs);
   fChain->SetBranchAddress("AliESDHeader.fL2TriggerInputs", &AliESDHeader_fL2TriggerInputs, &b_AliESDHeader_fL2TriggerInputs);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fUniqueID", &AliESDHeader_fTriggerScalers_fUniqueID, &b_AliESDHeader_fTriggerScalers_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fBits", &AliESDHeader_fTriggerScalers_fBits, &b_AliESDHeader_fTriggerScalers_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimestamp.fUniqueID", &AliESDHeader_fTriggerScalers_fTimestamp_fUniqueID, &b_AliESDHeader_fTriggerScalers_fTimestamp_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimestamp.fBits", &AliESDHeader_fTriggerScalers_fTimestamp_fBits, &b_AliESDHeader_fTriggerScalers_fTimestamp_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimestamp.fOrbit", &AliESDHeader_fTriggerScalers_fTimestamp_fOrbit, &b_AliESDHeader_fTriggerScalers_fTimestamp_fOrbit);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimestamp.fPeriod", &AliESDHeader_fTriggerScalers_fTimestamp_fPeriod, &b_AliESDHeader_fTriggerScalers_fTimestamp_fPeriod);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimestamp.fBunchCross", &AliESDHeader_fTriggerScalers_fTimestamp_fBunchCross, &b_AliESDHeader_fTriggerScalers_fTimestamp_fBunchCross);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fScalers", &AliESDHeader_fTriggerScalers_fScalers, &b_AliESDHeader_fTriggerScalers_fScalers);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalers.fTimeGroup", &AliESDHeader_fTriggerScalers_fTimeGroup, &b_AliESDHeader_fTriggerScalers_fTimeGroup);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fUniqueID", &AliESDHeader_fTriggerScalersDeltaEvent_fUniqueID, &b_AliESDHeader_fTriggerScalersDeltaEvent_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fBits", &AliESDHeader_fTriggerScalersDeltaEvent_fBits, &b_AliESDHeader_fTriggerScalersDeltaEvent_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimestamp.fUniqueID", &AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fUniqueID, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimestamp.fBits", &AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBits, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimestamp.fOrbit", &AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fOrbit, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fOrbit);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimestamp.fPeriod", &AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fPeriod, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fPeriod);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimestamp.fBunchCross", &AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBunchCross, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimestamp_fBunchCross);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fScalers", &AliESDHeader_fTriggerScalersDeltaEvent_fScalers, &b_AliESDHeader_fTriggerScalersDeltaEvent_fScalers);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaEvent.fTimeGroup", &AliESDHeader_fTriggerScalersDeltaEvent_fTimeGroup, &b_AliESDHeader_fTriggerScalersDeltaEvent_fTimeGroup);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fUniqueID", &AliESDHeader_fTriggerScalersDeltaRun_fUniqueID, &b_AliESDHeader_fTriggerScalersDeltaRun_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fBits", &AliESDHeader_fTriggerScalersDeltaRun_fBits, &b_AliESDHeader_fTriggerScalersDeltaRun_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimestamp.fUniqueID", &AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fUniqueID, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimestamp.fBits", &AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBits, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBits);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimestamp.fOrbit", &AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fOrbit, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fOrbit);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimestamp.fPeriod", &AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fPeriod, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fPeriod);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimestamp.fBunchCross", &AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBunchCross, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimestamp_fBunchCross);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fScalers", &AliESDHeader_fTriggerScalersDeltaRun_fScalers, &b_AliESDHeader_fTriggerScalersDeltaRun_fScalers);
   fChain->SetBranchAddress("AliESDHeader.fTriggerScalersDeltaRun.fTimeGroup", &AliESDHeader_fTriggerScalersDeltaRun_fTimeGroup, &b_AliESDHeader_fTriggerScalersDeltaRun_fTimeGroup);
   fChain->SetBranchAddress("AliESDHeader.fTriggerInputsNames", &AliESDHeader_fTriggerInputsNames, &b_AliESDHeader_fTriggerInputsNames);
   fChain->SetBranchAddress("AliESDHeader.fIRBufferArray", &AliESDHeader_fIRBufferArray, &b_AliESDHeader_fIRBufferArray);
   fChain->SetBranchAddress("AliESDHeader.fIRInt2InteractionsMap.fUniqueID", &AliESDHeader_fIRInt2InteractionsMap_fUniqueID, &b_AliESDHeader_fIRInt2InteractionsMap_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fIRInt2InteractionsMap.fBits", &AliESDHeader_fIRInt2InteractionsMap_fBits, &b_AliESDHeader_fIRInt2InteractionsMap_fBits);
   fChain->SetBranchAddress("AliESDHeader.fIRInt2InteractionsMap.fNbits", &AliESDHeader_fIRInt2InteractionsMap_fNbits, &b_AliESDHeader_fIRInt2InteractionsMap_fNbits);
   fChain->SetBranchAddress("AliESDHeader.fIRInt2InteractionsMap.fNbytes", &AliESDHeader_fIRInt2InteractionsMap_fNbytes, &b_AliESDHeader_fIRInt2InteractionsMap_fNbytes);
   fChain->SetBranchAddress("AliESDHeader.fIRInt2InteractionsMap.fAllBits", &AliESDHeader_fIRInt2InteractionsMap_fAllBits, &b_AliESDHeader_fIRInt2InteractionsMap_fAllBits);
   fChain->SetBranchAddress("AliESDHeader.fIRInt1InteractionsMap.fUniqueID", &AliESDHeader_fIRInt1InteractionsMap_fUniqueID, &b_AliESDHeader_fIRInt1InteractionsMap_fUniqueID);
   fChain->SetBranchAddress("AliESDHeader.fIRInt1InteractionsMap.fBits", &AliESDHeader_fIRInt1InteractionsMap_fBits, &b_AliESDHeader_fIRInt1InteractionsMap_fBits);
   fChain->SetBranchAddress("AliESDHeader.fIRInt1InteractionsMap.fNbits", &AliESDHeader_fIRInt1InteractionsMap_fNbits, &b_AliESDHeader_fIRInt1InteractionsMap_fNbits);
   fChain->SetBranchAddress("AliESDHeader.fIRInt1InteractionsMap.fNbytes", &AliESDHeader_fIRInt1InteractionsMap_fNbytes, &b_AliESDHeader_fIRInt1InteractionsMap_fNbytes);
   fChain->SetBranchAddress("AliESDHeader.fIRInt1InteractionsMap.fAllBits", &AliESDHeader_fIRInt1InteractionsMap_fAllBits, &b_AliESDHeader_fIRInt1InteractionsMap_fAllBits);
   fChain->SetBranchAddress("AliESDHeader.fTPCNoiseFilterCounter[3]", AliESDHeader_fTPCNoiseFilterCounter, &b_AliESDHeader_fTPCNoiseFilterCounter);
   fChain->SetBranchAddress("AliESDZDC.AliVZDC.fUniqueID", &AliESDZDC_AliVZDC_fUniqueID, &b_AliESDZDC_AliVZDC_fUniqueID);
   fChain->SetBranchAddress("AliESDZDC.AliVZDC.fBits", &AliESDZDC_AliVZDC_fBits, &b_AliESDZDC_AliVZDC_fBits);
   fChain->SetBranchAddress("AliESDZDC.fZDCN1Energy", &AliESDZDC_fZDCN1Energy, &b_AliESDZDC_fZDCN1Energy);
   fChain->SetBranchAddress("AliESDZDC.fZDCP1Energy", &AliESDZDC_fZDCP1Energy, &b_AliESDZDC_fZDCP1Energy);
   fChain->SetBranchAddress("AliESDZDC.fZDCN2Energy", &AliESDZDC_fZDCN2Energy, &b_AliESDZDC_fZDCN2Energy);
   fChain->SetBranchAddress("AliESDZDC.fZDCP2Energy", &AliESDZDC_fZDCP2Energy, &b_AliESDZDC_fZDCP2Energy);
   fChain->SetBranchAddress("AliESDZDC.fZDCEMEnergy", &AliESDZDC_fZDCEMEnergy, &b_AliESDZDC_fZDCEMEnergy);
   fChain->SetBranchAddress("AliESDZDC.fZDCEMEnergy1", &AliESDZDC_fZDCEMEnergy1, &b_AliESDZDC_fZDCEMEnergy1);
   fChain->SetBranchAddress("AliESDZDC.fZN1TowerEnergy[5]", AliESDZDC_fZN1TowerEnergy, &b_AliESDZDC_fZN1TowerEnergy);
   fChain->SetBranchAddress("AliESDZDC.fZN2TowerEnergy[5]", AliESDZDC_fZN2TowerEnergy, &b_AliESDZDC_fZN2TowerEnergy);
   fChain->SetBranchAddress("AliESDZDC.fZP1TowerEnergy[5]", AliESDZDC_fZP1TowerEnergy, &b_AliESDZDC_fZP1TowerEnergy);
   fChain->SetBranchAddress("AliESDZDC.fZP2TowerEnergy[5]", AliESDZDC_fZP2TowerEnergy, &b_AliESDZDC_fZP2TowerEnergy);
   fChain->SetBranchAddress("AliESDZDC.fZN1TowerEnergyLR[5]", AliESDZDC_fZN1TowerEnergyLR, &b_AliESDZDC_fZN1TowerEnergyLR);
   fChain->SetBranchAddress("AliESDZDC.fZN2TowerEnergyLR[5]", AliESDZDC_fZN2TowerEnergyLR, &b_AliESDZDC_fZN2TowerEnergyLR);
   fChain->SetBranchAddress("AliESDZDC.fZP1TowerEnergyLR[5]", AliESDZDC_fZP1TowerEnergyLR, &b_AliESDZDC_fZP1TowerEnergyLR);
   fChain->SetBranchAddress("AliESDZDC.fZP2TowerEnergyLR[5]", AliESDZDC_fZP2TowerEnergyLR, &b_AliESDZDC_fZP2TowerEnergyLR);
   fChain->SetBranchAddress("AliESDZDC.fZDCParticipants", &AliESDZDC_fZDCParticipants, &b_AliESDZDC_fZDCParticipants);
   fChain->SetBranchAddress("AliESDZDC.fZDCPartSideA", &AliESDZDC_fZDCPartSideA, &b_AliESDZDC_fZDCPartSideA);
   fChain->SetBranchAddress("AliESDZDC.fZDCPartSideC", &AliESDZDC_fZDCPartSideC, &b_AliESDZDC_fZDCPartSideC);
   fChain->SetBranchAddress("AliESDZDC.fImpactParameter", &AliESDZDC_fImpactParameter, &b_AliESDZDC_fImpactParameter);
   fChain->SetBranchAddress("AliESDZDC.fImpactParamSideA", &AliESDZDC_fImpactParamSideA, &b_AliESDZDC_fImpactParamSideA);
   fChain->SetBranchAddress("AliESDZDC.fImpactParamSideC", &AliESDZDC_fImpactParamSideC, &b_AliESDZDC_fImpactParamSideC);
   fChain->SetBranchAddress("AliESDZDC.fZNACentrCoord[2]", AliESDZDC_fZNACentrCoord, &b_AliESDZDC_fZNACentrCoord);
   fChain->SetBranchAddress("AliESDZDC.fZNCCentrCoord[2]", AliESDZDC_fZNCCentrCoord, &b_AliESDZDC_fZNCCentrCoord);
   fChain->SetBranchAddress("AliESDZDC.fESDQuality", &AliESDZDC_fESDQuality, &b_AliESDZDC_fESDQuality);
   fChain->SetBranchAddress("AliESDZDC.fVMEScaler[32]", AliESDZDC_fVMEScaler, &b_AliESDZDC_fVMEScaler);
   fChain->SetBranchAddress("AliESDZDC.fZDCTDCData[32][4]", AliESDZDC_fZDCTDCData, &b_AliESDZDC_fZDCTDCData);
   fChain->SetBranchAddress("AliESDZDC.fZDCTDCCorrected[32][4]", AliESDZDC_fZDCTDCCorrected, &b_AliESDZDC_fZDCTDCCorrected);
   fChain->SetBranchAddress("AliESDZDC.fZNCTDChit", &AliESDZDC_fZNCTDChit, &b_AliESDZDC_fZNCTDChit);
   fChain->SetBranchAddress("AliESDZDC.fZNATDChit", &AliESDZDC_fZNATDChit, &b_AliESDZDC_fZNATDChit);
   fChain->SetBranchAddress("AliESDZDC.fZPCTDChit", &AliESDZDC_fZPCTDChit, &b_AliESDZDC_fZPCTDChit);
   fChain->SetBranchAddress("AliESDZDC.fZPATDChit", &AliESDZDC_fZPATDChit, &b_AliESDZDC_fZPATDChit);
   fChain->SetBranchAddress("AliESDZDC.fZEM1TDChit", &AliESDZDC_fZEM1TDChit, &b_AliESDZDC_fZEM1TDChit);
   fChain->SetBranchAddress("AliESDZDC.fZEM2TDChit", &AliESDZDC_fZEM2TDChit, &b_AliESDZDC_fZEM2TDChit);
   fChain->SetBranchAddress("AliESDZDC.fZDCTDCChannels[7]", AliESDZDC_fZDCTDCChannels, &b_AliESDZDC_fZDCTDCChannels);
   fChain->SetBranchAddress("AliESDFMD.TObject.fUniqueID", &AliESDFMD_TObject_fUniqueID, &b_AliESDFMD_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDFMD.TObject.fBits", &AliESDFMD_TObject_fBits, &b_AliESDFMD_TObject_fBits);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fUniqueID", &AliESDFMD_fMultiplicity_fUniqueID, &b_AliESDFMD_fMultiplicity_fUniqueID);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fBits", &AliESDFMD_fMultiplicity_fBits, &b_AliESDFMD_fMultiplicity_fBits);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fMaxDetectors", &AliESDFMD_fMultiplicity_fMaxDetectors, &b_AliESDFMD_fMultiplicity_fMaxDetectors);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fMaxRings", &AliESDFMD_fMultiplicity_fMaxRings, &b_AliESDFMD_fMultiplicity_fMaxRings);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fMaxSectors", &AliESDFMD_fMultiplicity_fMaxSectors, &b_AliESDFMD_fMultiplicity_fMaxSectors);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fMaxStrips", &AliESDFMD_fMultiplicity_fMaxStrips, &b_AliESDFMD_fMultiplicity_fMaxStrips);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fTotal", &AliESDFMD_fMultiplicity_fTotal, &b_AliESDFMD_fMultiplicity_fTotal);
   fChain->SetBranchAddress("AliESDFMD.fMultiplicity.fData", AliESDFMD_fMultiplicity_fData, &b_AliESDFMD_fMultiplicity_fData);
   fChain->SetBranchAddress("AliESDFMD.fEta.fUniqueID", &AliESDFMD_fEta_fUniqueID, &b_AliESDFMD_fEta_fUniqueID);
   fChain->SetBranchAddress("AliESDFMD.fEta.fBits", &AliESDFMD_fEta_fBits, &b_AliESDFMD_fEta_fBits);
   fChain->SetBranchAddress("AliESDFMD.fEta.fMaxDetectors", &AliESDFMD_fEta_fMaxDetectors, &b_AliESDFMD_fEta_fMaxDetectors);
   fChain->SetBranchAddress("AliESDFMD.fEta.fMaxRings", &AliESDFMD_fEta_fMaxRings, &b_AliESDFMD_fEta_fMaxRings);
   fChain->SetBranchAddress("AliESDFMD.fEta.fMaxSectors", &AliESDFMD_fEta_fMaxSectors, &b_AliESDFMD_fEta_fMaxSectors);
   fChain->SetBranchAddress("AliESDFMD.fEta.fMaxStrips", &AliESDFMD_fEta_fMaxStrips, &b_AliESDFMD_fEta_fMaxStrips);
   fChain->SetBranchAddress("AliESDFMD.fEta.fTotal", &AliESDFMD_fEta_fTotal, &b_AliESDFMD_fEta_fTotal);
   fChain->SetBranchAddress("AliESDFMD.fEta.fData", AliESDFMD_fEta_fData, &b_AliESDFMD_fEta_fData);
   fChain->SetBranchAddress("AliESDFMD.fNoiseFactor", &AliESDFMD_fNoiseFactor, &b_AliESDFMD_fNoiseFactor);
   fChain->SetBranchAddress("AliESDFMD.fAngleCorrected", &AliESDFMD_fAngleCorrected, &b_AliESDFMD_fAngleCorrected);
   fChain->SetBranchAddress("AliESDVZERO.AliVVZERO.fUniqueID", &AliESDVZERO_AliVVZERO_fUniqueID, &b_AliESDVZERO_AliVVZERO_fUniqueID);
   fChain->SetBranchAddress("AliESDVZERO.AliVVZERO.fBits", &AliESDVZERO_AliVVZERO_fBits, &b_AliESDVZERO_AliVVZERO_fBits);
   fChain->SetBranchAddress("AliESDVZERO.fBBtriggerV0A", &AliESDVZERO_fBBtriggerV0A, &b_AliESDVZERO_fBBtriggerV0A);
   fChain->SetBranchAddress("AliESDVZERO.fBGtriggerV0A", &AliESDVZERO_fBGtriggerV0A, &b_AliESDVZERO_fBGtriggerV0A);
   fChain->SetBranchAddress("AliESDVZERO.fBBtriggerV0C", &AliESDVZERO_fBBtriggerV0C, &b_AliESDVZERO_fBBtriggerV0C);
   fChain->SetBranchAddress("AliESDVZERO.fBGtriggerV0C", &AliESDVZERO_fBGtriggerV0C, &b_AliESDVZERO_fBGtriggerV0C);
   fChain->SetBranchAddress("AliESDVZERO.fMultiplicity[64]", AliESDVZERO_fMultiplicity, &b_AliESDVZERO_fMultiplicity);
   fChain->SetBranchAddress("AliESDVZERO.fAdc[64]", AliESDVZERO_fAdc, &b_AliESDVZERO_fAdc);
   fChain->SetBranchAddress("AliESDVZERO.fTime[64]", AliESDVZERO_fTime, &b_AliESDVZERO_fTime);
   fChain->SetBranchAddress("AliESDVZERO.fWidth[64]", AliESDVZERO_fWidth, &b_AliESDVZERO_fWidth);
   fChain->SetBranchAddress("AliESDVZERO.fBBFlag[64]", AliESDVZERO_fBBFlag, &b_AliESDVZERO_fBBFlag);
   fChain->SetBranchAddress("AliESDVZERO.fBGFlag[64]", AliESDVZERO_fBGFlag, &b_AliESDVZERO_fBGFlag);
   fChain->SetBranchAddress("AliESDVZERO.fV0ATime", &AliESDVZERO_fV0ATime, &b_AliESDVZERO_fV0ATime);
   fChain->SetBranchAddress("AliESDVZERO.fV0CTime", &AliESDVZERO_fV0CTime, &b_AliESDVZERO_fV0CTime);
   fChain->SetBranchAddress("AliESDVZERO.fV0ATimeError", &AliESDVZERO_fV0ATimeError, &b_AliESDVZERO_fV0ATimeError);
   fChain->SetBranchAddress("AliESDVZERO.fV0CTimeError", &AliESDVZERO_fV0CTimeError, &b_AliESDVZERO_fV0CTimeError);
   fChain->SetBranchAddress("AliESDVZERO.fV0ADecision", &AliESDVZERO_fV0ADecision, &b_AliESDVZERO_fV0ADecision);
   fChain->SetBranchAddress("AliESDVZERO.fV0CDecision", &AliESDVZERO_fV0CDecision, &b_AliESDVZERO_fV0CDecision);
   fChain->SetBranchAddress("AliESDVZERO.fTriggerChargeA", &AliESDVZERO_fTriggerChargeA, &b_AliESDVZERO_fTriggerChargeA);
   fChain->SetBranchAddress("AliESDVZERO.fTriggerChargeC", &AliESDVZERO_fTriggerChargeC, &b_AliESDVZERO_fTriggerChargeC);
   fChain->SetBranchAddress("AliESDVZERO.fTriggerBits", &AliESDVZERO_fTriggerBits, &b_AliESDVZERO_fTriggerBits);
   fChain->SetBranchAddress("AliESDVZERO.fIsBB[64][21]", AliESDVZERO_fIsBB, &b_AliESDVZERO_fIsBB);
   fChain->SetBranchAddress("AliESDVZERO.fIsBG[64][21]", AliESDVZERO_fIsBG, &b_AliESDVZERO_fIsBG);
   fChain->SetBranchAddress("AliESDTZERO.TObject.fUniqueID", &AliESDTZERO_TObject_fUniqueID, &b_AliESDTZERO_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDTZERO.TObject.fBits", &AliESDTZERO_TObject_fBits, &b_AliESDTZERO_TObject_fBits);
   fChain->SetBranchAddress("AliESDTZERO.fT0clock", &AliESDTZERO_fT0clock, &b_AliESDTZERO_fT0clock);
   fChain->SetBranchAddress("AliESDTZERO.fT0TOF[3]", AliESDTZERO_fT0TOF, &b_AliESDTZERO_fT0TOF);
   fChain->SetBranchAddress("AliESDTZERO.fT0zVertex", &AliESDTZERO_fT0zVertex, &b_AliESDTZERO_fT0zVertex);
   fChain->SetBranchAddress("AliESDTZERO.fT0timeStart", &AliESDTZERO_fT0timeStart, &b_AliESDTZERO_fT0timeStart);
   fChain->SetBranchAddress("AliESDTZERO.fT0trig", &AliESDTZERO_fT0trig, &b_AliESDTZERO_fT0trig);
   fChain->SetBranchAddress("AliESDTZERO.fT0time[24]", AliESDTZERO_fT0time, &b_AliESDTZERO_fT0time);
   fChain->SetBranchAddress("AliESDTZERO.fT0amplitude[24]", AliESDTZERO_fT0amplitude, &b_AliESDTZERO_fT0amplitude);
   fChain->SetBranchAddress("AliESDTZERO.fTimeFull[24][5]", AliESDTZERO_fTimeFull, &b_AliESDTZERO_fTimeFull);
   fChain->SetBranchAddress("AliESDTZERO.fOrA[5]", AliESDTZERO_fOrA, &b_AliESDTZERO_fOrA);
   fChain->SetBranchAddress("AliESDTZERO.fOrC[5]", AliESDTZERO_fOrC, &b_AliESDTZERO_fOrC);
   fChain->SetBranchAddress("AliESDTZERO.fTVDC[5]", AliESDTZERO_fTVDC, &b_AliESDTZERO_fTVDC);
   fChain->SetBranchAddress("AliESDTZERO.fPileup", &AliESDTZERO_fPileup, &b_AliESDTZERO_fPileup);
   fChain->SetBranchAddress("AliESDTZERO.fSattelite", &AliESDTZERO_fSattelite, &b_AliESDTZERO_fSattelite);
   fChain->SetBranchAddress("AliESDTZERO.fMultC", &AliESDTZERO_fMultC, &b_AliESDTZERO_fMultC);
   fChain->SetBranchAddress("AliESDTZERO.fMultA", &AliESDTZERO_fMultA, &b_AliESDTZERO_fMultA);
   fChain->SetBranchAddress("AliESDTZERO.fBackground", &AliESDTZERO_fBackground, &b_AliESDTZERO_fBackground);
   fChain->SetBranchAddress("AliESDTZERO.fPileupTime[6]", AliESDTZERO_fPileupTime, &b_AliESDTZERO_fPileupTime);
   fChain->SetBranchAddress("AliESDTZERO.fT0TOFbest[3]", AliESDTZERO_fT0TOFbest, &b_AliESDTZERO_fT0TOFbest);
   fChain->SetBranchAddress("AliESDTZERO.fT0NewAmplitude[24]", AliESDTZERO_fT0NewAmplitude, &b_AliESDTZERO_fT0NewAmplitude);
   fChain->SetBranchAddress("AliESDTZERO.fPileupBits.fUniqueID", &AliESDTZERO_fPileupBits_fUniqueID, &b_AliESDTZERO_fPileupBits_fUniqueID);
   fChain->SetBranchAddress("AliESDTZERO.fPileupBits.fBits", &AliESDTZERO_fPileupBits_fBits, &b_AliESDTZERO_fPileupBits_fBits);
   fChain->SetBranchAddress("AliESDTZERO.fPileupBits.fNbits", &AliESDTZERO_fPileupBits_fNbits, &b_AliESDTZERO_fPileupBits_fNbits);
   fChain->SetBranchAddress("AliESDTZERO.fPileupBits.fNbytes", &AliESDTZERO_fPileupBits_fNbytes, &b_AliESDTZERO_fPileupBits_fNbytes);
   fChain->SetBranchAddress("AliESDTZERO.fPileupBits.fAllBits", &AliESDTZERO_fPileupBits_fAllBits, &b_AliESDTZERO_fPileupBits_fAllBits);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fUniqueID", &TPCVertex_AliVertex_fUniqueID, &b_TPCVertex_AliVertex_fUniqueID);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fBits", &TPCVertex_AliVertex_fBits, &b_TPCVertex_AliVertex_fBits);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fName", &TPCVertex_AliVertex_fName, &b_TPCVertex_AliVertex_fName);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fTitle", &TPCVertex_AliVertex_fTitle, &b_TPCVertex_AliVertex_fTitle);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fPosition[3]", TPCVertex_AliVertex_fPosition, &b_TPCVertex_AliVertex_fPosition);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fSigma", &TPCVertex_AliVertex_fSigma, &b_TPCVertex_AliVertex_fSigma);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fNContributors", &TPCVertex_AliVertex_fNContributors, &b_TPCVertex_AliVertex_fNContributors);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fNIndices", &TPCVertex_AliVertex_fNIndices, &b_TPCVertex_AliVertex_fNIndices);
   fChain->SetBranchAddress("TPCVertex.AliVertex.fIndices", TPCVertex_AliVertex_fIndices, &b_TPCVertex_AliVertex_fIndices);
   fChain->SetBranchAddress("TPCVertex.fCovXX", &TPCVertex_fCovXX, &b_TPCVertex_fCovXX);
   fChain->SetBranchAddress("TPCVertex.fCovXY", &TPCVertex_fCovXY, &b_TPCVertex_fCovXY);
   fChain->SetBranchAddress("TPCVertex.fCovYY", &TPCVertex_fCovYY, &b_TPCVertex_fCovYY);
   fChain->SetBranchAddress("TPCVertex.fCovXZ", &TPCVertex_fCovXZ, &b_TPCVertex_fCovXZ);
   fChain->SetBranchAddress("TPCVertex.fCovYZ", &TPCVertex_fCovYZ, &b_TPCVertex_fCovYZ);
   fChain->SetBranchAddress("TPCVertex.fCovZZ", &TPCVertex_fCovZZ, &b_TPCVertex_fCovZZ);
   fChain->SetBranchAddress("TPCVertex.fSNR[3]", TPCVertex_fSNR, &b_TPCVertex_fSNR);
   fChain->SetBranchAddress("TPCVertex.fChi2", &TPCVertex_fChi2, &b_TPCVertex_fChi2);
   fChain->SetBranchAddress("TPCVertex.fID", &TPCVertex_fID, &b_TPCVertex_fID);
   fChain->SetBranchAddress("TPCVertex.fBCID", &TPCVertex_fBCID, &b_TPCVertex_fBCID);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fUniqueID", &SPDVertex_AliVertex_fUniqueID, &b_SPDVertex_AliVertex_fUniqueID);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fBits", &SPDVertex_AliVertex_fBits, &b_SPDVertex_AliVertex_fBits);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fName", &SPDVertex_AliVertex_fName, &b_SPDVertex_AliVertex_fName);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fTitle", &SPDVertex_AliVertex_fTitle, &b_SPDVertex_AliVertex_fTitle);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fPosition[3]", SPDVertex_AliVertex_fPosition, &b_SPDVertex_AliVertex_fPosition);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fSigma", &SPDVertex_AliVertex_fSigma, &b_SPDVertex_AliVertex_fSigma);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fNContributors", &SPDVertex_AliVertex_fNContributors, &b_SPDVertex_AliVertex_fNContributors);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fNIndices", &SPDVertex_AliVertex_fNIndices, &b_SPDVertex_AliVertex_fNIndices);
   fChain->SetBranchAddress("SPDVertex.AliVertex.fIndices", &SPDVertex_AliVertex_fIndices, &b_SPDVertex_AliVertex_fIndices);
   fChain->SetBranchAddress("SPDVertex.fCovXX", &SPDVertex_fCovXX, &b_SPDVertex_fCovXX);
   fChain->SetBranchAddress("SPDVertex.fCovXY", &SPDVertex_fCovXY, &b_SPDVertex_fCovXY);
   fChain->SetBranchAddress("SPDVertex.fCovYY", &SPDVertex_fCovYY, &b_SPDVertex_fCovYY);
   fChain->SetBranchAddress("SPDVertex.fCovXZ", &SPDVertex_fCovXZ, &b_SPDVertex_fCovXZ);
   fChain->SetBranchAddress("SPDVertex.fCovYZ", &SPDVertex_fCovYZ, &b_SPDVertex_fCovYZ);
   fChain->SetBranchAddress("SPDVertex.fCovZZ", &SPDVertex_fCovZZ, &b_SPDVertex_fCovZZ);
   fChain->SetBranchAddress("SPDVertex.fSNR[3]", SPDVertex_fSNR, &b_SPDVertex_fSNR);
   fChain->SetBranchAddress("SPDVertex.fChi2", &SPDVertex_fChi2, &b_SPDVertex_fChi2);
   fChain->SetBranchAddress("SPDVertex.fID", &SPDVertex_fID, &b_SPDVertex_fID);
   fChain->SetBranchAddress("SPDVertex.fBCID", &SPDVertex_fBCID, &b_SPDVertex_fBCID);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fUniqueID", &PrimaryVertex_AliVertex_fUniqueID, &b_PrimaryVertex_AliVertex_fUniqueID);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fBits", &PrimaryVertex_AliVertex_fBits, &b_PrimaryVertex_AliVertex_fBits);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fName", &PrimaryVertex_AliVertex_fName, &b_PrimaryVertex_AliVertex_fName);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fTitle", &PrimaryVertex_AliVertex_fTitle, &b_PrimaryVertex_AliVertex_fTitle);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fPosition[3]", PrimaryVertex_AliVertex_fPosition, &b_PrimaryVertex_AliVertex_fPosition);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fSigma", &PrimaryVertex_AliVertex_fSigma, &b_PrimaryVertex_AliVertex_fSigma);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fNContributors", &PrimaryVertex_AliVertex_fNContributors, &b_PrimaryVertex_AliVertex_fNContributors);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fNIndices", &PrimaryVertex_AliVertex_fNIndices, &b_PrimaryVertex_AliVertex_fNIndices);
   fChain->SetBranchAddress("PrimaryVertex.AliVertex.fIndices", PrimaryVertex_AliVertex_fIndices, &b_PrimaryVertex_AliVertex_fIndices);
   fChain->SetBranchAddress("PrimaryVertex.fCovXX", &PrimaryVertex_fCovXX, &b_PrimaryVertex_fCovXX);
   fChain->SetBranchAddress("PrimaryVertex.fCovXY", &PrimaryVertex_fCovXY, &b_PrimaryVertex_fCovXY);
   fChain->SetBranchAddress("PrimaryVertex.fCovYY", &PrimaryVertex_fCovYY, &b_PrimaryVertex_fCovYY);
   fChain->SetBranchAddress("PrimaryVertex.fCovXZ", &PrimaryVertex_fCovXZ, &b_PrimaryVertex_fCovXZ);
   fChain->SetBranchAddress("PrimaryVertex.fCovYZ", &PrimaryVertex_fCovYZ, &b_PrimaryVertex_fCovYZ);
   fChain->SetBranchAddress("PrimaryVertex.fCovZZ", &PrimaryVertex_fCovZZ, &b_PrimaryVertex_fCovZZ);
   fChain->SetBranchAddress("PrimaryVertex.fSNR[3]", PrimaryVertex_fSNR, &b_PrimaryVertex_fSNR);
   fChain->SetBranchAddress("PrimaryVertex.fChi2", &PrimaryVertex_fChi2, &b_PrimaryVertex_fChi2);
   fChain->SetBranchAddress("PrimaryVertex.fID", &PrimaryVertex_fID, &b_PrimaryVertex_fID);
   fChain->SetBranchAddress("PrimaryVertex.fBCID", &PrimaryVertex_fBCID, &b_PrimaryVertex_fBCID);
   fChain->SetBranchAddress("AliMultiplicity.AliVMultiplicity.fUniqueID", &AliMultiplicity_AliVMultiplicity_fUniqueID, &b_AliMultiplicity_AliVMultiplicity_fUniqueID);
   fChain->SetBranchAddress("AliMultiplicity.AliVMultiplicity.fBits", &AliMultiplicity_AliVMultiplicity_fBits, &b_AliMultiplicity_AliVMultiplicity_fBits);
   fChain->SetBranchAddress("AliMultiplicity.AliVMultiplicity.fName", &AliMultiplicity_AliVMultiplicity_fName, &b_AliMultiplicity_AliVMultiplicity_fName);
   fChain->SetBranchAddress("AliMultiplicity.AliVMultiplicity.fTitle", &AliMultiplicity_AliVMultiplicity_fTitle, &b_AliMultiplicity_AliVMultiplicity_fTitle);
   fChain->SetBranchAddress("AliMultiplicity.fNtracks", &AliMultiplicity_fNtracks, &b_AliMultiplicity_fNtracks);
   fChain->SetBranchAddress("AliMultiplicity.fNsingle", &AliMultiplicity_fNsingle, &b_AliMultiplicity_fNsingle);
   fChain->SetBranchAddress("AliMultiplicity.fNsingleSPD2", &AliMultiplicity_fNsingleSPD2, &b_AliMultiplicity_fNsingleSPD2);
   fChain->SetBranchAddress("AliMultiplicity.fDPhiWindow2", &AliMultiplicity_fDPhiWindow2, &b_AliMultiplicity_fDPhiWindow2);
   fChain->SetBranchAddress("AliMultiplicity.fDThetaWindow2", &AliMultiplicity_fDThetaWindow2, &b_AliMultiplicity_fDThetaWindow2);
   fChain->SetBranchAddress("AliMultiplicity.fDPhiShift", &AliMultiplicity_fDPhiShift, &b_AliMultiplicity_fDPhiShift);
   fChain->SetBranchAddress("AliMultiplicity.fNStdDev", &AliMultiplicity_fNStdDev, &b_AliMultiplicity_fNStdDev);
   fChain->SetBranchAddress("AliMultiplicity.fLabels", AliMultiplicity_fLabels, &b_AliMultiplicity_fLabels);
   fChain->SetBranchAddress("AliMultiplicity.fLabelsL2", AliMultiplicity_fLabelsL2, &b_AliMultiplicity_fLabelsL2);
   fChain->SetBranchAddress("AliMultiplicity.fUsedClusS", AliMultiplicity_fUsedClusS, &b_AliMultiplicity_fUsedClusS);
   fChain->SetBranchAddress("AliMultiplicity.fUsedClusT", AliMultiplicity_fUsedClusT, &b_AliMultiplicity_fUsedClusT);
   fChain->SetBranchAddress("AliMultiplicity.fTh", AliMultiplicity_fTh, &b_AliMultiplicity_fTh);
   fChain->SetBranchAddress("AliMultiplicity.fPhi", AliMultiplicity_fPhi, &b_AliMultiplicity_fPhi);
   fChain->SetBranchAddress("AliMultiplicity.fDeltTh", AliMultiplicity_fDeltTh, &b_AliMultiplicity_fDeltTh);
   fChain->SetBranchAddress("AliMultiplicity.fDeltPhi", AliMultiplicity_fDeltPhi, &b_AliMultiplicity_fDeltPhi);
   fChain->SetBranchAddress("AliMultiplicity.fThsingle", AliMultiplicity_fThsingle, &b_AliMultiplicity_fThsingle);
   fChain->SetBranchAddress("AliMultiplicity.fPhisingle", AliMultiplicity_fPhisingle, &b_AliMultiplicity_fPhisingle);
   fChain->SetBranchAddress("AliMultiplicity.fLabelssingle", AliMultiplicity_fLabelssingle, &b_AliMultiplicity_fLabelssingle);
   fChain->SetBranchAddress("AliMultiplicity.fFiredChips[2]", AliMultiplicity_fFiredChips, &b_AliMultiplicity_fFiredChips);
   fChain->SetBranchAddress("AliMultiplicity.fITSClusters[6]", AliMultiplicity_fITSClusters, &b_AliMultiplicity_fITSClusters);
   fChain->SetBranchAddress("AliMultiplicity.fFastOrFiredChips.fUniqueID", &AliMultiplicity_fFastOrFiredChips_fUniqueID, &b_AliMultiplicity_fFastOrFiredChips_fUniqueID);
   fChain->SetBranchAddress("AliMultiplicity.fFastOrFiredChips.fBits", &AliMultiplicity_fFastOrFiredChips_fBits, &b_AliMultiplicity_fFastOrFiredChips_fBits);
   fChain->SetBranchAddress("AliMultiplicity.fFastOrFiredChips.fNbits", &AliMultiplicity_fFastOrFiredChips_fNbits, &b_AliMultiplicity_fFastOrFiredChips_fNbits);
   fChain->SetBranchAddress("AliMultiplicity.fFastOrFiredChips.fNbytes", &AliMultiplicity_fFastOrFiredChips_fNbytes, &b_AliMultiplicity_fFastOrFiredChips_fNbytes);
   fChain->SetBranchAddress("AliMultiplicity.fFastOrFiredChips.fAllBits", &AliMultiplicity_fFastOrFiredChips_fAllBits, &b_AliMultiplicity_fFastOrFiredChips_fAllBits);
   fChain->SetBranchAddress("AliMultiplicity.fClusterFiredChips.fUniqueID", &AliMultiplicity_fClusterFiredChips_fUniqueID, &b_AliMultiplicity_fClusterFiredChips_fUniqueID);
   fChain->SetBranchAddress("AliMultiplicity.fClusterFiredChips.fBits", &AliMultiplicity_fClusterFiredChips_fBits, &b_AliMultiplicity_fClusterFiredChips_fBits);
   fChain->SetBranchAddress("AliMultiplicity.fClusterFiredChips.fNbits", &AliMultiplicity_fClusterFiredChips_fNbits, &b_AliMultiplicity_fClusterFiredChips_fNbits);
   fChain->SetBranchAddress("AliMultiplicity.fClusterFiredChips.fNbytes", &AliMultiplicity_fClusterFiredChips_fNbytes, &b_AliMultiplicity_fClusterFiredChips_fNbytes);
   fChain->SetBranchAddress("AliMultiplicity.fClusterFiredChips.fAllBits", &AliMultiplicity_fClusterFiredChips_fAllBits, &b_AliMultiplicity_fClusterFiredChips_fAllBits);
   fChain->SetBranchAddress("PHOSTrigger.AliVCaloTrigger.fUniqueID", &PHOSTrigger_AliVCaloTrigger_fUniqueID, &b_PHOSTrigger_AliVCaloTrigger_fUniqueID);
   fChain->SetBranchAddress("PHOSTrigger.AliVCaloTrigger.fBits", &PHOSTrigger_AliVCaloTrigger_fBits, &b_PHOSTrigger_AliVCaloTrigger_fBits);
   fChain->SetBranchAddress("PHOSTrigger.AliVCaloTrigger.fName", &PHOSTrigger_AliVCaloTrigger_fName, &b_PHOSTrigger_AliVCaloTrigger_fName);
   fChain->SetBranchAddress("PHOSTrigger.AliVCaloTrigger.fTitle", &PHOSTrigger_AliVCaloTrigger_fTitle, &b_PHOSTrigger_AliVCaloTrigger_fTitle);
   fChain->SetBranchAddress("PHOSTrigger.fNEntries", &PHOSTrigger_fNEntries, &b_PHOSTrigger_fNEntries);
   fChain->SetBranchAddress("PHOSTrigger.fCurrent", &PHOSTrigger_fCurrent, &b_PHOSTrigger_fCurrent);
   fChain->SetBranchAddress("PHOSTrigger.fColumn", &PHOSTrigger_fColumn, &b_PHOSTrigger_fColumn);
   fChain->SetBranchAddress("PHOSTrigger.fRow", &PHOSTrigger_fRow, &b_PHOSTrigger_fRow);
   fChain->SetBranchAddress("PHOSTrigger.fAmplitude", &PHOSTrigger_fAmplitude, &b_PHOSTrigger_fAmplitude);
   fChain->SetBranchAddress("PHOSTrigger.fTime", &PHOSTrigger_fTime, &b_PHOSTrigger_fTime);
   fChain->SetBranchAddress("PHOSTrigger.fNL0Times", &PHOSTrigger_fNL0Times, &b_PHOSTrigger_fNL0Times);
   fChain->SetBranchAddress("PHOSTrigger.fL1TimeSum", &PHOSTrigger_fL1TimeSum, &b_PHOSTrigger_fL1TimeSum);
   fChain->SetBranchAddress("PHOSTrigger.fTriggerBits", &PHOSTrigger_fTriggerBits, &b_PHOSTrigger_fTriggerBits);
   fChain->SetBranchAddress("PHOSTrigger.fL1Threshold[4]", PHOSTrigger_fL1Threshold, &b_PHOSTrigger_fL1Threshold);
   fChain->SetBranchAddress("PHOSTrigger.fL1V0[2]", PHOSTrigger_fL1V0, &b_PHOSTrigger_fL1V0);
   fChain->SetBranchAddress("PHOSTrigger.fL1FrameMask", &PHOSTrigger_fL1FrameMask, &b_PHOSTrigger_fL1FrameMask);
   fChain->SetBranchAddress("PHOSTrigger.fL1DCALThreshold[4]", PHOSTrigger_fL1DCALThreshold, &b_PHOSTrigger_fL1DCALThreshold);
   fChain->SetBranchAddress("PHOSTrigger.fL1SubRegion", &PHOSTrigger_fL1SubRegion, &b_PHOSTrigger_fL1SubRegion);
   fChain->SetBranchAddress("PHOSTrigger.fL1DCALFrameMask", &PHOSTrigger_fL1DCALFrameMask, &b_PHOSTrigger_fL1DCALFrameMask);
   fChain->SetBranchAddress("PHOSTrigger.fMedian[2]", PHOSTrigger_fMedian, &b_PHOSTrigger_fMedian);
   fChain->SetBranchAddress("PHOSTrigger.fTriggerBitWord", &PHOSTrigger_fTriggerBitWord, &b_PHOSTrigger_fTriggerBitWord);
   fChain->SetBranchAddress("PHOSTrigger.fL1DCALV0[2]", PHOSTrigger_fL1DCALV0, &b_PHOSTrigger_fL1DCALV0);
   fChain->SetBranchAddress("EMCALTrigger.AliVCaloTrigger.fUniqueID", &EMCALTrigger_AliVCaloTrigger_fUniqueID, &b_EMCALTrigger_AliVCaloTrigger_fUniqueID);
   fChain->SetBranchAddress("EMCALTrigger.AliVCaloTrigger.fBits", &EMCALTrigger_AliVCaloTrigger_fBits, &b_EMCALTrigger_AliVCaloTrigger_fBits);
   fChain->SetBranchAddress("EMCALTrigger.AliVCaloTrigger.fName", &EMCALTrigger_AliVCaloTrigger_fName, &b_EMCALTrigger_AliVCaloTrigger_fName);
   fChain->SetBranchAddress("EMCALTrigger.AliVCaloTrigger.fTitle", &EMCALTrigger_AliVCaloTrigger_fTitle, &b_EMCALTrigger_AliVCaloTrigger_fTitle);
   fChain->SetBranchAddress("EMCALTrigger.fNEntries", &EMCALTrigger_fNEntries, &b_EMCALTrigger_fNEntries);
   fChain->SetBranchAddress("EMCALTrigger.fCurrent", &EMCALTrigger_fCurrent, &b_EMCALTrigger_fCurrent);
   fChain->SetBranchAddress("EMCALTrigger.fColumn", EMCALTrigger_fColumn, &b_EMCALTrigger_fColumn);
   fChain->SetBranchAddress("EMCALTrigger.fRow", EMCALTrigger_fRow, &b_EMCALTrigger_fRow);
   fChain->SetBranchAddress("EMCALTrigger.fAmplitude", EMCALTrigger_fAmplitude, &b_EMCALTrigger_fAmplitude);
   fChain->SetBranchAddress("EMCALTrigger.fTime", EMCALTrigger_fTime, &b_EMCALTrigger_fTime);
   fChain->SetBranchAddress("EMCALTrigger.fNL0Times", EMCALTrigger_fNL0Times, &b_EMCALTrigger_fNL0Times);
   fChain->SetBranchAddress("EMCALTrigger.fL1TimeSum", EMCALTrigger_fL1TimeSum, &b_EMCALTrigger_fL1TimeSum);
   fChain->SetBranchAddress("EMCALTrigger.fTriggerBits", EMCALTrigger_fTriggerBits, &b_EMCALTrigger_fTriggerBits);
   fChain->SetBranchAddress("EMCALTrigger.fL1Threshold[4]", EMCALTrigger_fL1Threshold, &b_EMCALTrigger_fL1Threshold);
   fChain->SetBranchAddress("EMCALTrigger.fL1V0[2]", EMCALTrigger_fL1V0, &b_EMCALTrigger_fL1V0);
   fChain->SetBranchAddress("EMCALTrigger.fL1FrameMask", &EMCALTrigger_fL1FrameMask, &b_EMCALTrigger_fL1FrameMask);
   fChain->SetBranchAddress("EMCALTrigger.fL1DCALThreshold[4]", EMCALTrigger_fL1DCALThreshold, &b_EMCALTrigger_fL1DCALThreshold);
   fChain->SetBranchAddress("EMCALTrigger.fL1SubRegion", EMCALTrigger_fL1SubRegion, &b_EMCALTrigger_fL1SubRegion);
   fChain->SetBranchAddress("EMCALTrigger.fL1DCALFrameMask", &EMCALTrigger_fL1DCALFrameMask, &b_EMCALTrigger_fL1DCALFrameMask);
   fChain->SetBranchAddress("EMCALTrigger.fMedian[2]", EMCALTrigger_fMedian, &b_EMCALTrigger_fMedian);
   fChain->SetBranchAddress("EMCALTrigger.fTriggerBitWord", &EMCALTrigger_fTriggerBitWord, &b_EMCALTrigger_fTriggerBitWord);
   fChain->SetBranchAddress("EMCALTrigger.fL1DCALV0[2]", EMCALTrigger_fL1DCALV0, &b_EMCALTrigger_fL1DCALV0);
   fChain->SetBranchAddress("SPDPileupVertices", &SPDPileupVertices_, &b_SPDPileupVertices_);
   fChain->SetBranchAddress("SPDPileupVertices.fUniqueID", &SPDPileupVertices_fUniqueID, &b_SPDPileupVertices_fUniqueID);
   fChain->SetBranchAddress("SPDPileupVertices.fBits", &SPDPileupVertices_fBits, &b_SPDPileupVertices_fBits);
   fChain->SetBranchAddress("SPDPileupVertices.fName", &SPDPileupVertices_fName, &b_SPDPileupVertices_fName);
   fChain->SetBranchAddress("SPDPileupVertices.fTitle", &SPDPileupVertices_fTitle, &b_SPDPileupVertices_fTitle);
   fChain->SetBranchAddress("SPDPileupVertices.fPosition[3]", &SPDPileupVertices_fPosition, &b_SPDPileupVertices_fPosition);
   fChain->SetBranchAddress("SPDPileupVertices.fSigma", &SPDPileupVertices_fSigma, &b_SPDPileupVertices_fSigma);
   fChain->SetBranchAddress("SPDPileupVertices.fNContributors", &SPDPileupVertices_fNContributors, &b_SPDPileupVertices_fNContributors);
   fChain->SetBranchAddress("SPDPileupVertices.fNIndices", &SPDPileupVertices_fNIndices, &b_SPDPileupVertices_fNIndices);
   fChain->SetBranchAddress("SPDPileupVertices.fIndices", &SPDPileupVertices_fIndices, &b_SPDPileupVertices_fIndices);
   fChain->SetBranchAddress("SPDPileupVertices.fCovXX", &SPDPileupVertices_fCovXX, &b_SPDPileupVertices_fCovXX);
   fChain->SetBranchAddress("SPDPileupVertices.fCovXY", &SPDPileupVertices_fCovXY, &b_SPDPileupVertices_fCovXY);
   fChain->SetBranchAddress("SPDPileupVertices.fCovYY", &SPDPileupVertices_fCovYY, &b_SPDPileupVertices_fCovYY);
   fChain->SetBranchAddress("SPDPileupVertices.fCovXZ", &SPDPileupVertices_fCovXZ, &b_SPDPileupVertices_fCovXZ);
   fChain->SetBranchAddress("SPDPileupVertices.fCovYZ", &SPDPileupVertices_fCovYZ, &b_SPDPileupVertices_fCovYZ);
   fChain->SetBranchAddress("SPDPileupVertices.fCovZZ", &SPDPileupVertices_fCovZZ, &b_SPDPileupVertices_fCovZZ);
   fChain->SetBranchAddress("SPDPileupVertices.fSNR[3]", &SPDPileupVertices_fSNR, &b_SPDPileupVertices_fSNR);
   fChain->SetBranchAddress("SPDPileupVertices.fChi2", &SPDPileupVertices_fChi2, &b_SPDPileupVertices_fChi2);
   fChain->SetBranchAddress("SPDPileupVertices.fID", &SPDPileupVertices_fID, &b_SPDPileupVertices_fID);
   fChain->SetBranchAddress("SPDPileupVertices.fBCID", &SPDPileupVertices_fBCID, &b_SPDPileupVertices_fBCID);
   fChain->SetBranchAddress("TrkPileupVertices", &TrkPileupVertices_, &b_TrkPileupVertices_);
   fChain->SetBranchAddress("TrkPileupVertices.fUniqueID", &TrkPileupVertices_fUniqueID, &b_TrkPileupVertices_fUniqueID);
   fChain->SetBranchAddress("TrkPileupVertices.fBits", &TrkPileupVertices_fBits, &b_TrkPileupVertices_fBits);
   fChain->SetBranchAddress("TrkPileupVertices.fName", &TrkPileupVertices_fName, &b_TrkPileupVertices_fName);
   fChain->SetBranchAddress("TrkPileupVertices.fTitle", &TrkPileupVertices_fTitle, &b_TrkPileupVertices_fTitle);
   fChain->SetBranchAddress("TrkPileupVertices.fPosition[3]", &TrkPileupVertices_fPosition, &b_TrkPileupVertices_fPosition);
   fChain->SetBranchAddress("TrkPileupVertices.fSigma", &TrkPileupVertices_fSigma, &b_TrkPileupVertices_fSigma);
   fChain->SetBranchAddress("TrkPileupVertices.fNContributors", &TrkPileupVertices_fNContributors, &b_TrkPileupVertices_fNContributors);
   fChain->SetBranchAddress("TrkPileupVertices.fNIndices", &TrkPileupVertices_fNIndices, &b_TrkPileupVertices_fNIndices);
   fChain->SetBranchAddress("TrkPileupVertices.fIndices", &TrkPileupVertices_fIndices, &b_TrkPileupVertices_fIndices);
   fChain->SetBranchAddress("TrkPileupVertices.fCovXX", &TrkPileupVertices_fCovXX, &b_TrkPileupVertices_fCovXX);
   fChain->SetBranchAddress("TrkPileupVertices.fCovXY", &TrkPileupVertices_fCovXY, &b_TrkPileupVertices_fCovXY);
   fChain->SetBranchAddress("TrkPileupVertices.fCovYY", &TrkPileupVertices_fCovYY, &b_TrkPileupVertices_fCovYY);
   fChain->SetBranchAddress("TrkPileupVertices.fCovXZ", &TrkPileupVertices_fCovXZ, &b_TrkPileupVertices_fCovXZ);
   fChain->SetBranchAddress("TrkPileupVertices.fCovYZ", &TrkPileupVertices_fCovYZ, &b_TrkPileupVertices_fCovYZ);
   fChain->SetBranchAddress("TrkPileupVertices.fCovZZ", &TrkPileupVertices_fCovZZ, &b_TrkPileupVertices_fCovZZ);
   fChain->SetBranchAddress("TrkPileupVertices.fSNR[3]", &TrkPileupVertices_fSNR, &b_TrkPileupVertices_fSNR);
   fChain->SetBranchAddress("TrkPileupVertices.fChi2", &TrkPileupVertices_fChi2, &b_TrkPileupVertices_fChi2);
   fChain->SetBranchAddress("TrkPileupVertices.fID", &TrkPileupVertices_fID, &b_TrkPileupVertices_fID);
   fChain->SetBranchAddress("TrkPileupVertices.fBCID", &TrkPileupVertices_fBCID, &b_TrkPileupVertices_fBCID);
   fChain->SetBranchAddress("Tracks", &Tracks_, &b_Tracks_);
   fChain->SetBranchAddress("Tracks.fUniqueID", Tracks_fUniqueID, &b_Tracks_fUniqueID);
   fChain->SetBranchAddress("Tracks.fBits", Tracks_fBits, &b_Tracks_fBits);
   fChain->SetBranchAddress("Tracks.fX", Tracks_fX, &b_Tracks_fX);
   fChain->SetBranchAddress("Tracks.fAlpha", Tracks_fAlpha, &b_Tracks_fAlpha);
   fChain->SetBranchAddress("Tracks.fP[5]", Tracks_fP, &b_Tracks_fP);
   fChain->SetBranchAddress("Tracks.fC[15]", Tracks_fC, &b_Tracks_fC);
   fChain->SetBranchAddress("Tracks.fTPCFitMap.fUniqueID", Tracks_fTPCFitMap_fUniqueID, &b_Tracks_fTPCFitMap_fUniqueID);
   fChain->SetBranchAddress("Tracks.fTPCFitMap.fBits", Tracks_fTPCFitMap_fBits, &b_Tracks_fTPCFitMap_fBits);
   fChain->SetBranchAddress("Tracks.fTPCFitMap.fNbits", Tracks_fTPCFitMap_fNbits, &b_Tracks_fTPCFitMap_fNbits);
   fChain->SetBranchAddress("Tracks.fTPCFitMap.fNbytes", Tracks_fTPCFitMap_fNbytes, &b_Tracks_fTPCFitMap_fNbytes);
   fChain->SetBranchAddress("Tracks.fTPCFitMap.fAllBits", Tracks_fTPCFitMap_fAllBits, &b_Tracks_fTPCFitMap_fAllBits);
   fChain->SetBranchAddress("Tracks.fTPCClusterMap.fUniqueID", Tracks_fTPCClusterMap_fUniqueID, &b_Tracks_fTPCClusterMap_fUniqueID);
   fChain->SetBranchAddress("Tracks.fTPCClusterMap.fBits", Tracks_fTPCClusterMap_fBits, &b_Tracks_fTPCClusterMap_fBits);
   fChain->SetBranchAddress("Tracks.fTPCClusterMap.fNbits", Tracks_fTPCClusterMap_fNbits, &b_Tracks_fTPCClusterMap_fNbits);
   fChain->SetBranchAddress("Tracks.fTPCClusterMap.fNbytes", Tracks_fTPCClusterMap_fNbytes, &b_Tracks_fTPCClusterMap_fNbytes);
   fChain->SetBranchAddress("Tracks.fTPCClusterMap.fAllBits", Tracks_fTPCClusterMap_fAllBits, &b_Tracks_fTPCClusterMap_fAllBits);
   fChain->SetBranchAddress("Tracks.fTPCSharedMap.fUniqueID", Tracks_fTPCSharedMap_fUniqueID, &b_Tracks_fTPCSharedMap_fUniqueID);
   fChain->SetBranchAddress("Tracks.fTPCSharedMap.fBits", Tracks_fTPCSharedMap_fBits, &b_Tracks_fTPCSharedMap_fBits);
   fChain->SetBranchAddress("Tracks.fTPCSharedMap.fNbits", Tracks_fTPCSharedMap_fNbits, &b_Tracks_fTPCSharedMap_fNbits);
   fChain->SetBranchAddress("Tracks.fTPCSharedMap.fNbytes", Tracks_fTPCSharedMap_fNbytes, &b_Tracks_fTPCSharedMap_fNbytes);
   fChain->SetBranchAddress("Tracks.fTPCSharedMap.fAllBits", Tracks_fTPCSharedMap_fAllBits, &b_Tracks_fTPCSharedMap_fAllBits);
   fChain->SetBranchAddress("Tracks.fFrTrackID", Tracks_fFrTrackID, &b_Tracks_fFrTrackID);
   fChain->SetBranchAddress("Tracks.fFlags", Tracks_fFlags, &b_Tracks_fFlags);
   fChain->SetBranchAddress("Tracks.fID", Tracks_fID, &b_Tracks_fID);
   fChain->SetBranchAddress("Tracks.fLabel", Tracks_fLabel, &b_Tracks_fLabel);
   fChain->SetBranchAddress("Tracks.fITSLabel", Tracks_fITSLabel, &b_Tracks_fITSLabel);
   fChain->SetBranchAddress("Tracks.fITSModule[12]", Tracks_fITSModule, &b_Tracks_fITSModule);
   fChain->SetBranchAddress("Tracks.fTPCLabel", Tracks_fTPCLabel, &b_Tracks_fTPCLabel);
   fChain->SetBranchAddress("Tracks.fTRDLabel", Tracks_fTRDLabel, &b_Tracks_fTRDLabel);
   fChain->SetBranchAddress("Tracks.fTOFindex", Tracks_fTOFindex, &b_Tracks_fTOFindex);
   fChain->SetBranchAddress("Tracks.fHMPIDqn", Tracks_fHMPIDqn, &b_Tracks_fHMPIDqn);
   fChain->SetBranchAddress("Tracks.fHMPIDcluIdx", Tracks_fHMPIDcluIdx, &b_Tracks_fHMPIDcluIdx);
   fChain->SetBranchAddress("Tracks.fCaloIndex", Tracks_fCaloIndex, &b_Tracks_fCaloIndex);
   fChain->SetBranchAddress("Tracks.fKinkIndexes[3]", Tracks_fKinkIndexes, &b_Tracks_fKinkIndexes);
   fChain->SetBranchAddress("Tracks.fV0Indexes[3]", Tracks_fV0Indexes, &b_Tracks_fV0Indexes);
   fChain->SetBranchAddress("Tracks.fHMPIDtrkTheta", Tracks_fHMPIDtrkTheta, &b_Tracks_fHMPIDtrkTheta);
   fChain->SetBranchAddress("Tracks.fHMPIDtrkPhi", Tracks_fHMPIDtrkPhi, &b_Tracks_fHMPIDtrkPhi);
   fChain->SetBranchAddress("Tracks.fHMPIDsignal", Tracks_fHMPIDsignal, &b_Tracks_fHMPIDsignal);
   fChain->SetBranchAddress("Tracks.fdTPC", Tracks_fdTPC, &b_Tracks_fdTPC);
   fChain->SetBranchAddress("Tracks.fzTPC", Tracks_fzTPC, &b_Tracks_fzTPC);
   fChain->SetBranchAddress("Tracks.fCddTPC", Tracks_fCddTPC, &b_Tracks_fCddTPC);
   fChain->SetBranchAddress("Tracks.fCdzTPC", Tracks_fCdzTPC, &b_Tracks_fCdzTPC);
   fChain->SetBranchAddress("Tracks.fCzzTPC", Tracks_fCzzTPC, &b_Tracks_fCzzTPC);
   fChain->SetBranchAddress("Tracks.fCchi2TPC", Tracks_fCchi2TPC, &b_Tracks_fCchi2TPC);
   fChain->SetBranchAddress("Tracks.fD", Tracks_fD, &b_Tracks_fD);
   fChain->SetBranchAddress("Tracks.fZ", Tracks_fZ, &b_Tracks_fZ);
   fChain->SetBranchAddress("Tracks.fCdd", Tracks_fCdd, &b_Tracks_fCdd);
   fChain->SetBranchAddress("Tracks.fCdz", Tracks_fCdz, &b_Tracks_fCdz);
   fChain->SetBranchAddress("Tracks.fCzz", Tracks_fCzz, &b_Tracks_fCzz);
   fChain->SetBranchAddress("Tracks.fCchi2", Tracks_fCchi2, &b_Tracks_fCchi2);
   fChain->SetBranchAddress("Tracks.fITSchi2Std[3]", Tracks_fITSchi2Std, &b_Tracks_fITSchi2Std);
   fChain->SetBranchAddress("Tracks.fITSchi2", Tracks_fITSchi2, &b_Tracks_fITSchi2);
   fChain->SetBranchAddress("Tracks.fTPCchi2", Tracks_fTPCchi2, &b_Tracks_fTPCchi2);
   fChain->SetBranchAddress("Tracks.fTPCchi2Iter1", Tracks_fTPCchi2Iter1, &b_Tracks_fTPCchi2Iter1);
   fChain->SetBranchAddress("Tracks.fTRDchi2", Tracks_fTRDchi2, &b_Tracks_fTRDchi2);
   fChain->SetBranchAddress("Tracks.fTOFchi2", Tracks_fTOFchi2, &b_Tracks_fTOFchi2);
   fChain->SetBranchAddress("Tracks.fHMPIDchi2", Tracks_fHMPIDchi2, &b_Tracks_fHMPIDchi2);
   fChain->SetBranchAddress("Tracks.fGlobalChi2", Tracks_fGlobalChi2, &b_Tracks_fGlobalChi2);
   fChain->SetBranchAddress("Tracks.fITSsignal", Tracks_fITSsignal, &b_Tracks_fITSsignal);
   fChain->SetBranchAddress("Tracks.fITSdEdxSamples[4]", Tracks_fITSdEdxSamples, &b_Tracks_fITSdEdxSamples);
   fChain->SetBranchAddress("Tracks.fTPCsignal", Tracks_fTPCsignal, &b_Tracks_fTPCsignal);
   fChain->SetBranchAddress("Tracks.fTPCsignalS", Tracks_fTPCsignalS, &b_Tracks_fTPCsignalS);
   fChain->SetBranchAddress("Tracks.fTPCPoints[4]", Tracks_fTPCPoints, &b_Tracks_fTPCPoints);
   fChain->SetBranchAddress("Tracks.fTRDsignal", Tracks_fTRDsignal, &b_Tracks_fTRDsignal);
   fChain->SetBranchAddress("Tracks.fTRDQuality", Tracks_fTRDQuality, &b_Tracks_fTRDQuality);
   fChain->SetBranchAddress("Tracks.fTRDBudget", Tracks_fTRDBudget, &b_Tracks_fTRDBudget);
   fChain->SetBranchAddress("Tracks.fCaloDx", Tracks_fCaloDx, &b_Tracks_fCaloDx);
   fChain->SetBranchAddress("Tracks.fCaloDz", Tracks_fCaloDz, &b_Tracks_fCaloDz);
   fChain->SetBranchAddress("Tracks.fHMPIDtrkX", Tracks_fHMPIDtrkX, &b_Tracks_fHMPIDtrkX);
   fChain->SetBranchAddress("Tracks.fHMPIDtrkY", Tracks_fHMPIDtrkY, &b_Tracks_fHMPIDtrkY);
   fChain->SetBranchAddress("Tracks.fHMPIDmipX", Tracks_fHMPIDmipX, &b_Tracks_fHMPIDmipX);
   fChain->SetBranchAddress("Tracks.fHMPIDmipY", Tracks_fHMPIDmipY, &b_Tracks_fHMPIDmipY);
   fChain->SetBranchAddress("Tracks.fTPCncls", Tracks_fTPCncls, &b_Tracks_fTPCncls);
   fChain->SetBranchAddress("Tracks.fTPCnclsF", Tracks_fTPCnclsF, &b_Tracks_fTPCnclsF);
   fChain->SetBranchAddress("Tracks.fTPCsignalN", Tracks_fTPCsignalN, &b_Tracks_fTPCsignalN);
   fChain->SetBranchAddress("Tracks.fTPCnclsIter1", Tracks_fTPCnclsIter1, &b_Tracks_fTPCnclsIter1);
   fChain->SetBranchAddress("Tracks.fTPCnclsFIter1", Tracks_fTPCnclsFIter1, &b_Tracks_fTPCnclsFIter1);
   fChain->SetBranchAddress("Tracks.fITSncls", Tracks_fITSncls, &b_Tracks_fITSncls);
   fChain->SetBranchAddress("Tracks.fITSClusterMap", Tracks_fITSClusterMap, &b_Tracks_fITSClusterMap);
   fChain->SetBranchAddress("Tracks.fITSSharedMap", Tracks_fITSSharedMap, &b_Tracks_fITSSharedMap);
   fChain->SetBranchAddress("Tracks.fTRDncls", Tracks_fTRDncls, &b_Tracks_fTRDncls);
   fChain->SetBranchAddress("Tracks.fTRDncls0", Tracks_fTRDncls0, &b_Tracks_fTRDncls0);
   fChain->SetBranchAddress("Tracks.fTRDntracklets", Tracks_fTRDntracklets, &b_Tracks_fTRDntracklets);
   fChain->SetBranchAddress("Tracks.fTRDNchamberdEdx", Tracks_fTRDNchamberdEdx, &b_Tracks_fTRDNchamberdEdx);
   fChain->SetBranchAddress("Tracks.fTRDNclusterdEdx", Tracks_fTRDNclusterdEdx, &b_Tracks_fTRDNclusterdEdx);
   fChain->SetBranchAddress("Tracks.fTRDnSlices", Tracks_fTRDnSlices, &b_Tracks_fTRDnSlices);
   fChain->SetBranchAddress("Tracks.fTRDslices", Tracks_fTRDslices, &b_Tracks_fTRDslices);
   fChain->SetBranchAddress("Tracks.fTRDTimBin[6]", Tracks_fTRDTimBin, &b_Tracks_fTRDTimBin);
   fChain->SetBranchAddress("Tracks.fVertexID", Tracks_fVertexID, &b_Tracks_fVertexID);
   fChain->SetBranchAddress("Tracks.fPIDForTracking", Tracks_fPIDForTracking, &b_Tracks_fPIDForTracking);
   fChain->SetBranchAddress("Tracks.fTrackPhiOnEMCal", Tracks_fTrackPhiOnEMCal, &b_Tracks_fTrackPhiOnEMCal);
   fChain->SetBranchAddress("Tracks.fTrackEtaOnEMCal", Tracks_fTrackEtaOnEMCal, &b_Tracks_fTrackEtaOnEMCal);
   fChain->SetBranchAddress("Tracks.fTrackPtOnEMCal", Tracks_fTrackPtOnEMCal, &b_Tracks_fTrackPtOnEMCal);
   fChain->SetBranchAddress("Tracks.fNtofClusters", Tracks_fNtofClusters, &b_Tracks_fNtofClusters);
   fChain->SetBranchAddress("Tracks.fTOFcluster", Tracks_fTOFcluster, &b_Tracks_fTOFcluster);
   fChain->SetBranchAddress("MuonTracks", &MuonTracks_, &b_MuonTracks_);
   fChain->SetBranchAddress("MuonTracks.fUniqueID", MuonTracks_fUniqueID, &b_MuonTracks_fUniqueID);
   fChain->SetBranchAddress("MuonTracks.fBits", MuonTracks_fBits, &b_MuonTracks_fBits);
   fChain->SetBranchAddress("MuonTracks.fInverseBendingMomentum", MuonTracks_fInverseBendingMomentum, &b_MuonTracks_fInverseBendingMomentum);
   fChain->SetBranchAddress("MuonTracks.fThetaX", MuonTracks_fThetaX, &b_MuonTracks_fThetaX);
   fChain->SetBranchAddress("MuonTracks.fThetaY", MuonTracks_fThetaY, &b_MuonTracks_fThetaY);
   fChain->SetBranchAddress("MuonTracks.fZ", MuonTracks_fZ, &b_MuonTracks_fZ);
   fChain->SetBranchAddress("MuonTracks.fBendingCoor", MuonTracks_fBendingCoor, &b_MuonTracks_fBendingCoor);
   fChain->SetBranchAddress("MuonTracks.fNonBendingCoor", MuonTracks_fNonBendingCoor, &b_MuonTracks_fNonBendingCoor);
   fChain->SetBranchAddress("MuonTracks.fInverseBendingMomentumAtDCA", MuonTracks_fInverseBendingMomentumAtDCA, &b_MuonTracks_fInverseBendingMomentumAtDCA);
   fChain->SetBranchAddress("MuonTracks.fThetaXAtDCA", MuonTracks_fThetaXAtDCA, &b_MuonTracks_fThetaXAtDCA);
   fChain->SetBranchAddress("MuonTracks.fThetaYAtDCA", MuonTracks_fThetaYAtDCA, &b_MuonTracks_fThetaYAtDCA);
   fChain->SetBranchAddress("MuonTracks.fBendingCoorAtDCA", MuonTracks_fBendingCoorAtDCA, &b_MuonTracks_fBendingCoorAtDCA);
   fChain->SetBranchAddress("MuonTracks.fNonBendingCoorAtDCA", MuonTracks_fNonBendingCoorAtDCA, &b_MuonTracks_fNonBendingCoorAtDCA);
   fChain->SetBranchAddress("MuonTracks.fInverseBendingMomentumUncorrected", MuonTracks_fInverseBendingMomentumUncorrected, &b_MuonTracks_fInverseBendingMomentumUncorrected);
   fChain->SetBranchAddress("MuonTracks.fThetaXUncorrected", MuonTracks_fThetaXUncorrected, &b_MuonTracks_fThetaXUncorrected);
   fChain->SetBranchAddress("MuonTracks.fThetaYUncorrected", MuonTracks_fThetaYUncorrected, &b_MuonTracks_fThetaYUncorrected);
   fChain->SetBranchAddress("MuonTracks.fZUncorrected", MuonTracks_fZUncorrected, &b_MuonTracks_fZUncorrected);
   fChain->SetBranchAddress("MuonTracks.fBendingCoorUncorrected", MuonTracks_fBendingCoorUncorrected, &b_MuonTracks_fBendingCoorUncorrected);
   fChain->SetBranchAddress("MuonTracks.fNonBendingCoorUncorrected", MuonTracks_fNonBendingCoorUncorrected, &b_MuonTracks_fNonBendingCoorUncorrected);
   fChain->SetBranchAddress("MuonTracks.fCovariances[15]", MuonTracks_fCovariances, &b_MuonTracks_fCovariances);
   fChain->SetBranchAddress("MuonTracks.fRAtAbsorberEnd", MuonTracks_fRAtAbsorberEnd, &b_MuonTracks_fRAtAbsorberEnd);
   fChain->SetBranchAddress("MuonTracks.fChi2", MuonTracks_fChi2, &b_MuonTracks_fChi2);
   fChain->SetBranchAddress("MuonTracks.fChi2MatchTrigger", MuonTracks_fChi2MatchTrigger, &b_MuonTracks_fChi2MatchTrigger);
   fChain->SetBranchAddress("MuonTracks.fLocalTrigger", MuonTracks_fLocalTrigger, &b_MuonTracks_fLocalTrigger);
   fChain->SetBranchAddress("MuonTracks.fX1Pattern", MuonTracks_fX1Pattern, &b_MuonTracks_fX1Pattern);
   fChain->SetBranchAddress("MuonTracks.fY1Pattern", MuonTracks_fY1Pattern, &b_MuonTracks_fY1Pattern);
   fChain->SetBranchAddress("MuonTracks.fX2Pattern", MuonTracks_fX2Pattern, &b_MuonTracks_fX2Pattern);
   fChain->SetBranchAddress("MuonTracks.fY2Pattern", MuonTracks_fY2Pattern, &b_MuonTracks_fY2Pattern);
   fChain->SetBranchAddress("MuonTracks.fX3Pattern", MuonTracks_fX3Pattern, &b_MuonTracks_fX3Pattern);
   fChain->SetBranchAddress("MuonTracks.fY3Pattern", MuonTracks_fY3Pattern, &b_MuonTracks_fY3Pattern);
   fChain->SetBranchAddress("MuonTracks.fX4Pattern", MuonTracks_fX4Pattern, &b_MuonTracks_fX4Pattern);
   fChain->SetBranchAddress("MuonTracks.fY4Pattern", MuonTracks_fY4Pattern, &b_MuonTracks_fY4Pattern);
   fChain->SetBranchAddress("MuonTracks.fMuonClusterMap", MuonTracks_fMuonClusterMap, &b_MuonTracks_fMuonClusterMap);
   fChain->SetBranchAddress("MuonTracks.fHitsPatternInTrigCh", MuonTracks_fHitsPatternInTrigCh, &b_MuonTracks_fHitsPatternInTrigCh);
   fChain->SetBranchAddress("MuonTracks.fHitsPatternInTrigChTrk", MuonTracks_fHitsPatternInTrigChTrk, &b_MuonTracks_fHitsPatternInTrigChTrk);
   fChain->SetBranchAddress("MuonTracks.fNHit", MuonTracks_fNHit, &b_MuonTracks_fNHit);
   fChain->SetBranchAddress("MuonTracks.fLabel", MuonTracks_fLabel, &b_MuonTracks_fLabel);
   fChain->SetBranchAddress("MuonClusters", &MuonClusters_, &b_MuonClusters_);
   fChain->SetBranchAddress("MuonClusters.fUniqueID", MuonClusters_fUniqueID, &b_MuonClusters_fUniqueID);
   fChain->SetBranchAddress("MuonClusters.fBits", MuonClusters_fBits, &b_MuonClusters_fBits);
   fChain->SetBranchAddress("MuonClusters.fXYZ[3]", MuonClusters_fXYZ, &b_MuonClusters_fXYZ);
   fChain->SetBranchAddress("MuonClusters.fErrXY[2]", MuonClusters_fErrXY, &b_MuonClusters_fErrXY);
   fChain->SetBranchAddress("MuonClusters.fCharge", MuonClusters_fCharge, &b_MuonClusters_fCharge);
   fChain->SetBranchAddress("MuonClusters.fChi2", MuonClusters_fChi2, &b_MuonClusters_fChi2);
   fChain->SetBranchAddress("MuonClusters.fNPads", MuonClusters_fNPads, &b_MuonClusters_fNPads);
   fChain->SetBranchAddress("MuonClusters.fLabel", MuonClusters_fLabel, &b_MuonClusters_fLabel);
   fChain->SetBranchAddress("MuonPads", &MuonPads_, &b_MuonPads_);
   fChain->SetBranchAddress("MuonPads.fUniqueID", MuonPads_fUniqueID, &b_MuonPads_fUniqueID);
   fChain->SetBranchAddress("MuonPads.fBits", MuonPads_fBits, &b_MuonPads_fBits);
   fChain->SetBranchAddress("MuonPads.fADC", MuonPads_fADC, &b_MuonPads_fADC);
   fChain->SetBranchAddress("MuonPads.fCharge", MuonPads_fCharge, &b_MuonPads_fCharge);
   fChain->SetBranchAddress("MuonGlobalTracks", &MuonGlobalTracks_, &b_MuonGlobalTracks_);
   fChain->SetBranchAddress("MuonGlobalTracks.fUniqueID", &MuonGlobalTracks_fUniqueID, &b_MuonGlobalTracks_fUniqueID);
   fChain->SetBranchAddress("MuonGlobalTracks.fBits", &MuonGlobalTracks_fBits, &b_MuonGlobalTracks_fBits);
   fChain->SetBranchAddress("MuonGlobalTracks.fCharge", &MuonGlobalTracks_fCharge, &b_MuonGlobalTracks_fCharge);
   fChain->SetBranchAddress("MuonGlobalTracks.fMatchTrigger", &MuonGlobalTracks_fMatchTrigger, &b_MuonGlobalTracks_fMatchTrigger);
   fChain->SetBranchAddress("MuonGlobalTracks.fNMFTClusters", &MuonGlobalTracks_fNMFTClusters, &b_MuonGlobalTracks_fNMFTClusters);
   fChain->SetBranchAddress("MuonGlobalTracks.fNWrongMFTClustersMC", &MuonGlobalTracks_fNWrongMFTClustersMC, &b_MuonGlobalTracks_fNWrongMFTClustersMC);
   fChain->SetBranchAddress("MuonGlobalTracks.fMFTClusterPattern", &MuonGlobalTracks_fMFTClusterPattern, &b_MuonGlobalTracks_fMFTClusterPattern);
   fChain->SetBranchAddress("MuonGlobalTracks.fPx", &MuonGlobalTracks_fPx, &b_MuonGlobalTracks_fPx);
   fChain->SetBranchAddress("MuonGlobalTracks.fPy", &MuonGlobalTracks_fPy, &b_MuonGlobalTracks_fPy);
   fChain->SetBranchAddress("MuonGlobalTracks.fPz", &MuonGlobalTracks_fPz, &b_MuonGlobalTracks_fPz);
   fChain->SetBranchAddress("MuonGlobalTracks.fPt", &MuonGlobalTracks_fPt, &b_MuonGlobalTracks_fPt);
   fChain->SetBranchAddress("MuonGlobalTracks.fP", &MuonGlobalTracks_fP, &b_MuonGlobalTracks_fP);
   fChain->SetBranchAddress("MuonGlobalTracks.fEta", &MuonGlobalTracks_fEta, &b_MuonGlobalTracks_fEta);
   fChain->SetBranchAddress("MuonGlobalTracks.fRapidity", &MuonGlobalTracks_fRapidity, &b_MuonGlobalTracks_fRapidity);
   fChain->SetBranchAddress("MuonGlobalTracks.fFirstTrackingPointX", &MuonGlobalTracks_fFirstTrackingPointX, &b_MuonGlobalTracks_fFirstTrackingPointX);
   fChain->SetBranchAddress("MuonGlobalTracks.fFirstTrackingPointY", &MuonGlobalTracks_fFirstTrackingPointY, &b_MuonGlobalTracks_fFirstTrackingPointY);
   fChain->SetBranchAddress("MuonGlobalTracks.fFirstTrackingPointZ", &MuonGlobalTracks_fFirstTrackingPointZ, &b_MuonGlobalTracks_fFirstTrackingPointZ);
   fChain->SetBranchAddress("MuonGlobalTracks.fXAtVertex", &MuonGlobalTracks_fXAtVertex, &b_MuonGlobalTracks_fXAtVertex);
   fChain->SetBranchAddress("MuonGlobalTracks.fYAtVertex", &MuonGlobalTracks_fYAtVertex, &b_MuonGlobalTracks_fYAtVertex);
   fChain->SetBranchAddress("MuonGlobalTracks.fRAtAbsorberEnd", &MuonGlobalTracks_fRAtAbsorberEnd, &b_MuonGlobalTracks_fRAtAbsorberEnd);
   fChain->SetBranchAddress("MuonGlobalTracks.fChi2OverNdf", &MuonGlobalTracks_fChi2OverNdf, &b_MuonGlobalTracks_fChi2OverNdf);
   fChain->SetBranchAddress("MuonGlobalTracks.fChi2MatchTrigger", &MuonGlobalTracks_fChi2MatchTrigger, &b_MuonGlobalTracks_fChi2MatchTrigger);
   fChain->SetBranchAddress("MuonGlobalTracks.fLabel", &MuonGlobalTracks_fLabel, &b_MuonGlobalTracks_fLabel);
   fChain->SetBranchAddress("MuonGlobalTracks.fMuonClusterMap", &MuonGlobalTracks_fMuonClusterMap, &b_MuonGlobalTracks_fMuonClusterMap);
   fChain->SetBranchAddress("MuonGlobalTracks.fHitsPatternInTrigCh", &MuonGlobalTracks_fHitsPatternInTrigCh, &b_MuonGlobalTracks_fHitsPatternInTrigCh);
   fChain->SetBranchAddress("MuonGlobalTracks.fHitsPatternInTrigChTrk", &MuonGlobalTracks_fHitsPatternInTrigChTrk, &b_MuonGlobalTracks_fHitsPatternInTrigChTrk);
   fChain->SetBranchAddress("MuonGlobalTracks.fLoCircuit", &MuonGlobalTracks_fLoCircuit, &b_MuonGlobalTracks_fLoCircuit);
   fChain->SetBranchAddress("MuonGlobalTracks.fIsConnected", &MuonGlobalTracks_fIsConnected, &b_MuonGlobalTracks_fIsConnected);
   fChain->SetBranchAddress("MuonGlobalTracks.fProdVertexXYZ[3]", &MuonGlobalTracks_fProdVertexXYZ, &b_MuonGlobalTracks_fProdVertexXYZ);
   fChain->SetBranchAddress("PmdTracks", &PmdTracks_, &b_PmdTracks_);
   fChain->SetBranchAddress("PmdTracks.fUniqueID", &PmdTracks_fUniqueID, &b_PmdTracks_fUniqueID);
   fChain->SetBranchAddress("PmdTracks.fBits", &PmdTracks_fBits, &b_PmdTracks_fBits);
   fChain->SetBranchAddress("PmdTracks.fX", &PmdTracks_fX, &b_PmdTracks_fX);
   fChain->SetBranchAddress("PmdTracks.fY", &PmdTracks_fY, &b_PmdTracks_fY);
   fChain->SetBranchAddress("PmdTracks.fZ", &PmdTracks_fZ, &b_PmdTracks_fZ);
   fChain->SetBranchAddress("PmdTracks.fCluADC", &PmdTracks_fCluADC, &b_PmdTracks_fCluADC);
   fChain->SetBranchAddress("PmdTracks.fCluPID", &PmdTracks_fCluPID, &b_PmdTracks_fCluPID);
   fChain->SetBranchAddress("PmdTracks.fDet", &PmdTracks_fDet, &b_PmdTracks_fDet);
   fChain->SetBranchAddress("PmdTracks.fNcell", &PmdTracks_fNcell, &b_PmdTracks_fNcell);
   fChain->SetBranchAddress("PmdTracks.fSmn", &PmdTracks_fSmn, &b_PmdTracks_fSmn);
   fChain->SetBranchAddress("PmdTracks.fTrackNo", &PmdTracks_fTrackNo, &b_PmdTracks_fTrackNo);
   fChain->SetBranchAddress("PmdTracks.fTrackPid", &PmdTracks_fTrackPid, &b_PmdTracks_fTrackPid);
   fChain->SetBranchAddress("PmdTracks.fClMatching", &PmdTracks_fClMatching, &b_PmdTracks_fClMatching);
   fChain->SetBranchAddress("PmdTracks.fSigX", &PmdTracks_fSigX, &b_PmdTracks_fSigX);
   fChain->SetBranchAddress("PmdTracks.fSigY", &PmdTracks_fSigY, &b_PmdTracks_fSigY);
   fChain->SetBranchAddress("AliESDTrdTrigger.TObject.fUniqueID", &AliESDTrdTrigger_TObject_fUniqueID, &b_AliESDTrdTrigger_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDTrdTrigger.TObject.fBits", &AliESDTrdTrigger_TObject_fBits, &b_AliESDTrdTrigger_TObject_fBits);
   fChain->SetBranchAddress("AliESDTrdTrigger.fFlags[18]", AliESDTrdTrigger_fFlags, &b_AliESDTrdTrigger_fFlags);
   fChain->SetBranchAddress("TrdTracks", &TrdTracks_, &b_TrdTracks_);
   fChain->SetBranchAddress("TrdTracks.fUniqueID", TrdTracks_fUniqueID, &b_TrdTracks_fUniqueID);
   fChain->SetBranchAddress("TrdTracks.fBits", TrdTracks_fBits, &b_TrdTracks_fBits);
   fChain->SetBranchAddress("TrdTracks.fSector", TrdTracks_fSector, &b_TrdTracks_fSector);
   fChain->SetBranchAddress("TrdTracks.fStack", TrdTracks_fStack, &b_TrdTracks_fStack);
   fChain->SetBranchAddress("TrdTracks.fA", TrdTracks_fA, &b_TrdTracks_fA);
   fChain->SetBranchAddress("TrdTracks.fB", TrdTracks_fB, &b_TrdTracks_fB);
   fChain->SetBranchAddress("TrdTracks.fC", TrdTracks_fC, &b_TrdTracks_fC);
   fChain->SetBranchAddress("TrdTracks.fY", TrdTracks_fY, &b_TrdTracks_fY);
   fChain->SetBranchAddress("TrdTracks.fPID", TrdTracks_fPID, &b_TrdTracks_fPID);
   fChain->SetBranchAddress("TrdTracks.fLayerMask", TrdTracks_fLayerMask, &b_TrdTracks_fLayerMask);
   fChain->SetBranchAddress("TrdTracks.fTrackletIndex[6]", TrdTracks_fTrackletIndex, &b_TrdTracks_fTrackletIndex);
   fChain->SetBranchAddress("TrdTracks.fFlags", TrdTracks_fFlags, &b_TrdTracks_fFlags);
   fChain->SetBranchAddress("TrdTracks.fFlagsTiming", TrdTracks_fFlagsTiming, &b_TrdTracks_fFlagsTiming);
   fChain->SetBranchAddress("TrdTracks.fReserved", TrdTracks_fReserved, &b_TrdTracks_fReserved);
   fChain->SetBranchAddress("TrdTracks.fTrackletRefs[6]", TrdTracks_fTrackletRefs, &b_TrdTracks_fTrackletRefs);
   fChain->SetBranchAddress("TrdTracks.fTrackMatch", TrdTracks_fTrackMatch, &b_TrdTracks_fTrackMatch);
   fChain->SetBranchAddress("TrdTracks.fLabel", TrdTracks_fLabel, &b_TrdTracks_fLabel);
   fChain->SetBranchAddress("TrdTracklets", &TrdTracklets_, &b_TrdTracklets_);
   fChain->SetBranchAddress("TrdTracklets.fUniqueID", TrdTracklets_fUniqueID, &b_TrdTracklets_fUniqueID);
   fChain->SetBranchAddress("TrdTracklets.fBits", TrdTracklets_fBits, &b_TrdTracklets_fBits);
   fChain->SetBranchAddress("TrdTracklets.fHCId", TrdTracklets_fHCId, &b_TrdTracklets_fHCId);
   fChain->SetBranchAddress("TrdTracklets.fTrackletWord", TrdTracklets_fTrackletWord, &b_TrdTracklets_fTrackletWord);
   fChain->SetBranchAddress("TrdTracklets.fLabel", TrdTracklets_fLabel, &b_TrdTracklets_fLabel);
   fChain->SetBranchAddress("V0s", &V0s_, &b_V0s_);
   fChain->SetBranchAddress("V0s.fUniqueID", V0s_fUniqueID, &b_V0s_fUniqueID);
   fChain->SetBranchAddress("V0s.fBits", V0s_fBits, &b_V0s_fBits);
   fChain->SetBranchAddress("V0s.fParamN.fUniqueID", V0s_fParamN_fUniqueID, &b_V0s_fParamN_fUniqueID);
   fChain->SetBranchAddress("V0s.fParamN.fBits", V0s_fParamN_fBits, &b_V0s_fParamN_fBits);
   fChain->SetBranchAddress("V0s.fParamN.fX", V0s_fParamN_fX, &b_V0s_fParamN_fX);
   fChain->SetBranchAddress("V0s.fParamN.fAlpha", V0s_fParamN_fAlpha, &b_V0s_fParamN_fAlpha);
   fChain->SetBranchAddress("V0s.fParamN.fP[5]", V0s_fParamN_fP, &b_V0s_fParamN_fP);
   fChain->SetBranchAddress("V0s.fParamN.fC[15]", V0s_fParamN_fC, &b_V0s_fParamN_fC);
   fChain->SetBranchAddress("V0s.fParamP.fUniqueID", V0s_fParamP_fUniqueID, &b_V0s_fParamP_fUniqueID);
   fChain->SetBranchAddress("V0s.fParamP.fBits", V0s_fParamP_fBits, &b_V0s_fParamP_fBits);
   fChain->SetBranchAddress("V0s.fParamP.fX", V0s_fParamP_fX, &b_V0s_fParamP_fX);
   fChain->SetBranchAddress("V0s.fParamP.fAlpha", V0s_fParamP_fAlpha, &b_V0s_fParamP_fAlpha);
   fChain->SetBranchAddress("V0s.fParamP.fP[5]", V0s_fParamP_fP, &b_V0s_fParamP_fP);
   fChain->SetBranchAddress("V0s.fParamP.fC[15]", V0s_fParamP_fC, &b_V0s_fParamP_fC);
   fChain->SetBranchAddress("V0s.fEffMass", V0s_fEffMass, &b_V0s_fEffMass);
   fChain->SetBranchAddress("V0s.fDcaV0Daughters", V0s_fDcaV0Daughters, &b_V0s_fDcaV0Daughters);
   fChain->SetBranchAddress("V0s.fChi2V0", V0s_fChi2V0, &b_V0s_fChi2V0);
   fChain->SetBranchAddress("V0s.fPos[3]", V0s_fPos, &b_V0s_fPos);
   fChain->SetBranchAddress("V0s.fPosCov[6]", V0s_fPosCov, &b_V0s_fPosCov);
   fChain->SetBranchAddress("V0s.fNmom[3]", V0s_fNmom, &b_V0s_fNmom);
   fChain->SetBranchAddress("V0s.fPmom[3]", V0s_fPmom, &b_V0s_fPmom);
   fChain->SetBranchAddress("V0s.fNormDCAPrim[2]", V0s_fNormDCAPrim, &b_V0s_fNormDCAPrim);
   fChain->SetBranchAddress("V0s.fRr", V0s_fRr, &b_V0s_fRr);
   fChain->SetBranchAddress("V0s.fDistSigma", V0s_fDistSigma, &b_V0s_fDistSigma);
   fChain->SetBranchAddress("V0s.fChi2Before", V0s_fChi2Before, &b_V0s_fChi2Before);
   fChain->SetBranchAddress("V0s.fChi2After", V0s_fChi2After, &b_V0s_fChi2After);
   fChain->SetBranchAddress("V0s.fCausality[4]", V0s_fCausality, &b_V0s_fCausality);
   fChain->SetBranchAddress("V0s.fAngle[3]", V0s_fAngle, &b_V0s_fAngle);
   fChain->SetBranchAddress("V0s.fPointAngleFi", V0s_fPointAngleFi, &b_V0s_fPointAngleFi);
   fChain->SetBranchAddress("V0s.fPointAngleTh", V0s_fPointAngleTh, &b_V0s_fPointAngleTh);
   fChain->SetBranchAddress("V0s.fPointAngle", V0s_fPointAngle, &b_V0s_fPointAngle);
   fChain->SetBranchAddress("V0s.fPdgCode", V0s_fPdgCode, &b_V0s_fPdgCode);
   fChain->SetBranchAddress("V0s.fNidx", V0s_fNidx, &b_V0s_fNidx);
   fChain->SetBranchAddress("V0s.fPidx", V0s_fPidx, &b_V0s_fPidx);
   fChain->SetBranchAddress("V0s.fStatus", V0s_fStatus, &b_V0s_fStatus);
   fChain->SetBranchAddress("V0s.fNBefore", V0s_fNBefore, &b_V0s_fNBefore);
   fChain->SetBranchAddress("V0s.fNAfter", V0s_fNAfter, &b_V0s_fNAfter);
   fChain->SetBranchAddress("V0s.fOnFlyStatus", V0s_fOnFlyStatus, &b_V0s_fOnFlyStatus);
   fChain->SetBranchAddress("Cascades", &Cascades_, &b_Cascades_);
   fChain->SetBranchAddress("Cascades.fUniqueID", Cascades_fUniqueID, &b_Cascades_fUniqueID);
   fChain->SetBranchAddress("Cascades.fBits", Cascades_fBits, &b_Cascades_fBits);
   fChain->SetBranchAddress("Cascades.fParamN.fUniqueID", Cascades_fParamN_fUniqueID, &b_Cascades_fParamN_fUniqueID);
   fChain->SetBranchAddress("Cascades.fParamN.fBits", Cascades_fParamN_fBits, &b_Cascades_fParamN_fBits);
   fChain->SetBranchAddress("Cascades.fParamN.fX", Cascades_fParamN_fX, &b_Cascades_fParamN_fX);
   fChain->SetBranchAddress("Cascades.fParamN.fAlpha", Cascades_fParamN_fAlpha, &b_Cascades_fParamN_fAlpha);
   fChain->SetBranchAddress("Cascades.fParamN.fP[5]", Cascades_fParamN_fP, &b_Cascades_fParamN_fP);
   fChain->SetBranchAddress("Cascades.fParamN.fC[15]", Cascades_fParamN_fC, &b_Cascades_fParamN_fC);
   fChain->SetBranchAddress("Cascades.fParamP.fUniqueID", Cascades_fParamP_fUniqueID, &b_Cascades_fParamP_fUniqueID);
   fChain->SetBranchAddress("Cascades.fParamP.fBits", Cascades_fParamP_fBits, &b_Cascades_fParamP_fBits);
   fChain->SetBranchAddress("Cascades.fParamP.fX", Cascades_fParamP_fX, &b_Cascades_fParamP_fX);
   fChain->SetBranchAddress("Cascades.fParamP.fAlpha", Cascades_fParamP_fAlpha, &b_Cascades_fParamP_fAlpha);
   fChain->SetBranchAddress("Cascades.fParamP.fP[5]", Cascades_fParamP_fP, &b_Cascades_fParamP_fP);
   fChain->SetBranchAddress("Cascades.fParamP.fC[15]", Cascades_fParamP_fC, &b_Cascades_fParamP_fC);
   fChain->SetBranchAddress("Cascades.fEffMass", Cascades_fEffMass, &b_Cascades_fEffMass);
   fChain->SetBranchAddress("Cascades.fDcaV0Daughters", Cascades_fDcaV0Daughters, &b_Cascades_fDcaV0Daughters);
   fChain->SetBranchAddress("Cascades.fChi2V0", Cascades_fChi2V0, &b_Cascades_fChi2V0);
   fChain->SetBranchAddress("Cascades.fPos[3]", Cascades_fPos, &b_Cascades_fPos);
   fChain->SetBranchAddress("Cascades.fPosCov[6]", Cascades_fPosCov, &b_Cascades_fPosCov);
   fChain->SetBranchAddress("Cascades.fNmom[3]", Cascades_fNmom, &b_Cascades_fNmom);
   fChain->SetBranchAddress("Cascades.fPmom[3]", Cascades_fPmom, &b_Cascades_fPmom);
   fChain->SetBranchAddress("Cascades.fNormDCAPrim[2]", Cascades_fNormDCAPrim, &b_Cascades_fNormDCAPrim);
   fChain->SetBranchAddress("Cascades.fRr", Cascades_fRr, &b_Cascades_fRr);
   fChain->SetBranchAddress("Cascades.fDistSigma", Cascades_fDistSigma, &b_Cascades_fDistSigma);
   fChain->SetBranchAddress("Cascades.fChi2Before", Cascades_fChi2Before, &b_Cascades_fChi2Before);
   fChain->SetBranchAddress("Cascades.fChi2After", Cascades_fChi2After, &b_Cascades_fChi2After);
   fChain->SetBranchAddress("Cascades.fCausality[4]", Cascades_fCausality, &b_Cascades_fCausality);
   fChain->SetBranchAddress("Cascades.fAngle[3]", Cascades_fAngle, &b_Cascades_fAngle);
   fChain->SetBranchAddress("Cascades.fPointAngleFi", Cascades_fPointAngleFi, &b_Cascades_fPointAngleFi);
   fChain->SetBranchAddress("Cascades.fPointAngleTh", Cascades_fPointAngleTh, &b_Cascades_fPointAngleTh);
   fChain->SetBranchAddress("Cascades.fPointAngle", Cascades_fPointAngle, &b_Cascades_fPointAngle);
   fChain->SetBranchAddress("Cascades.fPdgCode", Cascades_fPdgCode, &b_Cascades_fPdgCode);
   fChain->SetBranchAddress("Cascades.fNidx", Cascades_fNidx, &b_Cascades_fNidx);
   fChain->SetBranchAddress("Cascades.fPidx", Cascades_fPidx, &b_Cascades_fPidx);
   fChain->SetBranchAddress("Cascades.fStatus", Cascades_fStatus, &b_Cascades_fStatus);
   fChain->SetBranchAddress("Cascades.fNBefore", Cascades_fNBefore, &b_Cascades_fNBefore);
   fChain->SetBranchAddress("Cascades.fNAfter", Cascades_fNAfter, &b_Cascades_fNAfter);
   fChain->SetBranchAddress("Cascades.fOnFlyStatus", Cascades_fOnFlyStatus, &b_Cascades_fOnFlyStatus);
   fChain->SetBranchAddress("Cascades.fEffMassXi", Cascades_fEffMassXi, &b_Cascades_fEffMassXi);
   fChain->SetBranchAddress("Cascades.fChi2Xi", Cascades_fChi2Xi, &b_Cascades_fChi2Xi);
   fChain->SetBranchAddress("Cascades.fDcaXiDaughters", Cascades_fDcaXiDaughters, &b_Cascades_fDcaXiDaughters);
   fChain->SetBranchAddress("Cascades.fPosXi[3]", Cascades_fPosXi, &b_Cascades_fPosXi);
   fChain->SetBranchAddress("Cascades.fPosCovXi[6]", Cascades_fPosCovXi, &b_Cascades_fPosCovXi);
   fChain->SetBranchAddress("Cascades.fBachMom[3]", Cascades_fBachMom, &b_Cascades_fBachMom);
   fChain->SetBranchAddress("Cascades.fBachMomCov[6]", Cascades_fBachMomCov, &b_Cascades_fBachMomCov);
   fChain->SetBranchAddress("Cascades.fPdgCodeXi", Cascades_fPdgCodeXi, &b_Cascades_fPdgCodeXi);
   fChain->SetBranchAddress("Cascades.fBachIdx", Cascades_fBachIdx, &b_Cascades_fBachIdx);
   fChain->SetBranchAddress("Kinks", &Kinks_, &b_Kinks_);
   fChain->SetBranchAddress("Kinks.fUniqueID", Kinks_fUniqueID, &b_Kinks_fUniqueID);
   fChain->SetBranchAddress("Kinks.fBits", Kinks_fBits, &b_Kinks_fBits);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fUniqueID", Kinks_fParamDaughter_fUniqueID, &b_Kinks_fParamDaughter_fUniqueID);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fBits", Kinks_fParamDaughter_fBits, &b_Kinks_fParamDaughter_fBits);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fX", Kinks_fParamDaughter_fX, &b_Kinks_fParamDaughter_fX);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fAlpha", Kinks_fParamDaughter_fAlpha, &b_Kinks_fParamDaughter_fAlpha);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fP[5]", Kinks_fParamDaughter_fP, &b_Kinks_fParamDaughter_fP);
   fChain->SetBranchAddress("Kinks.fParamDaughter.fC[15]", Kinks_fParamDaughter_fC, &b_Kinks_fParamDaughter_fC);
   fChain->SetBranchAddress("Kinks.fParamMother.fUniqueID", Kinks_fParamMother_fUniqueID, &b_Kinks_fParamMother_fUniqueID);
   fChain->SetBranchAddress("Kinks.fParamMother.fBits", Kinks_fParamMother_fBits, &b_Kinks_fParamMother_fBits);
   fChain->SetBranchAddress("Kinks.fParamMother.fX", Kinks_fParamMother_fX, &b_Kinks_fParamMother_fX);
   fChain->SetBranchAddress("Kinks.fParamMother.fAlpha", Kinks_fParamMother_fAlpha, &b_Kinks_fParamMother_fAlpha);
   fChain->SetBranchAddress("Kinks.fParamMother.fP[5]", Kinks_fParamMother_fP, &b_Kinks_fParamMother_fP);
   fChain->SetBranchAddress("Kinks.fParamMother.fC[15]", Kinks_fParamMother_fC, &b_Kinks_fParamMother_fC);
   fChain->SetBranchAddress("Kinks.fDist1", Kinks_fDist1, &b_Kinks_fDist1);
   fChain->SetBranchAddress("Kinks.fDist2", Kinks_fDist2, &b_Kinks_fDist2);
   fChain->SetBranchAddress("Kinks.fPdr[3]", Kinks_fPdr, &b_Kinks_fPdr);
   fChain->SetBranchAddress("Kinks.fXr[3]", Kinks_fXr, &b_Kinks_fXr);
   fChain->SetBranchAddress("Kinks.fPm[3]", Kinks_fPm, &b_Kinks_fPm);
   fChain->SetBranchAddress("Kinks.fRr", Kinks_fRr, &b_Kinks_fRr);
   fChain->SetBranchAddress("Kinks.fShapeFactor", Kinks_fShapeFactor, &b_Kinks_fShapeFactor);
   fChain->SetBranchAddress("Kinks.fTPCdensity[2][2]", Kinks_fTPCdensity, &b_Kinks_fTPCdensity);
   fChain->SetBranchAddress("Kinks.fAngle[3]", Kinks_fAngle, &b_Kinks_fAngle);
   fChain->SetBranchAddress("Kinks.fLab[2]", Kinks_fLab, &b_Kinks_fLab);
   fChain->SetBranchAddress("Kinks.fIndex[2]", Kinks_fIndex, &b_Kinks_fIndex);
   fChain->SetBranchAddress("Kinks.fID", Kinks_fID, &b_Kinks_fID);
   fChain->SetBranchAddress("Kinks.fRow0", Kinks_fRow0, &b_Kinks_fRow0);
   fChain->SetBranchAddress("Kinks.fMultiple[2]", Kinks_fMultiple, &b_Kinks_fMultiple);
   fChain->SetBranchAddress("Kinks.fTPCncls[2]", Kinks_fTPCncls, &b_Kinks_fTPCncls);
   fChain->SetBranchAddress("Kinks.fStatus[12]", Kinks_fStatus, &b_Kinks_fStatus);
   fChain->SetBranchAddress("CaloClusters", &CaloClusters_, &b_CaloClusters_);
   fChain->SetBranchAddress("CaloClusters.fUniqueID", CaloClusters_fUniqueID, &b_CaloClusters_fUniqueID);
   fChain->SetBranchAddress("CaloClusters.fBits", CaloClusters_fBits, &b_CaloClusters_fBits);
   fChain->SetBranchAddress("CaloClusters.fNCells", CaloClusters_fNCells, &b_CaloClusters_fNCells);
   fChain->SetBranchAddress("CaloClusters.fCellsAbsId", CaloClusters_fCellsAbsId, &b_CaloClusters_fCellsAbsId);
   fChain->SetBranchAddress("CaloClusters.fCellsAmpFraction", CaloClusters_fCellsAmpFraction, &b_CaloClusters_fCellsAmpFraction);
   fChain->SetBranchAddress("CaloClusters.fGlobalPos[3]", CaloClusters_fGlobalPos, &b_CaloClusters_fGlobalPos);
   fChain->SetBranchAddress("CaloClusters.fEnergy", CaloClusters_fEnergy, &b_CaloClusters_fEnergy);
   fChain->SetBranchAddress("CaloClusters.fDispersion", CaloClusters_fDispersion, &b_CaloClusters_fDispersion);
   fChain->SetBranchAddress("CaloClusters.fChi2", CaloClusters_fChi2, &b_CaloClusters_fChi2);
   fChain->SetBranchAddress("CaloClusters.fM20", CaloClusters_fM20, &b_CaloClusters_fM20);
   fChain->SetBranchAddress("CaloClusters.fM02", CaloClusters_fM02, &b_CaloClusters_fM02);
   fChain->SetBranchAddress("CaloClusters.fEmcCpvDistance", CaloClusters_fEmcCpvDistance, &b_CaloClusters_fEmcCpvDistance);
   fChain->SetBranchAddress("CaloClusters.fTrackDx", CaloClusters_fTrackDx, &b_CaloClusters_fTrackDx);
   fChain->SetBranchAddress("CaloClusters.fTrackDz", CaloClusters_fTrackDz, &b_CaloClusters_fTrackDz);
   fChain->SetBranchAddress("CaloClusters.fDistToBadChannel", CaloClusters_fDistToBadChannel, &b_CaloClusters_fDistToBadChannel);
   fChain->SetBranchAddress("CaloClusters.fPID[14]", CaloClusters_fPID, &b_CaloClusters_fPID);
   fChain->SetBranchAddress("CaloClusters.fID", CaloClusters_fID, &b_CaloClusters_fID);
   fChain->SetBranchAddress("CaloClusters.fNExMax", CaloClusters_fNExMax, &b_CaloClusters_fNExMax);
   fChain->SetBranchAddress("CaloClusters.fClusterType", CaloClusters_fClusterType, &b_CaloClusters_fClusterType);
   fChain->SetBranchAddress("CaloClusters.fTOF", CaloClusters_fTOF, &b_CaloClusters_fTOF);
   fChain->SetBranchAddress("CaloClusters.fCoreEnergy", CaloClusters_fCoreEnergy, &b_CaloClusters_fCoreEnergy);
   fChain->SetBranchAddress("CaloClusters.fNLabel", CaloClusters_fNLabel, &b_CaloClusters_fNLabel);
   fChain->SetBranchAddress("CaloClusters.fClusterMCEdepFraction", CaloClusters_fClusterMCEdepFraction, &b_CaloClusters_fClusterMCEdepFraction);
   fChain->SetBranchAddress("CaloClusters.fCellsMCEdepFractionMap", CaloClusters_fCellsMCEdepFractionMap, &b_CaloClusters_fCellsMCEdepFractionMap);
   fChain->SetBranchAddress("EMCALCells.AliVCaloCells.fUniqueID", &EMCALCells_AliVCaloCells_fUniqueID, &b_EMCALCells_AliVCaloCells_fUniqueID);
   fChain->SetBranchAddress("EMCALCells.AliVCaloCells.fBits", &EMCALCells_AliVCaloCells_fBits, &b_EMCALCells_AliVCaloCells_fBits);
   fChain->SetBranchAddress("EMCALCells.AliVCaloCells.fName", &EMCALCells_AliVCaloCells_fName, &b_EMCALCells_AliVCaloCells_fName);
   fChain->SetBranchAddress("EMCALCells.AliVCaloCells.fTitle", &EMCALCells_AliVCaloCells_fTitle, &b_EMCALCells_AliVCaloCells_fTitle);
   fChain->SetBranchAddress("EMCALCells.fNCells", &EMCALCells_fNCells, &b_EMCALCells_fNCells);
   fChain->SetBranchAddress("EMCALCells.fHGLG", EMCALCells_fHGLG, &b_EMCALCells_fHGLG);
   fChain->SetBranchAddress("EMCALCells.fCellNumber", EMCALCells_fCellNumber, &b_EMCALCells_fCellNumber);
   fChain->SetBranchAddress("EMCALCells.fAmplitude", EMCALCells_fAmplitude, &b_EMCALCells_fAmplitude);
   fChain->SetBranchAddress("EMCALCells.fTime", EMCALCells_fTime, &b_EMCALCells_fTime);
   fChain->SetBranchAddress("EMCALCells.fEFraction", EMCALCells_fEFraction, &b_EMCALCells_fEFraction);
   fChain->SetBranchAddress("EMCALCells.fMCLabel", EMCALCells_fMCLabel, &b_EMCALCells_fMCLabel);
   fChain->SetBranchAddress("EMCALCells.fType", &EMCALCells_fType, &b_EMCALCells_fType);
   fChain->SetBranchAddress("PHOSCells.AliVCaloCells.fUniqueID", &PHOSCells_AliVCaloCells_fUniqueID, &b_PHOSCells_AliVCaloCells_fUniqueID);
   fChain->SetBranchAddress("PHOSCells.AliVCaloCells.fBits", &PHOSCells_AliVCaloCells_fBits, &b_PHOSCells_AliVCaloCells_fBits);
   fChain->SetBranchAddress("PHOSCells.AliVCaloCells.fName", &PHOSCells_AliVCaloCells_fName, &b_PHOSCells_AliVCaloCells_fName);
   fChain->SetBranchAddress("PHOSCells.AliVCaloCells.fTitle", &PHOSCells_AliVCaloCells_fTitle, &b_PHOSCells_AliVCaloCells_fTitle);
   fChain->SetBranchAddress("PHOSCells.fNCells", &PHOSCells_fNCells, &b_PHOSCells_fNCells);
   fChain->SetBranchAddress("PHOSCells.fHGLG", &PHOSCells_fHGLG, &b_PHOSCells_fHGLG);
   fChain->SetBranchAddress("PHOSCells.fCellNumber", &PHOSCells_fCellNumber, &b_PHOSCells_fCellNumber);
   fChain->SetBranchAddress("PHOSCells.fAmplitude", &PHOSCells_fAmplitude, &b_PHOSCells_fAmplitude);
   fChain->SetBranchAddress("PHOSCells.fTime", &PHOSCells_fTime, &b_PHOSCells_fTime);
   fChain->SetBranchAddress("PHOSCells.fEFraction", &PHOSCells_fEFraction, &b_PHOSCells_fEFraction);
   fChain->SetBranchAddress("PHOSCells.fMCLabel", &PHOSCells_fMCLabel, &b_PHOSCells_fMCLabel);
   fChain->SetBranchAddress("PHOSCells.fType", &PHOSCells_fType, &b_PHOSCells_fType);
   fChain->SetBranchAddress("AliRawDataErrorLogs", &AliRawDataErrorLogs_, &b_AliRawDataErrorLogs_);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fUniqueID", AliRawDataErrorLogs_fUniqueID, &b_AliRawDataErrorLogs_fUniqueID);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fBits", AliRawDataErrorLogs_fBits, &b_AliRawDataErrorLogs_fBits);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fName", AliRawDataErrorLogs_fName, &b_AliRawDataErrorLogs_fName);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fTitle", AliRawDataErrorLogs_fTitle, &b_AliRawDataErrorLogs_fTitle);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fEventNumber", AliRawDataErrorLogs_fEventNumber, &b_AliRawDataErrorLogs_fEventNumber);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fDdlID", AliRawDataErrorLogs_fDdlID, &b_AliRawDataErrorLogs_fDdlID);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fErrorLevel", AliRawDataErrorLogs_fErrorLevel, &b_AliRawDataErrorLogs_fErrorLevel);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fErrorCode", AliRawDataErrorLogs_fErrorCode, &b_AliRawDataErrorLogs_fErrorCode);
   fChain->SetBranchAddress("AliRawDataErrorLogs.fCount", AliRawDataErrorLogs_fCount, &b_AliRawDataErrorLogs_fCount);
   fChain->SetBranchAddress("AliESDACORDE.TObject.fUniqueID", &AliESDACORDE_TObject_fUniqueID, &b_AliESDACORDE_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDACORDE.TObject.fBits", &AliESDACORDE_TObject_fBits, &b_AliESDACORDE_TObject_fBits);
   fChain->SetBranchAddress("AliESDACORDE.fACORDEBitPattern[60]", AliESDACORDE_fACORDEBitPattern, &b_AliESDACORDE_fACORDEBitPattern);
   fChain->SetBranchAddress("AliESDAD.AliVAD.fUniqueID", &AliESDAD_AliVAD_fUniqueID, &b_AliESDAD_AliVAD_fUniqueID);
   fChain->SetBranchAddress("AliESDAD.AliVAD.fBits", &AliESDAD_AliVAD_fBits, &b_AliESDAD_AliVAD_fBits);
   fChain->SetBranchAddress("AliESDAD.fBBtriggerADA", &AliESDAD_fBBtriggerADA, &b_AliESDAD_fBBtriggerADA);
   fChain->SetBranchAddress("AliESDAD.fBGtriggerADA", &AliESDAD_fBGtriggerADA, &b_AliESDAD_fBGtriggerADA);
   fChain->SetBranchAddress("AliESDAD.fBBtriggerADC", &AliESDAD_fBBtriggerADC, &b_AliESDAD_fBBtriggerADC);
   fChain->SetBranchAddress("AliESDAD.fBGtriggerADC", &AliESDAD_fBGtriggerADC, &b_AliESDAD_fBGtriggerADC);
   fChain->SetBranchAddress("AliESDAD.fMultiplicity[16]", AliESDAD_fMultiplicity, &b_AliESDAD_fMultiplicity);
   fChain->SetBranchAddress("AliESDAD.fAdc[16]", AliESDAD_fAdc, &b_AliESDAD_fAdc);
   fChain->SetBranchAddress("AliESDAD.fTime[16]", AliESDAD_fTime, &b_AliESDAD_fTime);
   fChain->SetBranchAddress("AliESDAD.fWidth[16]", AliESDAD_fWidth, &b_AliESDAD_fWidth);
   fChain->SetBranchAddress("AliESDAD.fBBFlag[16]", AliESDAD_fBBFlag, &b_AliESDAD_fBBFlag);
   fChain->SetBranchAddress("AliESDAD.fBGFlag[16]", AliESDAD_fBGFlag, &b_AliESDAD_fBGFlag);
   fChain->SetBranchAddress("AliESDAD.fADATime", &AliESDAD_fADATime, &b_AliESDAD_fADATime);
   fChain->SetBranchAddress("AliESDAD.fADCTime", &AliESDAD_fADCTime, &b_AliESDAD_fADCTime);
   fChain->SetBranchAddress("AliESDAD.fADATimeError", &AliESDAD_fADATimeError, &b_AliESDAD_fADATimeError);
   fChain->SetBranchAddress("AliESDAD.fADCTimeError", &AliESDAD_fADCTimeError, &b_AliESDAD_fADCTimeError);
   fChain->SetBranchAddress("AliESDAD.fADADecision", &AliESDAD_fADADecision, &b_AliESDAD_fADADecision);
   fChain->SetBranchAddress("AliESDAD.fADCDecision", &AliESDAD_fADCDecision, &b_AliESDAD_fADCDecision);
   fChain->SetBranchAddress("AliESDAD.fTriggerChargeA", &AliESDAD_fTriggerChargeA, &b_AliESDAD_fTriggerChargeA);
   fChain->SetBranchAddress("AliESDAD.fTriggerChargeC", &AliESDAD_fTriggerChargeC, &b_AliESDAD_fTriggerChargeC);
   fChain->SetBranchAddress("AliESDAD.fTriggerBits", &AliESDAD_fTriggerBits, &b_AliESDAD_fTriggerBits);
   fChain->SetBranchAddress("AliESDAD.fIsBB[16][21]", AliESDAD_fIsBB, &b_AliESDAD_fIsBB);
   fChain->SetBranchAddress("AliESDAD.fIsBG[16][21]", AliESDAD_fIsBG, &b_AliESDAD_fIsBG);
   fChain->SetBranchAddress("AliESDAD.fAdcTail[16]", AliESDAD_fAdcTail, &b_AliESDAD_fAdcTail);
   fChain->SetBranchAddress("AliESDAD.fAdcTrigger[16]", AliESDAD_fAdcTrigger, &b_AliESDAD_fAdcTrigger);
   fChain->SetBranchAddress("AliTOFHeader.TObject.fUniqueID", &AliTOFHeader_TObject_fUniqueID, &b_AliTOFHeader_TObject_fUniqueID);
   fChain->SetBranchAddress("AliTOFHeader.TObject.fBits", &AliTOFHeader_TObject_fBits, &b_AliTOFHeader_TObject_fBits);
   fChain->SetBranchAddress("AliTOFHeader.fDefaultEventTimeValue", &AliTOFHeader_fDefaultEventTimeValue, &b_AliTOFHeader_fDefaultEventTimeValue);
   fChain->SetBranchAddress("AliTOFHeader.fDefaultEventTimeRes", &AliTOFHeader_fDefaultEventTimeRes, &b_AliTOFHeader_fDefaultEventTimeRes);
   fChain->SetBranchAddress("AliTOFHeader.fNbins", &AliTOFHeader_fNbins, &b_AliTOFHeader_fNbins);
   fChain->SetBranchAddress("AliTOFHeader.fTOFtimeResolution", &AliTOFHeader_fTOFtimeResolution, &b_AliTOFHeader_fTOFtimeResolution);
   fChain->SetBranchAddress("AliTOFHeader.fT0spread", &AliTOFHeader_fT0spread, &b_AliTOFHeader_fT0spread);
   fChain->SetBranchAddress("AliTOFHeader.fNumberOfTOFclusters", &AliTOFHeader_fNumberOfTOFclusters, &b_AliTOFHeader_fNumberOfTOFclusters);
   fChain->SetBranchAddress("AliTOFHeader.fNumberOfTOFtrgPads", &AliTOFHeader_fNumberOfTOFtrgPads, &b_AliTOFHeader_fNumberOfTOFtrgPads);
   fChain->SetBranchAddress("CosmicTracks", &CosmicTracks_, &b_CosmicTracks_);
   fChain->SetBranchAddress("CosmicTracks.fUniqueID", CosmicTracks_fUniqueID, &b_CosmicTracks_fUniqueID);
   fChain->SetBranchAddress("CosmicTracks.fBits", CosmicTracks_fBits, &b_CosmicTracks_fBits);
   fChain->SetBranchAddress("CosmicTracks.fX", CosmicTracks_fX, &b_CosmicTracks_fX);
   fChain->SetBranchAddress("CosmicTracks.fAlpha", CosmicTracks_fAlpha, &b_CosmicTracks_fAlpha);
   fChain->SetBranchAddress("CosmicTracks.fP[5]", CosmicTracks_fP, &b_CosmicTracks_fP);
   fChain->SetBranchAddress("CosmicTracks.fC[15]", CosmicTracks_fC, &b_CosmicTracks_fC);
   fChain->SetBranchAddress("CosmicTracks.fESDtrackIndex[2]", CosmicTracks_fESDtrackIndex, &b_CosmicTracks_fESDtrackIndex);
   fChain->SetBranchAddress("CosmicTracks.fNCluster", CosmicTracks_fNCluster, &b_CosmicTracks_fNCluster);
   fChain->SetBranchAddress("CosmicTracks.fLeverArm", CosmicTracks_fLeverArm, &b_CosmicTracks_fLeverArm);
   fChain->SetBranchAddress("CosmicTracks.fChi2PerCluster", CosmicTracks_fChi2PerCluster, &b_CosmicTracks_fChi2PerCluster);
   fChain->SetBranchAddress("CosmicTracks.fImpactD", CosmicTracks_fImpactD, &b_CosmicTracks_fImpactD);
   fChain->SetBranchAddress("CosmicTracks.fImpactZ", CosmicTracks_fImpactZ, &b_CosmicTracks_fImpactZ);
   fChain->SetBranchAddress("CosmicTracks.fIsReuse", CosmicTracks_fIsReuse, &b_CosmicTracks_fIsReuse);
   fChain->SetBranchAddress("CosmicTracks.fFindableRatio", CosmicTracks_fFindableRatio, &b_CosmicTracks_fFindableRatio);
   fChain->SetBranchAddress("AliESDTOFCluster", &AliESDTOFCluster_, &b_AliESDTOFCluster_);
   fChain->SetBranchAddress("AliESDTOFCluster.fUniqueID", AliESDTOFCluster_fUniqueID, &b_AliESDTOFCluster_fUniqueID);
   fChain->SetBranchAddress("AliESDTOFCluster.fBits", AliESDTOFCluster_fBits, &b_AliESDTOFCluster_fBits);
   fChain->SetBranchAddress("AliESDTOFCluster.fID", AliESDTOFCluster_fID, &b_AliESDTOFCluster_fID);
   fChain->SetBranchAddress("AliESDTOFCluster.fNTOFhits", AliESDTOFCluster_fNTOFhits, &b_AliESDTOFCluster_fNTOFhits);
   fChain->SetBranchAddress("AliESDTOFCluster.fNmatchableTracks", AliESDTOFCluster_fNmatchableTracks, &b_AliESDTOFCluster_fNmatchableTracks);
   fChain->SetBranchAddress("AliESDTOFCluster.fHitIndex[4]", AliESDTOFCluster_fHitIndex, &b_AliESDTOFCluster_fHitIndex);
   fChain->SetBranchAddress("AliESDTOFCluster.fMatchIndex[7]", AliESDTOFCluster_fMatchIndex, &b_AliESDTOFCluster_fMatchIndex);
   fChain->SetBranchAddress("AliESDTOFHit", &AliESDTOFHit_, &b_AliESDTOFHit_);
   fChain->SetBranchAddress("AliESDTOFHit.fUniqueID", AliESDTOFHit_fUniqueID, &b_AliESDTOFHit_fUniqueID);
   fChain->SetBranchAddress("AliESDTOFHit.fBits", AliESDTOFHit_fBits, &b_AliESDTOFHit_fBits);
   fChain->SetBranchAddress("AliESDTOFHit.fTimeRaw", AliESDTOFHit_fTimeRaw, &b_AliESDTOFHit_fTimeRaw);
   fChain->SetBranchAddress("AliESDTOFHit.fTime", AliESDTOFHit_fTime, &b_AliESDTOFHit_fTime);
   fChain->SetBranchAddress("AliESDTOFHit.fTOT", AliESDTOFHit_fTOT, &b_AliESDTOFHit_fTOT);
   fChain->SetBranchAddress("AliESDTOFHit.fTOFLabel[3]", AliESDTOFHit_fTOFLabel, &b_AliESDTOFHit_fTOFLabel);
   fChain->SetBranchAddress("AliESDTOFHit.fL0L1Latency", AliESDTOFHit_fL0L1Latency, &b_AliESDTOFHit_fL0L1Latency);
   fChain->SetBranchAddress("AliESDTOFHit.fDeltaBC", AliESDTOFHit_fDeltaBC, &b_AliESDTOFHit_fDeltaBC);
   fChain->SetBranchAddress("AliESDTOFHit.fTOFchannel", AliESDTOFHit_fTOFchannel, &b_AliESDTOFHit_fTOFchannel);
   fChain->SetBranchAddress("AliESDTOFMatch", &AliESDTOFMatch_, &b_AliESDTOFMatch_);
   fChain->SetBranchAddress("AliESDTOFMatch.fUniqueID", AliESDTOFMatch_fUniqueID, &b_AliESDTOFMatch_fUniqueID);
   fChain->SetBranchAddress("AliESDTOFMatch.fBits", AliESDTOFMatch_fBits, &b_AliESDTOFMatch_fBits);
   fChain->SetBranchAddress("AliESDTOFMatch.fDx", AliESDTOFMatch_fDx, &b_AliESDTOFMatch_fDx);
   fChain->SetBranchAddress("AliESDTOFMatch.fDz", AliESDTOFMatch_fDz, &b_AliESDTOFMatch_fDz);
   fChain->SetBranchAddress("AliESDTOFMatch.fTrackLength", AliESDTOFMatch_fTrackLength, &b_AliESDTOFMatch_fTrackLength);
   fChain->SetBranchAddress("AliESDTOFMatch.fIntegratedTimes[9]", AliESDTOFMatch_fIntegratedTimes, &b_AliESDTOFMatch_fIntegratedTimes);
   fChain->SetBranchAddress("AliESDFIT.TObject.fUniqueID", &AliESDFIT_TObject_fUniqueID, &b_AliESDFIT_TObject_fUniqueID);
   fChain->SetBranchAddress("AliESDFIT.TObject.fBits", &AliESDFIT_TObject_fBits, &b_AliESDFIT_TObject_fBits);
   fChain->SetBranchAddress("AliESDFIT.fT0[3]", AliESDFIT_fT0, &b_AliESDFIT_fT0);
   fChain->SetBranchAddress("AliESDFIT.fFITzVertex", &AliESDFIT_fFITzVertex, &b_AliESDFIT_fFITzVertex);
   fChain->SetBranchAddress("AliESDFIT.fFITtime[240]", AliESDFIT_fFITtime, &b_AliESDFIT_fFITtime);
   fChain->SetBranchAddress("AliESDFIT.fFITamplitude[240]", AliESDFIT_fFITamplitude, &b_AliESDFIT_fFITamplitude);
   fChain->SetBranchAddress("AliESDFIT.fT0best[3]", AliESDFIT_fT0best, &b_AliESDFIT_fT0best);
   fChain->SetBranchAddress("HLTGlobalTrigger.TNamed.fUniqueID", &HLTGlobalTrigger_TNamed_fUniqueID, &b_HLTGlobalTrigger_TNamed_fUniqueID);
   fChain->SetBranchAddress("HLTGlobalTrigger.TNamed.fBits", &HLTGlobalTrigger_TNamed_fBits, &b_HLTGlobalTrigger_TNamed_fBits);
   fChain->SetBranchAddress("HLTGlobalTrigger.TNamed.fName", &HLTGlobalTrigger_TNamed_fName, &b_HLTGlobalTrigger_TNamed_fName);
   fChain->SetBranchAddress("HLTGlobalTrigger.TNamed.fTitle", &HLTGlobalTrigger_TNamed_fTitle, &b_HLTGlobalTrigger_TNamed_fTitle);
   fChain->SetBranchAddress("HLTGlobalTrigger.fInputObjectInfo", &HLTGlobalTrigger_fInputObjectInfo_, &b_HLTGlobalTrigger_fInputObjectInfo_);
   fChain->SetBranchAddress("HLTGlobalTrigger.fInputObjectInfo.fUniqueID", &HLTGlobalTrigger_fInputObjectInfo_fUniqueID, &b_HLTGlobalTrigger_fInputObjectInfo_fUniqueID);
   fChain->SetBranchAddress("HLTGlobalTrigger.fInputObjectInfo.fBits", &HLTGlobalTrigger_fInputObjectInfo_fBits, &b_HLTGlobalTrigger_fInputObjectInfo_fBits);
   fChain->SetBranchAddress("HLTGlobalTrigger.fInputObjectInfo.fName", &HLTGlobalTrigger_fInputObjectInfo_fName, &b_HLTGlobalTrigger_fInputObjectInfo_fName);
   fChain->SetBranchAddress("HLTGlobalTrigger.fInputObjectInfo.fTitle", &HLTGlobalTrigger_fInputObjectInfo_fTitle, &b_HLTGlobalTrigger_fInputObjectInfo_fTitle);
   fChain->SetBranchAddress("HLTGlobalTrigger.fTriggerItems", &HLTGlobalTrigger_fTriggerItems, &b_HLTGlobalTrigger_fTriggerItems);
   fChain->SetBranchAddress("HLTGlobalTrigger.fCounters", &HLTGlobalTrigger_fCounters, &b_HLTGlobalTrigger_fCounters);
   fChain->SetBranchAddress("fDetectorStatus", &fDetectorStatus, &b_fDetectorStatus);
   fChain->SetBranchAddress("fDAQDetectorPattern", &fDAQDetectorPattern, &b_fDAQDetectorPattern);
   fChain->SetBranchAddress("fDAQAttributes", &fDAQAttributes, &b_fDAQAttributes);
   fChain->SetBranchAddress("fNTPCClusters", &fNTPCClusters, &b_fNTPCClusters);
   Notify();
}

Bool_t ESD::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ESD::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ESD::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ESD_cxx
