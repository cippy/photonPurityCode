//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 21 23:00:18 2016 by ROOT version 6.06/01
// from TTree tree/tree
// found on file: datatree.root
//////////////////////////////////////////////////////////

#ifndef datatree_h
#define datatree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class datatree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          event;
   UInt_t          run;
   UInt_t          lumi;
   Double_t        xsec;
   Double_t        wgt;
   Double_t        puwgt;
   Int_t           puobs;
   Int_t           putrue;
   UInt_t          nvtx;
   UChar_t         hltmet90;
   UChar_t         hltmet100;
   UChar_t         hltmet110;
   UChar_t         hltmet120;
   UChar_t         hltmetwithmu90;
   UChar_t         hltmetwithmu100;
   UChar_t         hltmetwithmu110;
   UChar_t         hltmetwithmu120;
   UChar_t         hltmetwithmu170;
   UChar_t         hltmetwithmu300;
   UChar_t         hltjetmet90;
   UChar_t         hltjetmet100;
   UChar_t         hltjetmet110;
   UChar_t         hltphoton50;
   UChar_t         hltphoton75;
   UChar_t         hltphoton90;
   UChar_t         hltphoton120;
   UChar_t         hltphoton165;
   UChar_t         hltphoton175;
   UChar_t         hltdoublemu;
   UChar_t         hltsinglemu;
   UChar_t         hltdoubleel;
   UChar_t         hltsingleel;
   UChar_t         hltsingleel27;
   UChar_t         hltelnoiso;
   UChar_t         hltPFHT125;
   UChar_t         hltPFHT200;
   UChar_t         hltPFHT250;
   UChar_t         hltPFHT300;
   UChar_t         hltPFHT350;
   UChar_t         hltPFHT400;
   UChar_t         hltPFHT475;
   UChar_t         hltPFHT600;
   UChar_t         hltPFHT650;
   UChar_t         hltPFHT800;
   UChar_t         hltPFHT900;
   UChar_t         hltCaloJet500;
   UChar_t         hltEcalHT800;
   UChar_t         hltPFJet450;
   UChar_t         hltPFJet500;
   UChar_t         hltphoton90PFHT500;
   UChar_t         hltphoton90PFHT600;
   Double_t        pswgt_ph50;
   Double_t        pswgt_ph75;
   Double_t        pswgt_ph90;
   Double_t        pswgt_ph120;
   Double_t        pswgt_ht125;
   Double_t        pswgt_ht200;
   Double_t        pswgt_ht250;
   Double_t        pswgt_ht300;
   Double_t        pswgt_ht300;
   Double_t        pswgt_ht400;
   Double_t        pswgt_ht475;
   Double_t        pswgt_ht600;
   Double_t        pswgt_ht650;
   Double_t        pswgt_ht800;
   Double_t        pswgt_ht900;
   UChar_t         flagcsctight;
   UChar_t         flaghbhenoise;
   UChar_t         flaghbheiso;
   UChar_t         flageebadsc;
   UChar_t         flagecaltp;
   UChar_t         flaggoodvertices;
   UChar_t         flagglobaltighthalo;
   UChar_t         flagbadchpf;
   UChar_t         flagbadpfmu;
   UInt_t          nmuons;
   UInt_t          nelectrons;
   UInt_t          nlooseelectrons;
   UInt_t          ntightmuons;
   UInt_t          nhighptmuons;
   UInt_t          ntightelectrons;
   UInt_t          nheepelectrons;
   UInt_t          ntaus;
   UInt_t          ntausraw;
   UInt_t          nphotons;
   UInt_t          njets;
   UInt_t          njetsinc;
   UInt_t          nbjets;
   UInt_t          nbjetslowpt;
   UInt_t          nbjetsMVA;
   UInt_t          nbjetsMVAlowpt;
   UInt_t          npuppijets;
   UInt_t          npuppijetsinc;
   UInt_t          npuppibjets;
   UInt_t          npuppibjetslowpt;
   UInt_t          npuppibjetsMVA;
   UInt_t          npuppibjetsMVAlowpt;
   Double_t        pfmet;
   Double_t        pfmetphi;
   Double_t        t1pfmet;
   Double_t        t1pfmetphi;
   Double_t        calomet;
   Double_t        calometphi;
   Double_t        mumet;
   Double_t        mumetphi;
   Double_t        t1mumet;
   Double_t        t1mumetphi;
   Double_t        elmet;
   Double_t        elmetphi;
   Double_t        t1elmet;
   Double_t        t1elmetphi;
   Double_t        phmet;
   Double_t        phmetphi;
   Double_t        t1phmet;
   Double_t        t1phmetphi;
   Double_t        taumet;
   Double_t        taumetphi;
   Double_t        t1taumet;
   Double_t        t1taumetphi;
   Double_t        genmet;
   Double_t        genmetphi;
   Double_t        pfmethadronHF;
   Double_t        pfmethadronHFphi;
   Double_t        pfmetegammaHF;
   Double_t        pfmetegammaHFphi;
   Double_t        pfmetchargedhadron;
   Double_t        pfmetchargedhadronphi;
   Double_t        pfmetneutralhadron;
   Double_t        pfmetneutralhadronphi;
   Double_t        pfmetelectrons;
   Double_t        pfmetelectronsphi;
   Double_t        pfmetmuons;
   Double_t        pfmetmuonsphi;
   Double_t        pfmetphotons;
   Double_t        pfmetphotonsphi;
   Double_t        pfmetunclustered;
   Double_t        pfmetunclusteredphi;
   Double_t        t1pfmetMuEnUp;
   Double_t        t1pfmetMuEnDown;
   Double_t        t1pfmetElEnUp;
   Double_t        t1pfmetElEnDown;
   Double_t        t1pfmetPhoEnUp;
   Double_t        t1pfmetPhoEnDown;
   Double_t        t1pfmetTauEnUp;
   Double_t        t1pfmetTauEnDown;
   Double_t        t1pfmetJetEnUp;
   Double_t        t1pfmetJetEnDown;
   Double_t        t1pfmetJetResUp;
   Double_t        t1pfmetJetResDown;
   Double_t        t1pfmetUncEnUp;
   Double_t        t1pfmetUncEnDown;
   Double_t        t1pfmetJetSmear;
   Double_t        t1pfmetXY;
   Double_t        t1pfmetMuEnUpPhi;
   Double_t        t1pfmetMuEnDownPhi;
   Double_t        t1pfmetElEnUpPhi;
   Double_t        t1pfmetElEnDownPhi;
   Double_t        t1pfmetPhoEnUpPhi;
   Double_t        t1pfmetPhoEnDownPhi;
   Double_t        t1pfmetTauEnUpPhi;
   Double_t        t1pfmetTauEnDownPhi;
   Double_t        t1pfmetJetEnUpPhi;
   Double_t        t1pfmetJetEnDownPhi;
   Double_t        t1pfmetJetResUpPhi;
   Double_t        t1pfmetJetResDownPhi;
   Double_t        t1pfmetUncEnUpPhi;
   Double_t        t1pfmetUncEnDownPhi;
   Double_t        t1pfmetJetSmearPhi;
   Double_t        t1pfmetXYPhi;
   Double_t        puppipfmet;
   Double_t        puppipfmetphi;
   Double_t        puppit1pfmet;
   Double_t        puppit1pfmetphi;
   Double_t        puppimumet;
   Double_t        puppimumetphi;
   Double_t        puppit1mumet;
   Double_t        puppit1mumetphi;
   Double_t        puppielmet;
   Double_t        puppielmetphi;
   Double_t        puppit1elmet;
   Double_t        puppit1elmetphi;
   Double_t        puppiphmet;
   Double_t        puppiphmetphi;
   Double_t        puppit1phmet;
   Double_t        puppit1phmetphi;
   Double_t        puppit1pfmetMuEnUp;
   Double_t        puppit1pfmetMuEnDown;
   Double_t        puppit1pfmetElEnUp;
   Double_t        puppit1pfmetElEnDown;
   Double_t        puppit1pfmetPhoEnUp;
   Double_t        puppit1pfmetPhoEnDown;
   Double_t        puppit1pfmetTauEnUp;
   Double_t        puppit1pfmetTauEnDown;
   Double_t        puppit1pfmetJetEnUp;
   Double_t        puppit1pfmetJetEnDown;
   Double_t        puppit1pfmetJetResUp;
   Double_t        puppit1pfmetJetResDown;
   Double_t        puppit1pfmetUncEnUp;
   Double_t        puppit1pfmetUncEnDown;
   Double_t        puppit1pfmetMuEnUpPhi;
   Double_t        puppit1pfmetMuEnDownPhi;
   Double_t        puppit1pfmetElEnUpPhi;
   Double_t        puppit1pfmetElEnDownPhi;
   Double_t        puppit1pfmetPhoEnUpPhi;
   Double_t        puppit1pfmetPhoEnDownPhi;
   Double_t        puppit1pfmetTauEnUpPhi;
   Double_t        puppit1pfmetTauEnDownPhi;
   Double_t        puppit1pfmetJetEnUpPhi;
   Double_t        puppit1pfmetJetEnDownPhi;
   Double_t        puppit1pfmetJetResUpPhi;
   Double_t        puppit1pfmetJetResDownPhi;
   Double_t        puppit1pfmetUncEnUpPhi;
   Double_t        puppit1pfmetUncEnDownPhi;
   vector<double>  *combinejetpt;
   vector<double>  *combinejeteta;
   vector<double>  *combinejetphi;
   vector<double>  *combinejetm;
   vector<double>  *combinejetbtag;
   vector<double>  *combinejetbtagMVA;
   vector<double>  *combinejetCHfrac;
   vector<double>  *combinejetNHfrac;
   vector<double>  *combinejetEMfrac;
   vector<double>  *combinejetCEMfrac;
   vector<double>  *combinejetmetdphi;
   vector<double>  *combinejetHFlav;
   vector<double>  *combinejetPFlav;
   vector<double>  *combinejetQGL;
   vector<double>  *combinejetPUID;
   vector<double>  *combinejetPassPUID;
   vector<double>  *combinejetGenpt;
   vector<double>  *combinejetGeneta;
   vector<double>  *combinejetGenphi;
   vector<double>  *combinejetGenm;
   vector<double>  *combinejetBtagSF;
   vector<double>  *combinejetBtagSFUp;
   vector<double>  *combinejetBtagSFDown;
   vector<double>  *combinejetBtagMVASF;
   vector<double>  *combinejetBtagMVASFUp;
   vector<double>  *combinejetBtagMVASFDown;
   Double_t        jetjetdphi;
   Double_t        incjetmetdphimin;
   Double_t        incjetmumetdphimin;
   Double_t        incjetelmetdphimin;
   Double_t        incjetphmetdphimin;
   Double_t        alljetmetdphimin;
   Double_t        alljetmumetdphimin;
   Double_t        alljetelmetdphimin;
   Double_t        alljetphmetdphimin;
   Double_t        incjetmetdphimin4;
   Double_t        incjetmumetdphimin4;
   Double_t        incjetelmetdphimin4;
   Double_t        incjetphmetdphimin4;
   Double_t        alljetmetdphimin4;
   Double_t        alljetmumetdphimin4;
   Double_t        alljetelmetdphimin4;
   Double_t        alljetphmetdphimin4;
   Double_t        ht;
   Double_t        htinc;
   Double_t        ht30;
   vector<double>  *combinePuppijetpt;
   vector<double>  *combinePuppijeteta;
   vector<double>  *combinePuppijetphi;
   vector<double>  *combinePuppijetm;
   vector<double>  *combinePuppijetbtag;
   vector<double>  *combinePuppijetbtagMVA;
   vector<double>  *combinePuppijetCHfrac;
   vector<double>  *combinePuppijetNHfrac;
   vector<double>  *combinePuppijetEMfrac;
   vector<double>  *combinePuppijetCEMfrac;
   vector<double>  *combinePuppijetmetdphi;
   vector<double>  *combinePuppijetHFlav;
   vector<double>  *combinePuppijetPFlav;
   vector<double>  *combinePuppijetQGL;
   vector<double>  *combinePuppijetGenpt;
   vector<double>  *combinePuppijetGeneta;
   vector<double>  *combinePuppijetGenphi;
   vector<double>  *combinePuppijetGenm;
   vector<double>  *combinePuppijetBtagSF;
   vector<double>  *combinePuppijetBtagSFUp;
   vector<double>  *combinePuppijetBtagSFDown;
   vector<double>  *combinePuppijetBtagMVASF;
   vector<double>  *combinePuppijetBtagMVASFUp;
   vector<double>  *combinePuppijetBtagMVASFDown;
   Double_t        PuppijetPuppijetdphi;
   Double_t        Puppijetmetdphimin;
   Double_t        Puppijetmumetdphimin;
   Double_t        Puppijetelmetdphimin;
   Double_t        Puppijetphmetdphimin;
   Double_t        incPuppijetmetdphimin;
   Double_t        incPuppijetmumetdphimin;
   Double_t        incPuppijetelmetdphimin;
   Double_t        incPuppijetphmetdphimin;
   Double_t        Puppijetmetdphimin4;
   Double_t        Puppijetmumetdphimin4;
   Double_t        Puppijetelmetdphimin4;
   Double_t        Puppijetphmetdphimin4;
   Double_t        incPuppijetmetdphimin4;
   Double_t        incPuppijetmumetdphimin4;
   Double_t        incPuppijetelmetdphimin4;
   Double_t        incPuppijetphmetdphimin4;
   Double_t        Puppiht;
   Int_t           mu1pid;
   Double_t        mu1pt;
   Double_t        mu1eta;
   Double_t        mu1phi;
   Double_t        mu1pfpt;
   Double_t        mu1pfeta;
   Double_t        mu1pfphi;
   Int_t           mu1id;
   Int_t           mu1idm;
   Int_t           mu1idt;
   Double_t        mu1iso;
   Int_t           mu2pid;
   Double_t        mu2pt;
   Double_t        mu2eta;
   Double_t        mu2phi;
   Double_t        mu2pfpt;
   Double_t        mu2pfeta;
   Double_t        mu2pfphi;
   Int_t           mu2id;
   Int_t           mu2idm;
   Int_t           mu2idt;
   Double_t        mu2iso;
   Int_t           el1pid;
   Double_t        el1pt;
   Double_t        el1eta;
   Double_t        el1phi;
   Int_t           el1id;
   Int_t           el1idl;
   Int_t           el2pid;
   Double_t        el2pt;
   Double_t        el2eta;
   Double_t        el2phi;
   Int_t           el2id;
   Int_t           el2idl;
   Int_t           tau1pid;
   Double_t        tau1pt;
   Double_t        tau1eta;
   Double_t        tau1phi;
   Double_t        tau1iso;
   Double_t        tau1m;
   Int_t           tau2pid;
   Double_t        tau2pt;
   Double_t        tau2eta;
   Double_t        tau2phi;
   Double_t        tau2iso;
   Double_t        tau2m;
   Double_t        zmass;
   Double_t        zpt;
   Double_t        zeta;
   Double_t        zphi;
   Double_t        wmt;
   Double_t        emumass;
   Double_t        emupt;
   Double_t        emueta;
   Double_t        emuphi;
   Double_t        zeemass;
   Double_t        zeept;
   Double_t        zeeeta;
   Double_t        zeephi;
   Double_t        wemt;
   Double_t        zttmass;
   Double_t        zttpt;
   Double_t        ztteta;
   Double_t        zttphi;
   Double_t        wtmt;
   Double_t        taumumass;
   Double_t        taumupt;
   Double_t        taumueta;
   Double_t        taumuphi;
   Double_t        tauemass;
   Double_t        tauept;
   Double_t        taueeta;
   Double_t        tauephi;
   Int_t           phidl;
   Int_t           phidm;
   Int_t           phidt;
   Int_t           phidh;
   Double_t        phpt;
   Double_t        pheta;
   Double_t        phphi;
   UInt_t          nphotonsPurity;
   Double_t        rho;
   Double_t        phPHiso;
   Double_t        phCHiso;
   Double_t        phPuritypt;
   Double_t        pPurityheta;
   Double_t        phPurityphi;
   Double_t        phPurityPHiso;
   Double_t        phPurityRND04PHiso;
   Double_t        phPurityRND08PHiso;
   Double_t        phPurityCHiso;
   Double_t        phPurityRND04CHiso;
   Double_t        phPurityRND08CHiso;
   Double_t        phNHiso;
   Double_t        phPurityNHiso;
   Double_t        phPuritysieie;
   Double_t        phPurityhoe;
   Double_t        phPurityEA;
   Double_t        phPurityEAEGamma;
   Double_t        phPurityElectronVeto;
   Int_t           wzid;
   Double_t        wzmass;
   Double_t        wzmt;
   Double_t        wzpt;
   Double_t        wzeta;
   Double_t        wzphi;
   Double_t        wzmothid;
   Int_t           ismatch;
   Int_t           isdirect;
   Int_t           l1id;
   Double_t        l1pt;
   Double_t        l1eta;
   Double_t        l1phi;
   Int_t           l2id;
   Double_t        l2pt;
   Double_t        l2eta;
   Double_t        l2phi;
   Int_t           wzid_h;
   Double_t        wzmass_h;
   Double_t        wzmt_h;
   Double_t        wzpt_h;
   Double_t        wzeta_h;
   Double_t        wzphi_h;
   Int_t           q1id;
   Double_t        q1pt;
   Double_t        q1eta;
   Double_t        q1phi;
   Int_t           q2id;
   Double_t        q2pt;
   Double_t        q2eta;
   Double_t        q2phi;
   Double_t        topmass;
   Double_t        toppt;
   Double_t        topeta;
   Double_t        topphi;
   Double_t        atopmass;
   Double_t        atoppt;
   Double_t        atopeta;
   Double_t        atopphi;
   Int_t           parid;
   Double_t        parpt;
   Double_t        pareta;
   Double_t        parphi;
   Int_t           ancid;
   Double_t        ancpt;
   Double_t        anceta;
   Double_t        ancphi;
   Double_t        dmmass;
   Double_t        dmpt;
   Double_t        dmeta;
   Double_t        dmphi;
   Int_t           dmid;
   Int_t           dmX1id;
   Double_t        dmX1pt;
   Double_t        dmX1eta;
   Double_t        dmX1phi;
   Double_t        dmX1mass;
   Int_t           dmX2id;
   Double_t        dmX2pt;
   Double_t        dmX2eta;
   Double_t        dmX2phi;
   Double_t        dmX2mass;
   Double_t        samplemedM;
   Double_t        sampledmM;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_wgt;   //!
   TBranch        *b_puwgt;   //!
   TBranch        *b_puobs;   //!
   TBranch        *b_putrue;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_hltmet90;   //!
   TBranch        *b_hltmet100;   //!
   TBranch        *b_hltmet110;   //!
   TBranch        *b_hltmet120;   //!
   TBranch        *b_hltmetwithmu90;   //!
   TBranch        *b_hltmetwithmu100;   //!
   TBranch        *b_hltmetwithmu110;   //!
   TBranch        *b_hltmetwithmu120;   //!
   TBranch        *b_hltmetwithmu170;   //!
   TBranch        *b_hltmetwithmu300;   //!
   TBranch        *b_hltjetmet90;   //!
   TBranch        *b_hltjetmet100;   //!
   TBranch        *b_hltjetmet110;   //!
   TBranch        *b_hltphoton50;   //!
   TBranch        *b_hltphoton75;   //!
   TBranch        *b_hltphoton90;   //!
   TBranch        *b_hltphoton120;   //!
   TBranch        *b_hltphoton165;   //!
   TBranch        *b_hltphoton175;   //!
   TBranch        *b_hltdoublemu;   //!
   TBranch        *b_hltsinglemu;   //!
   TBranch        *b_hltdoubleel;   //!
   TBranch        *b_hltsingleel;   //!
   TBranch        *b_hltsingleel27;   //!
   TBranch        *b_hltelnoiso;   //!
   TBranch        *b_hltPFHT125;   //!
   TBranch        *b_hltPFHT200;   //!
   TBranch        *b_hltPFHT250;   //!
   TBranch        *b_hltPFHT300;   //!
   TBranch        *b_hltPFHT350;   //!
   TBranch        *b_hltPFHT400;   //!
   TBranch        *b_hltPFHT475;   //!
   TBranch        *b_hltPFHT600;   //!
   TBranch        *b_hltPFHT650;   //!
   TBranch        *b_hltPFHT800;   //!
   TBranch        *b_hltPFHT900;   //!
   TBranch        *b_hltCaloJet500;   //!
   TBranch        *b_hltEcalHT800;   //!
   TBranch        *b_hltPFJet450;   //!
   TBranch        *b_hltPFJet500;   //!
   TBranch        *b_hltphoton90PFHT500;   //!
   TBranch        *b_hltphoton90PFHT600;   //!
   TBranch        *b_pswgt_ph50;   //!
   TBranch        *b_pswgt_ph75;   //!
   TBranch        *b_pswgt_ph90;   //!
   TBranch        *b_pswgt_ph120;   //!
   TBranch        *b_pswgt_ht125;   //!
   TBranch        *b_pswgt_ht200;   //!
   TBranch        *b_pswgt_ht250;   //!
   TBranch        *b_pswgt_ht300;   //!
   TBranch        *b_pswgt_ht350;   //!
   TBranch        *b_pswgt_ht400;   //!
   TBranch        *b_pswgt_ht475;   //!
   TBranch        *b_pswgt_ht600;   //!
   TBranch        *b_pswgt_ht650;   //!
   TBranch        *b_pswgt_ht800;   //!
   TBranch        *b_pswgt_ht900;   //!
   TBranch        *b_flagcsctight;   //!
   TBranch        *b_flaghbhenoise;   //!
   TBranch        *b_flaghbheiso;   //!
   TBranch        *b_flageebadsc;   //!
   TBranch        *b_flagecaltp;   //!
   TBranch        *b_flaggoodvertices;   //!
   TBranch        *b_flagglobaltighthalo;   //!
   TBranch        *b_flagbadchpf;   //!
   TBranch        *b_flagbadpfmu;   //!
   TBranch        *b_nmuons;   //!
   TBranch        *b_nelectrons;   //!
   TBranch        *b_nlooseelectrons;   //!
   TBranch        *b_ntightmuons;   //!
   TBranch        *b_nhighptmuons;   //!
   TBranch        *b_ntightelectrons;   //!
   TBranch        *b_nheepelectrons;   //!
   TBranch        *b_ntaus;   //!
   TBranch        *b_ntausraw;   //!
   TBranch        *b_nphotons;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_njetsinc;   //!
   TBranch        *b_nbjets;   //!
   TBranch        *b_nbjetslowpt;   //!
   TBranch        *b_nbjetsMVA;   //!
   TBranch        *b_nbjetsMVAlowpt;   //!
   TBranch        *b_npuppijets;   //!
   TBranch        *b_npuppijetsinc;   //!
   TBranch        *b_npuppibjets;   //!
   TBranch        *b_npuppibjetslowpt;   //!
   TBranch        *b_npuppibjetsMVA;   //!
   TBranch        *b_npuppibjetsMVAlowpt;   //!
   TBranch        *b_pfmet;   //!
   TBranch        *b_pfmetphi;   //!
   TBranch        *b_t1pfmet;   //!
   TBranch        *b_t1pfmetphi;   //!
   TBranch        *b_calomet;   //!
   TBranch        *b_calometphi;   //!
   TBranch        *b_mumet;   //!
   TBranch        *b_mumetphi;   //!
   TBranch        *b_t1mumet;   //!
   TBranch        *b_t1mumetphi;   //!
   TBranch        *b_elmet;   //!
   TBranch        *b_elmetphi;   //!
   TBranch        *b_t1elmet;   //!
   TBranch        *b_t1elmetphi;   //!
   TBranch        *b_phmet;   //!
   TBranch        *b_phmetphi;   //!
   TBranch        *b_t1phmet;   //!
   TBranch        *b_t1phmetphi;   //!
   TBranch        *b_taumet;   //!
   TBranch        *b_taumetphi;   //!
   TBranch        *b_t1taumet;   //!
   TBranch        *b_t1taumetphi;   //!
   TBranch        *b_genmet;   //!
   TBranch        *b_genmetphi;   //!
   TBranch        *b_pfmethadronHF;   //!
   TBranch        *b_pfmethadronHFphi;   //!
   TBranch        *b_pfmetegammaHF;   //!
   TBranch        *b_pfmetegammaHFphi;   //!
   TBranch        *b_pfmetchargedhadron;   //!
   TBranch        *b_pfmetchargedhadronphi;   //!
   TBranch        *b_pfmetneutralhadron;   //!
   TBranch        *b_pfmetneutralhadronphi;   //!
   TBranch        *b_pfmetelectrons;   //!
   TBranch        *b_pfmetelectronsphi;   //!
   TBranch        *b_pfmetmuons;   //!
   TBranch        *b_pfmetmuonsphi;   //!
   TBranch        *b_pfmetphotons;   //!
   TBranch        *b_pfmetphotonsphi;   //!
   TBranch        *b_pfmetunclustered;   //!
   TBranch        *b_pfmetunclusteredphi;   //!
   TBranch        *b_t1pfmetMuEnUp;   //!
   TBranch        *b_t1pfmetMuEnDown;   //!
   TBranch        *b_t1pfmetElEnUp;   //!
   TBranch        *b_t1pfmetElEnDown;   //!
   TBranch        *b_t1pfmetPhoEnUp;   //!
   TBranch        *b_t1pfmetPhoEnDown;   //!
   TBranch        *b_t1pfmetTauEnUp;   //!
   TBranch        *b_t1pfmetTauEnDown;   //!
   TBranch        *b_t1pfmetJetEnUp;   //!
   TBranch        *b_t1pfmetJetEnDown;   //!
   TBranch        *b_t1pfmetJetResUp;   //!
   TBranch        *b_t1pfmetJetResDown;   //!
   TBranch        *b_t1pfmetUncEnUp;   //!
   TBranch        *b_t1pfmetUncEnDown;   //!
   TBranch        *b_t1pfmetJetSmear;   //!
   TBranch        *b_t1pfmetXY;   //!
   TBranch        *b_t1pfmetMuEnUpPhi;   //!
   TBranch        *b_t1pfmetMuEnDownPhi;   //!
   TBranch        *b_t1pfmetElEnUpPhi;   //!
   TBranch        *b_t1pfmetElEnDownPhi;   //!
   TBranch        *b_t1pfmetPhoEnUpPhi;   //!
   TBranch        *b_t1pfmetPhoEnDownPhi;   //!
   TBranch        *b_t1pfmetTauEnUpPhi;   //!
   TBranch        *b_t1pfmetTauEnDownPhi;   //!
   TBranch        *b_t1pfmetJetEnUpPhi;   //!
   TBranch        *b_t1pfmetJetEnDownPhi;   //!
   TBranch        *b_t1pfmetJetResUpPhi;   //!
   TBranch        *b_t1pfmetJetResDownPhi;   //!
   TBranch        *b_t1pfmetUncEnUpPhi;   //!
   TBranch        *b_t1pfmetUncEnDownPhi;   //!
   TBranch        *b_t1pfmetJetSmearPhi;   //!
   TBranch        *b_t1pfmetXYPhi;   //!
   TBranch        *b_puppipfmet;   //!
   TBranch        *b_puppipfmetphi;   //!
   TBranch        *b_puppit1pfmet;   //!
   TBranch        *b_puppit1pfmetphi;   //!
   TBranch        *b_puppimumet;   //!
   TBranch        *b_puppimumetphi;   //!
   TBranch        *b_puppit1mumet;   //!
   TBranch        *b_puppit1mumetphi;   //!
   TBranch        *b_puppielmet;   //!
   TBranch        *b_elmetphi;   //!
   TBranch        *b_puppit1elmet;   //!
   TBranch        *b_puppit1elmetphi;   //!
   TBranch        *b_puppiphmet;   //!
   TBranch        *b_puppiphmetphi;   //!
   TBranch        *b_puppit1phmet;   //!
   TBranch        *b_puppit1phmetphi;   //!
   TBranch        *b_puppit1pfmetMuEnUp;   //!
   TBranch        *b_puppit1pfmetMuEnDown;   //!
   TBranch        *b_puppit1pfmetElEnUp;   //!
   TBranch        *b_puppit1pfmetElEnDown;   //!
   TBranch        *b_puppit1pfmetPhoEnUp;   //!
   TBranch        *b_puppit1pfmetPhoEnDown;   //!
   TBranch        *b_puppit1pfmetTauEnUp;   //!
   TBranch        *b_puppit1pfmetTauEnDown;   //!
   TBranch        *b_puppit1pfmetJetEnUp;   //!
   TBranch        *b_puppit1pfmetJetEnDown;   //!
   TBranch        *b_puppit1pfmetJetResUp;   //!
   TBranch        *b_puppit1pfmetJetResDown;   //!
   TBranch        *b_puppit1pfmetUncEnUp;   //!
   TBranch        *b_puppit1pfmetUncEnDown;   //!
   TBranch        *b_puppit1pfmetMuEnUpPhi;   //!
   TBranch        *b_puppit1pfmetMuEnDownPhi;   //!
   TBranch        *b_puppit1pfmetElEnUpPhi;   //!
   TBranch        *b_puppit1pfmetElEnDownPhi;   //!
   TBranch        *b_puppit1pfmetPhoEnUpPhi;   //!
   TBranch        *b_puppit1pfmetPhoEnDownPhi;   //!
   TBranch        *b_puppit1pfmetTauEnUpPhi;   //!
   TBranch        *b_puppit1pfmetTauEnDownPhi;   //!
   TBranch        *b_puppit1pfmetJetEnUpPhi;   //!
   TBranch        *b_puppit1pfmetJetEnDownPhi;   //!
   TBranch        *b_puppit1pfmetJetResUpPhi;   //!
   TBranch        *b_puppit1pfmetJetResDownPhi;   //!
   TBranch        *b_puppit1pfmetUncEnUpPhi;   //!
   TBranch        *b_puppit1pfmetUncEnDownPhi;   //!
   TBranch        *b_combinejetpt;   //!
   TBranch        *b_combinejeteta;   //!
   TBranch        *b_combinejetphi;   //!
   TBranch        *b_combinejetm;   //!
   TBranch        *b_combinejetbtag;   //!
   TBranch        *b_combinejetbtagMVA;   //!
   TBranch        *b_combinejetCHfrac;   //!
   TBranch        *b_combinejetNHfrac;   //!
   TBranch        *b_combinejetEMfrac;   //!
   TBranch        *b_combinejetCEMfrac;   //!
   TBranch        *b_combinejetmetdphi;   //!
   TBranch        *b_combinejetHFlav;   //!
   TBranch        *b_combinejetPFlav;   //!
   TBranch        *b_combinejetQGL;   //!
   TBranch        *b_combinejetPUID;   //!
   TBranch        *b_combinejetPassPUID;   //!
   TBranch        *b_combinejetGenpt;   //!
   TBranch        *b_combinejetGeneta;   //!
   TBranch        *b_combinejetGenphi;   //!
   TBranch        *b_combinejetGenm;   //!
   TBranch        *b_combinejetBtagSF;   //!
   TBranch        *b_combinejetBtagSFUp;   //!
   TBranch        *b_combinejetBtagSFDown;   //!
   TBranch        *b_combinejetBtagMVASF;   //!
   TBranch        *b_combinejetBtagMVASFUp;   //!
   TBranch        *b_combinejetBtagMVASFDown;   //!
   TBranch        *b_jetjetdphi;   //!
   TBranch        *b_incjetmetdphimin;   //!
   TBranch        *b_incjetmumetdphimin;   //!
   TBranch        *b_incjetelmetdphimin;   //!
   TBranch        *b_incjetphmetdphimin;   //!
   TBranch        *b_alljetmetdphimin;   //!
   TBranch        *b_alljetmumetdphimin;   //!
   TBranch        *b_alljetelmetdphimin;   //!
   TBranch        *b_alljetphmetdphimin;   //!
   TBranch        *b_incjetmetdphimin4;   //!
   TBranch        *b_incjetmumetdphimin4;   //!
   TBranch        *b_incjetelmetdphimin4;   //!
   TBranch        *b_incjetphmetdphimin4;   //!
   TBranch        *b_alljetmetdphimin4;   //!
   TBranch        *b_alljetmumetdphimin4;   //!
   TBranch        *b_alljetelmetdphimin4;   //!
   TBranch        *b_alljetphmetdphimin4;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_htinc;   //!
   TBranch        *b_ht30;   //!
   TBranch        *b_combinePuppijetpt;   //!
   TBranch        *b_combinePuppijeteta;   //!
   TBranch        *b_combinePuppijetphi;   //!
   TBranch        *b_combinePuppijetm;   //!
   TBranch        *b_combinePuppijetbtag;   //!
   TBranch        *b_combinePuppijetbtagMVA;   //!
   TBranch        *b_combinePuppijetCHfrac;   //!
   TBranch        *b_combinePuppijetNHfrac;   //!
   TBranch        *b_combinePuppijetEMfrac;   //!
   TBranch        *b_combinePuppijetCEMfrac;   //!
   TBranch        *b_combinePuppijetmetdphi;   //!
   TBranch        *b_combinePuppijetHFlav;   //!
   TBranch        *b_combinePuppijetPFlav;   //!
   TBranch        *b_combinePuppijetQGL;   //!
   TBranch        *b_combinePuppijetGenpt;   //!
   TBranch        *b_combinePuppijetGeneta;   //!
   TBranch        *b_combinePuppijetGenphi;   //!
   TBranch        *b_combinePuppijetGenm;   //!
   TBranch        *b_combinePuppijetBtagSF;   //!
   TBranch        *b_combinePuppijetBtagSFUp;   //!
   TBranch        *b_combinePuppijetBtagSFDown;   //!
   TBranch        *b_combinePuppijetBtagMVASF;   //!
   TBranch        *b_combinePuppijetBtagMVASFUp;   //!
   TBranch        *b_combinePuppijetBtagMVASFDown;   //!
   TBranch        *b_PuppijetPuppijetdphi;   //!
   TBranch        *b_Puppijetmetdphimin;   //!
   TBranch        *b_Puppijetmumetdphimin;   //!
   TBranch        *b_Puppijetelmetdphimin;   //!
   TBranch        *b_Puppijetphmetdphimin;   //!
   TBranch        *b_incPuppijetmetdphimin;   //!
   TBranch        *b_incPuppijetmumetdphimin;   //!
   TBranch        *b_incPuppijetelmetdphimin;   //!
   TBranch        *b_incPuppijetphmetdphimin;   //!
   TBranch        *b_Puppijetmetdphimin4;   //!
   TBranch        *b_Puppijetmumetdphimin4;   //!
   TBranch        *b_Puppijetelmetdphimin4;   //!
   TBranch        *b_Puppijetphmetdphimin4;   //!
   TBranch        *b_incPuppijetmetdphimin4;   //!
   TBranch        *b_incPuppijetmumetdphimin4;   //!
   TBranch        *b_incPuppijetelmetdphimin4;   //!
   TBranch        *b_incPuppijetphmetdphimin4;   //!
   TBranch        *b_Puppiht;   //!
   TBranch        *b_mu1pid;   //!
   TBranch        *b_mu1pt;   //!
   TBranch        *b_mu1eta;   //!
   TBranch        *b_mu1phi;   //!
   TBranch        *b_mu1pfpt;   //!
   TBranch        *b_mu1pfeta;   //!
   TBranch        *b_mu1pfphi;   //!
   TBranch        *b_mu1id;   //!
   TBranch        *b_mu1idm;   //!
   TBranch        *b_mu1idt;   //!
   TBranch        *b_mu1iso;   //!
   TBranch        *b_mu2pid;   //!
   TBranch        *b_mu2pt;   //!
   TBranch        *b_mu2eta;   //!
   TBranch        *b_mu2phi;   //!
   TBranch        *b_mu2pfpt;   //!
   TBranch        *b_mu2pfeta;   //!
   TBranch        *b_mu2pfphi;   //!
   TBranch        *b_mu2id;   //!
   TBranch        *b_mu2idm;   //!
   TBranch        *b_mu2idt;   //!
   TBranch        *b_mu2iso;   //!
   TBranch        *b_el1pid;   //!
   TBranch        *b_el1pt;   //!
   TBranch        *b_el1eta;   //!
   TBranch        *b_el1phi;   //!
   TBranch        *b_el1id;   //!
   TBranch        *b_el1idl;   //!
   TBranch        *b_el2pid;   //!
   TBranch        *b_el2pt;   //!
   TBranch        *b_el2eta;   //!
   TBranch        *b_el2phi;   //!
   TBranch        *b_el2id;   //!
   TBranch        *b_el2idl;   //!
   TBranch        *b_tau1pid;   //!
   TBranch        *b_tau1pt;   //!
   TBranch        *b_tau1eta;   //!
   TBranch        *b_tau1phi;   //!
   TBranch        *b_tau1iso;   //!
   TBranch        *b_tau1m;   //!
   TBranch        *b_tau2pid;   //!
   TBranch        *b_tau2pt;   //!
   TBranch        *b_tau2eta;   //!
   TBranch        *b_tau2phi;   //!
   TBranch        *b_tau2iso;   //!
   TBranch        *b_tau2m;   //!
   TBranch        *b_zmass;   //!
   TBranch        *b_zpt;   //!
   TBranch        *b_zeta;   //!
   TBranch        *b_zphi;   //!
   TBranch        *b_wmt;   //!
   TBranch        *b_emumass;   //!
   TBranch        *b_emupt;   //!
   TBranch        *b_emueta;   //!
   TBranch        *b_emuphi;   //!
   TBranch        *b_zeemass;   //!
   TBranch        *b_zeept;   //!
   TBranch        *b_zeeeta;   //!
   TBranch        *b_zeephi;   //!
   TBranch        *b_wemt;   //!
   TBranch        *b_zttmass;   //!
   TBranch        *b_zttept;   //!
   TBranch        *b_ztteta;   //!
   TBranch        *b_zttphi;   //!
   TBranch        *b_wtmt;   //!
   TBranch        *b_taumumass;   //!
   TBranch        *b_taumupt;   //!
   TBranch        *b_taumueta;   //!
   TBranch        *b_taumuphi;   //!
   TBranch        *b_tauemass;   //!
   TBranch        *b_tauept;   //!
   TBranch        *b_taueeta;   //!
   TBranch        *b_tauephi;   //!
   TBranch        *b_phidl;   //!
   TBranch        *b_phidm;   //!
   TBranch        *b_phidt;   //!
   TBranch        *b_phidh;   //!
   TBranch        *b_phpt;   //!
   TBranch        *b_pheta;   //!
   TBranch        *b_phphi;   //!
   TBranch        *b_nphotonsPurity;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_phPHiso;   //!
   TBranch        *b_phCHiso;   //!
   TBranch        *b_phPuritypt;   //!
   TBranch        *b_phPurityeta;   //!
   TBranch        *b_phPurityphi;   //!
   TBranch        *b_phPurityPHiso;   //!
   TBranch        *b_phPurityRND04PHiso;   //!
   TBranch        *b_phPurityRND08PHiso;   //!
   TBranch        *b_phPurityCHiso;   //!
   TBranch        *b_phPurityRND04CHiso;   //!
   TBranch        *b_phPurityRND08CHiso;   //!
   TBranch        *b_phNHiso;   //!
   TBranch        *b_phPurityNHiso;   //!
   TBranch        *b_phPuritysieie;   //!
   TBranch        *b_phPurityhoe;   //!
   TBranch        *b_phPurityEA;   //!
   TBranch        *b_phPurityEAEGamma;   //!
   TBranch        *b_phPurityElectronVeto;   //!
   TBranch        *b_wzid;   //!
   TBranch        *b_wzmass;   //!
   TBranch        *b_wzmt;   //!
   TBranch        *b_wzpt;   //!
   TBranch        *b_wzeta;   //!
   TBranch        *b_wzphi;   //!
   TBranch        *b_wzmothid;   //!
   TBranch        *b_ismatch;   //!
   TBranch        *b_isdirect;   //!
   TBranch        *b_l1id;   //!
   TBranch        *b_l1pt;   //!
   TBranch        *b_l1eta;   //!
   TBranch        *b_l1phi;   //!
   TBranch        *b_l2id;   //!
   TBranch        *b_l2pt;   //!
   TBranch        *b_l2eta;   //!
   TBranch        *b_l2phi;   //!
   TBranch        *b_wzid_h;   //!
   TBranch        *b_wzmass_h;   //!
   TBranch        *b_wzmt_h;   //!
   TBranch        *b_wzpt_h;   //!
   TBranch        *b_wzeta_h;   //!
   TBranch        *b_wzphi_h;   //!
   TBranch        *b_q1id;   //!
   TBranch        *b_q1pt;   //!
   TBranch        *b_q1eta;   //!
   TBranch        *b_q1phi;   //!
   TBranch        *b_q2id;   //!
   TBranch        *b_q2pt;   //!
   TBranch        *b_q2eta;   //!
   TBranch        *b_q2phi;   //!
   TBranch        *b_topmass;   //!
   TBranch        *b_toppt;   //!
   TBranch        *b_topeta;   //!
   TBranch        *b_topphi;   //!
   TBranch        *b_atopmass;   //!
   TBranch        *b_atoppt;   //!
   TBranch        *b_atopeta;   //!
   TBranch        *b_atopphi;   //!
   TBranch        *b_parid;   //!
   TBranch        *b_parpt;   //!
   TBranch        *b_pareta;   //!
   TBranch        *b_parphi;   //!
   TBranch        *b_ancid;   //!
   TBranch        *b_ancpt;   //!
   TBranch        *b_anceta;   //!
   TBranch        *b_ancphi;   //!
   TBranch        *b_dmmass;   //!
   TBranch        *b_dmpt;   //!
   TBranch        *b_dmeta;   //!
   TBranch        *b_dmphi;   //!
   TBranch        *b_dmid;   //!
   TBranch        *b_dmX1id;   //!
   TBranch        *b_dmX1pt;   //!
   TBranch        *b_dmX1eta;   //!
   TBranch        *b_dmX1phi;   //!
   TBranch        *b_dmX1mass;   //!
   TBranch        *b_dmX2id;   //!
   TBranch        *b_dmX2pt;   //!
   TBranch        *b_dmX2eta;   //!
   TBranch        *b_dmX2phi;   //!
   TBranch        *b_dmX2mass;   //!
   TBranch        *b_samplemedM;   //!
   TBranch        *b_sampledmM;   //!

   datatree(TTree *tree=0);
   virtual ~datatree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef datatree_cxx
datatree::datatree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("datatree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("datatree.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("datatree.root:/tree");
      dir->GetObject("tree",tree);

   }
   Init(tree);
}

datatree::~datatree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t datatree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t datatree::LoadTree(Long64_t entry)
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

void datatree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   combinejetpt = 0;
   combinejeteta = 0;
   combinejetphi = 0;
   combinejetm = 0;
   combinejetbtag = 0;
   combinejetbtagMVA = 0;
   combinejetCHfrac = 0;
   combinejetNHfrac = 0;
   combinejetEMfrac = 0;
   combinejetCEMfrac = 0;
   combinejetmetdphi = 0;
   combinejetHFlav = 0;
   combinejetPFlav = 0;
   combinejetQGL = 0;
   combinejetPUID = 0;
   combinejetPassPUID = 0;
   combinejetGenpt = 0;
   combinejetGeneta = 0;
   combinejetGenphi = 0;
   combinejetGenm = 0;
   combinejetBtagSF = 0;
   combinejetBtagSFUp = 0;
   combinejetBtagSFDown = 0;
   combinejetBtagMVASF = 0;
   combinejetBtagMVASFUp = 0;
   combinejetBtagMVASFDown = 0;
   combinePuppijetpt = 0;
   combinePuppijeteta = 0;
   combinePuppijetphi = 0;
   combinePuppijetm = 0;
   combinePuppijetbtag = 0;
   combinePuppijetbtagMVA = 0;
   combinePuppijetCHfrac = 0;
   combinePuppijetNHfrac = 0;
   combinePuppijetEMfrac = 0;
   combinePuppijetCEMfrac = 0;
   combinePuppijetmetdphi = 0;
   combinePuppijetHFlav = 0;
   combinePuppijetPFlav = 0;
   combinePuppijetQGL = 0;
   combinePuppijetGenpt = 0;
   combinePuppijetGeneta = 0;
   combinePuppijetGenphi = 0;
   combinePuppijetGenm = 0;
   combinePuppijetBtagSF = 0;
   combinePuppijetBtagSFUp = 0;
   combinePuppijetBtagSFDown = 0;
   combinePuppijetBtagMVASF = 0;
   combinePuppijetBtagMVASFUp = 0;
   combinePuppijetBtagMVASFDown = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
   fChain->SetBranchAddress("puwgt", &puwgt, &b_puwgt);
   fChain->SetBranchAddress("puobs", &puobs, &b_puobs);
   fChain->SetBranchAddress("putrue", &putrue, &b_putrue);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("hltmet90", &hltmet90, &b_hltmet90);
   fChain->SetBranchAddress("hltmet100", &hltmet100, &b_hltmet100);
   fChain->SetBranchAddress("hltmet110", &hltmet110, &b_hltmet110);
   fChain->SetBranchAddress("hltmet120", &hltmet120, &b_hltmet120);
   fChain->SetBranchAddress("hltmetwithmu90", &hltmetwithmu90, &b_hltmetwithmu90);
   fChain->SetBranchAddress("hltmetwithmu100", &hltmetwithmu100, &b_hltmetwithmu100);
   fChain->SetBranchAddress("hltmetwithmu110", &hltmetwithmu110, &b_hltmetwithmu110);
   fChain->SetBranchAddress("hltmetwithmu120", &hltmetwithmu120, &b_hltmetwithmu120);
   fChain->SetBranchAddress("hltmetwithmu170", &hltmetwithmu170, &b_hltmetwithmu170);
   fChain->SetBranchAddress("hltmetwithmu300", &hltmetwithmu300, &b_hltmetwithmu300);
   fChain->SetBranchAddress("hltjetmet90", &hltjetmet90, &b_hltjetmet90);
   fChain->SetBranchAddress("hltjetmet100", &hltjetmet100, &b_hltjetmet100);
   fChain->SetBranchAddress("hltjetmet110", &hltjetmet110, &b_hltjetmet110);
   fChain->SetBranchAddress("hltphoton50", &hltphoton50, &b_hltphoton50);
   fChain->SetBranchAddress("hltphoton75", &hltphoton75, &b_hltphoton75);
   fChain->SetBranchAddress("hltphoton90", &hltphoton90, &b_hltphoton90);
   fChain->SetBranchAddress("hltphoton120", &hltphoton120, &b_hltphoton120);
   fChain->SetBranchAddress("hltphoton165", &hltphoton165, &b_hltphoton165);
   fChain->SetBranchAddress("hltphoton175", &hltphoton175, &b_hltphoton175);
   fChain->SetBranchAddress("hltdoublemu", &hltdoublemu, &b_hltdoublemu);
   fChain->SetBranchAddress("hltsinglemu", &hltsinglemu, &b_hltsinglemu);
   fChain->SetBranchAddress("hltdoubleel", &hltdoubleel, &b_hltdoubleel);
   fChain->SetBranchAddress("hltsingleel", &hltsingleel, &b_hltsingleel);
   fChain->SetBranchAddress("hltsingleel27", &hltsingleel27, &b_hltsingleel27);
   fChain->SetBranchAddress("hltelnoiso", &hltelnoiso, &b_hltelnoiso);
   fChain->SetBranchAddress("hltPFHT125", &hltPFHT125, &b_hltPFHT125);
   fChain->SetBranchAddress("hltPFHT200", &hltPFHT200, &b_hltPFHT200);
   fChain->SetBranchAddress("hltPFHT250", &hltPFHT250, &b_hltPFHT250);
   fChain->SetBranchAddress("hltPFHT300", &hltPFHT300, &b_hltPFHT300);
   fChain->SetBranchAddress("hltPFHT350", &hltPFHT350, &b_hltPFHT350);
   fChain->SetBranchAddress("hltPFHT400", &hltPFHT400, &b_hltPFHT400);
   fChain->SetBranchAddress("hltPFHT475", &hltPFHT475, &b_hltPFHT475);
   fChain->SetBranchAddress("hltPFHT600", &hltPFHT600, &b_hltPFHT600);
   fChain->SetBranchAddress("hltPFHT650", &hltPFHT650, &b_hltPFHT650);
   fChain->SetBranchAddress("hltPFHT800", &hltPFHT800, &b_hltPFHT800);
   fChain->SetBranchAddress("hltPFHT900", &hltPFHT900, &b_hltPFHT900);
   fChain->SetBranchAddress("hltCaloJet500", &hltCaloJet500, &b_hltCaloJet500);
   fChain->SetBranchAddress("hltEcalHT800", &hltEcalHT800, &b_hltEcalHT800);
   fChain->SetBranchAddress("hltPFJet450", &hltPFJet450, &b_hltPFJet450);
   fChain->SetBranchAddress("hltPFJet500", &hltPFJet500, &b_hltPFJet500);
   fChain->SetBranchAddress("hltphoton90PFHT500", &hltphoton90PFHT500, &b_hltphoton90PFHT500);
   fChain->SetBranchAddress("hltphoton90PFHT600", &hltphoton90PFHT600, &b_hltphoton90PFHT600);
   fChain->SetBranchAddress("pswgt_ph50", &pswgt_ph50, &b_pswgt_ph50);
   fChain->SetBranchAddress("pswgt_ph75", &pswgt_ph75, &b_pswgt_ph75);
   fChain->SetBranchAddress("pswgt_ph90", &pswgt_ph90, &b_pswgt_ph90);
   fChain->SetBranchAddress("pswgt_ph120", &pswgt_ph120, &b_pswgt_ph120);
   fChain->SetBranchAddress("pswgt_ht125", &pswgt_ht125, &b_pswgt_ht125);
   fChain->SetBranchAddress("pswgt_ht200", &pswgt_ht200, &b_pswgt_ht200);
   fChain->SetBranchAddress("pswgt_ht250", &pswgt_ht250, &b_pswgt_ht250);
   fChain->SetBranchAddress("pswgt_ht300", &pswgt_ht300, &b_pswgt_ht300);
//    fChain->SetBranchAddress("pswgt_ht300", &pswgt_ht300, &b_pswgt_ht350);
   fChain->SetBranchAddress("pswgt_ht400", &pswgt_ht400, &b_pswgt_ht400);
   fChain->SetBranchAddress("pswgt_ht475", &pswgt_ht475, &b_pswgt_ht475);
   fChain->SetBranchAddress("pswgt_ht600", &pswgt_ht600, &b_pswgt_ht600);
   fChain->SetBranchAddress("pswgt_ht650", &pswgt_ht650, &b_pswgt_ht650);
   fChain->SetBranchAddress("pswgt_ht800", &pswgt_ht800, &b_pswgt_ht800);
   fChain->SetBranchAddress("pswgt_ht900", &pswgt_ht900, &b_pswgt_ht900);
   fChain->SetBranchAddress("flagcsctight", &flagcsctight, &b_flagcsctight);
   fChain->SetBranchAddress("flaghbhenoise", &flaghbhenoise, &b_flaghbhenoise);
   fChain->SetBranchAddress("flaghbheiso", &flaghbheiso, &b_flaghbheiso);
   fChain->SetBranchAddress("flageebadsc", &flageebadsc, &b_flageebadsc);
   fChain->SetBranchAddress("flagecaltp", &flagecaltp, &b_flagecaltp);
   fChain->SetBranchAddress("flaggoodvertices", &flaggoodvertices, &b_flaggoodvertices);
   fChain->SetBranchAddress("flagglobaltighthalo", &flagglobaltighthalo, &b_flagglobaltighthalo);
   fChain->SetBranchAddress("flagbadchpf", &flagbadchpf, &b_flagbadchpf);
   fChain->SetBranchAddress("flagbadpfmu", &flagbadpfmu, &b_flagbadpfmu);
   fChain->SetBranchAddress("nmuons", &nmuons, &b_nmuons);
   fChain->SetBranchAddress("nelectrons", &nelectrons, &b_nelectrons);
   fChain->SetBranchAddress("nlooseelectrons", &nlooseelectrons, &b_nlooseelectrons);
   fChain->SetBranchAddress("ntightmuons", &ntightmuons, &b_ntightmuons);
   fChain->SetBranchAddress("nhighptmuons", &nhighptmuons, &b_nhighptmuons);
   fChain->SetBranchAddress("ntightelectrons", &ntightelectrons, &b_ntightelectrons);
   fChain->SetBranchAddress("nheepelectrons", &nheepelectrons, &b_nheepelectrons);
   fChain->SetBranchAddress("ntaus", &ntaus, &b_ntaus);
   fChain->SetBranchAddress("ntausraw", &ntausraw, &b_ntausraw);
   fChain->SetBranchAddress("nphotons", &nphotons, &b_nphotons);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("njetsinc", &njetsinc, &b_njetsinc);
   fChain->SetBranchAddress("nbjets", &nbjets, &b_nbjets);
   fChain->SetBranchAddress("nbjetslowpt", &nbjetslowpt, &b_nbjetslowpt);
   fChain->SetBranchAddress("nbjetsMVA", &nbjetsMVA, &b_nbjetsMVA);
   fChain->SetBranchAddress("nbjetsMVAlowpt", &nbjetsMVAlowpt, &b_nbjetsMVAlowpt);
   fChain->SetBranchAddress("npuppijets", &npuppijets, &b_npuppijets);
   fChain->SetBranchAddress("npuppijetsinc", &npuppijetsinc, &b_npuppijetsinc);
   fChain->SetBranchAddress("npuppibjets", &npuppibjets, &b_npuppibjets);
   fChain->SetBranchAddress("npuppibjetslowpt", &npuppibjetslowpt, &b_npuppibjetslowpt);
   fChain->SetBranchAddress("npuppibjetsMVA", &npuppibjetsMVA, &b_npuppibjetsMVA);
   fChain->SetBranchAddress("npuppibjetsMVAlowpt", &npuppibjetsMVAlowpt, &b_npuppibjetsMVAlowpt);
   fChain->SetBranchAddress("pfmet", &pfmet, &b_pfmet);
   fChain->SetBranchAddress("pfmetphi", &pfmetphi, &b_pfmetphi);
   fChain->SetBranchAddress("t1pfmet", &t1pfmet, &b_t1pfmet);
   fChain->SetBranchAddress("t1pfmetphi", &t1pfmetphi, &b_t1pfmetphi);
   fChain->SetBranchAddress("calomet", &calomet, &b_calomet);
   fChain->SetBranchAddress("calometphi", &calometphi, &b_calometphi);
   fChain->SetBranchAddress("mumet", &mumet, &b_mumet);
   fChain->SetBranchAddress("mumetphi", &mumetphi, &b_mumetphi);
   fChain->SetBranchAddress("t1mumet", &t1mumet, &b_t1mumet);
   fChain->SetBranchAddress("t1mumetphi", &t1mumetphi, &b_t1mumetphi);
   fChain->SetBranchAddress("elmet", &elmet, &b_elmet);
   fChain->SetBranchAddress("elmetphi", &elmetphi, &b_elmetphi);
   fChain->SetBranchAddress("t1elmet", &t1elmet, &b_t1elmet);
   fChain->SetBranchAddress("t1elmetphi", &t1elmetphi, &b_t1elmetphi);
   fChain->SetBranchAddress("phmet", &phmet, &b_phmet);
   fChain->SetBranchAddress("phmetphi", &phmetphi, &b_phmetphi);
   fChain->SetBranchAddress("t1phmet", &t1phmet, &b_t1phmet);
   fChain->SetBranchAddress("t1phmetphi", &t1phmetphi, &b_t1phmetphi);
   fChain->SetBranchAddress("taumet", &taumet, &b_taumet);
   fChain->SetBranchAddress("taumetphi", &taumetphi, &b_taumetphi);
   fChain->SetBranchAddress("t1taumet", &t1taumet, &b_t1taumet);
   fChain->SetBranchAddress("t1taumetphi", &t1taumetphi, &b_t1taumetphi);
   fChain->SetBranchAddress("genmet", &genmet, &b_genmet);
   fChain->SetBranchAddress("genmetphi", &genmetphi, &b_genmetphi);
   fChain->SetBranchAddress("pfmethadronHF", &pfmethadronHF, &b_pfmethadronHF);
   fChain->SetBranchAddress("pfmethadronHFphi", &pfmethadronHFphi, &b_pfmethadronHFphi);
   fChain->SetBranchAddress("pfmetegammaHF", &pfmetegammaHF, &b_pfmetegammaHF);
   fChain->SetBranchAddress("pfmetegammaHFphi", &pfmetegammaHFphi, &b_pfmetegammaHFphi);
   fChain->SetBranchAddress("pfmetchargedhadron", &pfmetchargedhadron, &b_pfmetchargedhadron);
   fChain->SetBranchAddress("pfmetchargedhadronphi", &pfmetchargedhadronphi, &b_pfmetchargedhadronphi);
   fChain->SetBranchAddress("pfmetneutralhadron", &pfmetneutralhadron, &b_pfmetneutralhadron);
   fChain->SetBranchAddress("pfmetneutralhadronphi", &pfmetneutralhadronphi, &b_pfmetneutralhadronphi);
   fChain->SetBranchAddress("pfmetelectrons", &pfmetelectrons, &b_pfmetelectrons);
   fChain->SetBranchAddress("pfmetelectronsphi", &pfmetelectronsphi, &b_pfmetelectronsphi);
   fChain->SetBranchAddress("pfmetmuons", &pfmetmuons, &b_pfmetmuons);
   fChain->SetBranchAddress("pfmetmuonsphi", &pfmetmuonsphi, &b_pfmetmuonsphi);
   fChain->SetBranchAddress("pfmetphotons", &pfmetphotons, &b_pfmetphotons);
   fChain->SetBranchAddress("pfmetphotonsphi", &pfmetphotonsphi, &b_pfmetphotonsphi);
   fChain->SetBranchAddress("pfmetunclustered", &pfmetunclustered, &b_pfmetunclustered);
   fChain->SetBranchAddress("pfmetunclusteredphi", &pfmetunclusteredphi, &b_pfmetunclusteredphi);
   fChain->SetBranchAddress("t1pfmetMuEnUp", &t1pfmetMuEnUp, &b_t1pfmetMuEnUp);
   fChain->SetBranchAddress("t1pfmetMuEnDown", &t1pfmetMuEnDown, &b_t1pfmetMuEnDown);
   fChain->SetBranchAddress("t1pfmetElEnUp", &t1pfmetElEnUp, &b_t1pfmetElEnUp);
   fChain->SetBranchAddress("t1pfmetElEnDown", &t1pfmetElEnDown, &b_t1pfmetElEnDown);
   fChain->SetBranchAddress("t1pfmetPhoEnUp", &t1pfmetPhoEnUp, &b_t1pfmetPhoEnUp);
   fChain->SetBranchAddress("t1pfmetPhoEnDown", &t1pfmetPhoEnDown, &b_t1pfmetPhoEnDown);
   fChain->SetBranchAddress("t1pfmetTauEnUp", &t1pfmetTauEnUp, &b_t1pfmetTauEnUp);
   fChain->SetBranchAddress("t1pfmetTauEnDown", &t1pfmetTauEnDown, &b_t1pfmetTauEnDown);
   fChain->SetBranchAddress("t1pfmetJetEnUp", &t1pfmetJetEnUp, &b_t1pfmetJetEnUp);
   fChain->SetBranchAddress("t1pfmetJetEnDown", &t1pfmetJetEnDown, &b_t1pfmetJetEnDown);
   fChain->SetBranchAddress("t1pfmetJetResUp", &t1pfmetJetResUp, &b_t1pfmetJetResUp);
   fChain->SetBranchAddress("t1pfmetJetResDown", &t1pfmetJetResDown, &b_t1pfmetJetResDown);
   fChain->SetBranchAddress("t1pfmetUncEnUp", &t1pfmetUncEnUp, &b_t1pfmetUncEnUp);
   fChain->SetBranchAddress("t1pfmetUncEnDown", &t1pfmetUncEnDown, &b_t1pfmetUncEnDown);
   fChain->SetBranchAddress("t1pfmetJetSmear", &t1pfmetJetSmear, &b_t1pfmetJetSmear);
   fChain->SetBranchAddress("t1pfmetXY", &t1pfmetXY, &b_t1pfmetXY);
   fChain->SetBranchAddress("t1pfmetMuEnUpPhi", &t1pfmetMuEnUpPhi, &b_t1pfmetMuEnUpPhi);
   fChain->SetBranchAddress("t1pfmetMuEnDownPhi", &t1pfmetMuEnDownPhi, &b_t1pfmetMuEnDownPhi);
   fChain->SetBranchAddress("t1pfmetElEnUpPhi", &t1pfmetElEnUpPhi, &b_t1pfmetElEnUpPhi);
   fChain->SetBranchAddress("t1pfmetElEnDownPhi", &t1pfmetElEnDownPhi, &b_t1pfmetElEnDownPhi);
   fChain->SetBranchAddress("t1pfmetPhoEnUpPhi", &t1pfmetPhoEnUpPhi, &b_t1pfmetPhoEnUpPhi);
   fChain->SetBranchAddress("t1pfmetPhoEnDownPhi", &t1pfmetPhoEnDownPhi, &b_t1pfmetPhoEnDownPhi);
   fChain->SetBranchAddress("t1pfmetTauEnUpPhi", &t1pfmetTauEnUpPhi, &b_t1pfmetTauEnUpPhi);
   fChain->SetBranchAddress("t1pfmetTauEnDownPhi", &t1pfmetTauEnDownPhi, &b_t1pfmetTauEnDownPhi);
   fChain->SetBranchAddress("t1pfmetJetEnUpPhi", &t1pfmetJetEnUpPhi, &b_t1pfmetJetEnUpPhi);
   fChain->SetBranchAddress("t1pfmetJetEnDownPhi", &t1pfmetJetEnDownPhi, &b_t1pfmetJetEnDownPhi);
   fChain->SetBranchAddress("t1pfmetJetResUpPhi", &t1pfmetJetResUpPhi, &b_t1pfmetJetResUpPhi);
   fChain->SetBranchAddress("t1pfmetJetResDownPhi", &t1pfmetJetResDownPhi, &b_t1pfmetJetResDownPhi);
   fChain->SetBranchAddress("t1pfmetUncEnUpPhi", &t1pfmetUncEnUpPhi, &b_t1pfmetUncEnUpPhi);
   fChain->SetBranchAddress("t1pfmetUncEnDownPhi", &t1pfmetUncEnDownPhi, &b_t1pfmetUncEnDownPhi);
   fChain->SetBranchAddress("t1pfmetJetSmearPhi", &t1pfmetJetSmearPhi, &b_t1pfmetJetSmearPhi);
   fChain->SetBranchAddress("t1pfmetXYPhi", &t1pfmetXYPhi, &b_t1pfmetXYPhi);
   fChain->SetBranchAddress("puppipfmet", &puppipfmet, &b_puppipfmet);
   fChain->SetBranchAddress("puppipfmetphi", &puppipfmetphi, &b_puppipfmetphi);
   fChain->SetBranchAddress("puppit1pfmet", &puppit1pfmet, &b_puppit1pfmet);
   fChain->SetBranchAddress("puppit1pfmetphi", &puppit1pfmetphi, &b_puppit1pfmetphi);
   fChain->SetBranchAddress("puppimumet", &puppimumet, &b_puppimumet);
   fChain->SetBranchAddress("puppimumetphi", &puppimumetphi, &b_puppimumetphi);
   fChain->SetBranchAddress("puppit1mumet", &puppit1mumet, &b_puppit1mumet);
   fChain->SetBranchAddress("puppit1mumetphi", &puppit1mumetphi, &b_puppit1mumetphi);
   fChain->SetBranchAddress("puppielmet", &puppielmet, &b_puppielmet);
   fChain->SetBranchAddress("puppielmetphi", &puppielmetphi, &b_elmetphi);
   fChain->SetBranchAddress("puppit1elmet", &puppit1elmet, &b_puppit1elmet);
   fChain->SetBranchAddress("puppit1elmetphi", &puppit1elmetphi, &b_puppit1elmetphi);
   fChain->SetBranchAddress("puppiphmet", &puppiphmet, &b_puppiphmet);
   fChain->SetBranchAddress("puppiphmetphi", &puppiphmetphi, &b_puppiphmetphi);
   fChain->SetBranchAddress("puppit1phmet", &puppit1phmet, &b_puppit1phmet);
   fChain->SetBranchAddress("puppit1phmetphi", &puppit1phmetphi, &b_puppit1phmetphi);
   fChain->SetBranchAddress("puppit1pfmetMuEnUp", &puppit1pfmetMuEnUp, &b_puppit1pfmetMuEnUp);
   fChain->SetBranchAddress("puppit1pfmetMuEnDown", &puppit1pfmetMuEnDown, &b_puppit1pfmetMuEnDown);
   fChain->SetBranchAddress("puppit1pfmetElEnUp", &puppit1pfmetElEnUp, &b_puppit1pfmetElEnUp);
   fChain->SetBranchAddress("puppit1pfmetElEnDown", &puppit1pfmetElEnDown, &b_puppit1pfmetElEnDown);
   fChain->SetBranchAddress("puppit1pfmetPhoEnUp", &puppit1pfmetPhoEnUp, &b_puppit1pfmetPhoEnUp);
   fChain->SetBranchAddress("puppit1pfmetPhoEnDown", &puppit1pfmetPhoEnDown, &b_puppit1pfmetPhoEnDown);
   fChain->SetBranchAddress("puppit1pfmetTauEnUp", &puppit1pfmetTauEnUp, &b_puppit1pfmetTauEnUp);
   fChain->SetBranchAddress("puppit1pfmetTauEnDown", &puppit1pfmetTauEnDown, &b_puppit1pfmetTauEnDown);
   fChain->SetBranchAddress("puppit1pfmetJetEnUp", &puppit1pfmetJetEnUp, &b_puppit1pfmetJetEnUp);
   fChain->SetBranchAddress("puppit1pfmetJetEnDown", &puppit1pfmetJetEnDown, &b_puppit1pfmetJetEnDown);
   fChain->SetBranchAddress("puppit1pfmetJetResUp", &puppit1pfmetJetResUp, &b_puppit1pfmetJetResUp);
   fChain->SetBranchAddress("puppit1pfmetJetResDown", &puppit1pfmetJetResDown, &b_puppit1pfmetJetResDown);
   fChain->SetBranchAddress("puppit1pfmetUncEnUp", &puppit1pfmetUncEnUp, &b_puppit1pfmetUncEnUp);
   fChain->SetBranchAddress("puppit1pfmetUncEnDown", &puppit1pfmetUncEnDown, &b_puppit1pfmetUncEnDown);
   fChain->SetBranchAddress("puppit1pfmetMuEnUpPhi", &puppit1pfmetMuEnUpPhi, &b_puppit1pfmetMuEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetMuEnDownPhi", &puppit1pfmetMuEnDownPhi, &b_puppit1pfmetMuEnDownPhi);
   fChain->SetBranchAddress("puppit1pfmetElEnUpPhi", &puppit1pfmetElEnUpPhi, &b_puppit1pfmetElEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetElEnDownPhi", &puppit1pfmetElEnDownPhi, &b_puppit1pfmetElEnDownPhi);
   fChain->SetBranchAddress("puppit1pfmetPhoEnUpPhi", &puppit1pfmetPhoEnUpPhi, &b_puppit1pfmetPhoEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetPhoEnDownPhi", &puppit1pfmetPhoEnDownPhi, &b_puppit1pfmetPhoEnDownPhi);
   fChain->SetBranchAddress("puppit1pfmetTauEnUpPhi", &puppit1pfmetTauEnUpPhi, &b_puppit1pfmetTauEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetTauEnDownPhi", &puppit1pfmetTauEnDownPhi, &b_puppit1pfmetTauEnDownPhi);
   fChain->SetBranchAddress("puppit1pfmetJetEnUpPhi", &puppit1pfmetJetEnUpPhi, &b_puppit1pfmetJetEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetJetEnDownPhi", &puppit1pfmetJetEnDownPhi, &b_puppit1pfmetJetEnDownPhi);
   fChain->SetBranchAddress("puppit1pfmetJetResUpPhi", &puppit1pfmetJetResUpPhi, &b_puppit1pfmetJetResUpPhi);
   fChain->SetBranchAddress("puppit1pfmetJetResDownPhi", &puppit1pfmetJetResDownPhi, &b_puppit1pfmetJetResDownPhi);
   fChain->SetBranchAddress("puppit1pfmetUncEnUpPhi", &puppit1pfmetUncEnUpPhi, &b_puppit1pfmetUncEnUpPhi);
   fChain->SetBranchAddress("puppit1pfmetUncEnDownPhi", &puppit1pfmetUncEnDownPhi, &b_puppit1pfmetUncEnDownPhi);
   fChain->SetBranchAddress("combinejetpt", &combinejetpt, &b_combinejetpt);
   fChain->SetBranchAddress("combinejeteta", &combinejeteta, &b_combinejeteta);
   fChain->SetBranchAddress("combinejetphi", &combinejetphi, &b_combinejetphi);
   fChain->SetBranchAddress("combinejetm", &combinejetm, &b_combinejetm);
   fChain->SetBranchAddress("combinejetbtag", &combinejetbtag, &b_combinejetbtag);
   fChain->SetBranchAddress("combinejetbtagMVA", &combinejetbtagMVA, &b_combinejetbtagMVA);
   fChain->SetBranchAddress("combinejetCHfrac", &combinejetCHfrac, &b_combinejetCHfrac);
   fChain->SetBranchAddress("combinejetNHfrac", &combinejetNHfrac, &b_combinejetNHfrac);
   fChain->SetBranchAddress("combinejetEMfrac", &combinejetEMfrac, &b_combinejetEMfrac);
   fChain->SetBranchAddress("combinejetCEMfrac", &combinejetCEMfrac, &b_combinejetCEMfrac);
   fChain->SetBranchAddress("combinejetmetdphi", &combinejetmetdphi, &b_combinejetmetdphi);
   fChain->SetBranchAddress("combinejetHFlav", &combinejetHFlav, &b_combinejetHFlav);
   fChain->SetBranchAddress("combinejetPFlav", &combinejetPFlav, &b_combinejetPFlav);
   fChain->SetBranchAddress("combinejetQGL", &combinejetQGL, &b_combinejetQGL);
   fChain->SetBranchAddress("combinejetPUID", &combinejetPUID, &b_combinejetPUID);
   fChain->SetBranchAddress("combinejetPassPUID", &combinejetPassPUID, &b_combinejetPassPUID);
   fChain->SetBranchAddress("combinejetGenpt", &combinejetGenpt, &b_combinejetGenpt);
   fChain->SetBranchAddress("combinejetGeneta", &combinejetGeneta, &b_combinejetGeneta);
   fChain->SetBranchAddress("combinejetGenphi", &combinejetGenphi, &b_combinejetGenphi);
   fChain->SetBranchAddress("combinejetGenm", &combinejetGenm, &b_combinejetGenm);
   fChain->SetBranchAddress("combinejetBtagSF", &combinejetBtagSF, &b_combinejetBtagSF);
   fChain->SetBranchAddress("combinejetBtagSFUp", &combinejetBtagSFUp, &b_combinejetBtagSFUp);
   fChain->SetBranchAddress("combinejetBtagSFDown", &combinejetBtagSFDown, &b_combinejetBtagSFDown);
   fChain->SetBranchAddress("combinejetBtagMVASF", &combinejetBtagMVASF, &b_combinejetBtagMVASF);
   fChain->SetBranchAddress("combinejetBtagMVASFUp", &combinejetBtagMVASFUp, &b_combinejetBtagMVASFUp);
   fChain->SetBranchAddress("combinejetBtagMVASFDown", &combinejetBtagMVASFDown, &b_combinejetBtagMVASFDown);
   fChain->SetBranchAddress("jetjetdphi", &jetjetdphi, &b_jetjetdphi);
   fChain->SetBranchAddress("incjetmetdphimin", &incjetmetdphimin, &b_incjetmetdphimin);
   fChain->SetBranchAddress("incjetmumetdphimin", &incjetmumetdphimin, &b_incjetmumetdphimin);
   fChain->SetBranchAddress("incjetelmetdphimin", &incjetelmetdphimin, &b_incjetelmetdphimin);
   fChain->SetBranchAddress("incjetphmetdphimin", &incjetphmetdphimin, &b_incjetphmetdphimin);
   fChain->SetBranchAddress("alljetmetdphimin", &alljetmetdphimin, &b_alljetmetdphimin);
   fChain->SetBranchAddress("alljetmumetdphimin", &alljetmumetdphimin, &b_alljetmumetdphimin);
   fChain->SetBranchAddress("alljetelmetdphimin", &alljetelmetdphimin, &b_alljetelmetdphimin);
   fChain->SetBranchAddress("alljetphmetdphimin", &alljetphmetdphimin, &b_alljetphmetdphimin);
   fChain->SetBranchAddress("incjetmetdphimin4", &incjetmetdphimin4, &b_incjetmetdphimin4);
   fChain->SetBranchAddress("incjetmumetdphimin4", &incjetmumetdphimin4, &b_incjetmumetdphimin4);
   fChain->SetBranchAddress("incjetelmetdphimin4", &incjetelmetdphimin4, &b_incjetelmetdphimin4);
   fChain->SetBranchAddress("incjetphmetdphimin4", &incjetphmetdphimin4, &b_incjetphmetdphimin4);
   fChain->SetBranchAddress("alljetmetdphimin4", &alljetmetdphimin4, &b_alljetmetdphimin4);
   fChain->SetBranchAddress("alljetmumetdphimin4", &alljetmumetdphimin4, &b_alljetmumetdphimin4);
   fChain->SetBranchAddress("alljetelmetdphimin4", &alljetelmetdphimin4, &b_alljetelmetdphimin4);
   fChain->SetBranchAddress("alljetphmetdphimin4", &alljetphmetdphimin4, &b_alljetphmetdphimin4);
   fChain->SetBranchAddress("ht", &ht, &b_ht);
   fChain->SetBranchAddress("htinc", &htinc, &b_htinc);
   fChain->SetBranchAddress("ht30", &ht30, &b_ht30);
   fChain->SetBranchAddress("combinePuppijetpt", &combinePuppijetpt, &b_combinePuppijetpt);
   fChain->SetBranchAddress("combinePuppijeteta", &combinePuppijeteta, &b_combinePuppijeteta);
   fChain->SetBranchAddress("combinePuppijetphi", &combinePuppijetphi, &b_combinePuppijetphi);
   fChain->SetBranchAddress("combinePuppijetm", &combinePuppijetm, &b_combinePuppijetm);
   fChain->SetBranchAddress("combinePuppijetbtag", &combinePuppijetbtag, &b_combinePuppijetbtag);
   fChain->SetBranchAddress("combinePuppijetbtagMVA", &combinePuppijetbtagMVA, &b_combinePuppijetbtagMVA);
   fChain->SetBranchAddress("combinePuppijetCHfrac", &combinePuppijetCHfrac, &b_combinePuppijetCHfrac);
   fChain->SetBranchAddress("combinePuppijetNHfrac", &combinePuppijetNHfrac, &b_combinePuppijetNHfrac);
   fChain->SetBranchAddress("combinePuppijetEMfrac", &combinePuppijetEMfrac, &b_combinePuppijetEMfrac);
   fChain->SetBranchAddress("combinePuppijetCEMfrac", &combinePuppijetCEMfrac, &b_combinePuppijetCEMfrac);
   fChain->SetBranchAddress("combinePuppijetmetdphi", &combinePuppijetmetdphi, &b_combinePuppijetmetdphi);
   fChain->SetBranchAddress("combinePuppijetHFlav", &combinePuppijetHFlav, &b_combinePuppijetHFlav);
   fChain->SetBranchAddress("combinePuppijetPFlav", &combinePuppijetPFlav, &b_combinePuppijetPFlav);
   fChain->SetBranchAddress("combinePuppijetQGL", &combinePuppijetQGL, &b_combinePuppijetQGL);
   fChain->SetBranchAddress("combinePuppijetGenpt", &combinePuppijetGenpt, &b_combinePuppijetGenpt);
   fChain->SetBranchAddress("combinePuppijetGeneta", &combinePuppijetGeneta, &b_combinePuppijetGeneta);
   fChain->SetBranchAddress("combinePuppijetGenphi", &combinePuppijetGenphi, &b_combinePuppijetGenphi);
   fChain->SetBranchAddress("combinePuppijetGenm", &combinePuppijetGenm, &b_combinePuppijetGenm);
   fChain->SetBranchAddress("combinePuppijetBtagSF", &combinePuppijetBtagSF, &b_combinePuppijetBtagSF);
   fChain->SetBranchAddress("combinePuppijetBtagSFUp", &combinePuppijetBtagSFUp, &b_combinePuppijetBtagSFUp);
   fChain->SetBranchAddress("combinePuppijetBtagSFDown", &combinePuppijetBtagSFDown, &b_combinePuppijetBtagSFDown);
   fChain->SetBranchAddress("combinePuppijetBtagMVASF", &combinePuppijetBtagMVASF, &b_combinePuppijetBtagMVASF);
   fChain->SetBranchAddress("combinePuppijetBtagMVASFUp", &combinePuppijetBtagMVASFUp, &b_combinePuppijetBtagMVASFUp);
   fChain->SetBranchAddress("combinePuppijetBtagMVASFDown", &combinePuppijetBtagMVASFDown, &b_combinePuppijetBtagMVASFDown);
   fChain->SetBranchAddress("PuppijetPuppijetdphi", &PuppijetPuppijetdphi, &b_PuppijetPuppijetdphi);
   fChain->SetBranchAddress("Puppijetmetdphimin", &Puppijetmetdphimin, &b_Puppijetmetdphimin);
   fChain->SetBranchAddress("Puppijetmumetdphimin", &Puppijetmumetdphimin, &b_Puppijetmumetdphimin);
   fChain->SetBranchAddress("Puppijetelmetdphimin", &Puppijetelmetdphimin, &b_Puppijetelmetdphimin);
   fChain->SetBranchAddress("Puppijetphmetdphimin", &Puppijetphmetdphimin, &b_Puppijetphmetdphimin);
   fChain->SetBranchAddress("incPuppijetmetdphimin", &incPuppijetmetdphimin, &b_incPuppijetmetdphimin);
   fChain->SetBranchAddress("incPuppijetmumetdphimin", &incPuppijetmumetdphimin, &b_incPuppijetmumetdphimin);
   fChain->SetBranchAddress("incPuppijetelmetdphimin", &incPuppijetelmetdphimin, &b_incPuppijetelmetdphimin);
   fChain->SetBranchAddress("incPuppijetphmetdphimin", &incPuppijetphmetdphimin, &b_incPuppijetphmetdphimin);
   fChain->SetBranchAddress("Puppijetmetdphimin4", &Puppijetmetdphimin4, &b_Puppijetmetdphimin4);
   fChain->SetBranchAddress("Puppijetmumetdphimin4", &Puppijetmumetdphimin4, &b_Puppijetmumetdphimin4);
   fChain->SetBranchAddress("Puppijetelmetdphimin4", &Puppijetelmetdphimin4, &b_Puppijetelmetdphimin4);
   fChain->SetBranchAddress("Puppijetphmetdphimin4", &Puppijetphmetdphimin4, &b_Puppijetphmetdphimin4);
   fChain->SetBranchAddress("incPuppijetmetdphimin4", &incPuppijetmetdphimin4, &b_incPuppijetmetdphimin4);
   fChain->SetBranchAddress("incPuppijetmumetdphimin4", &incPuppijetmumetdphimin4, &b_incPuppijetmumetdphimin4);
   fChain->SetBranchAddress("incPuppijetelmetdphimin4", &incPuppijetelmetdphimin4, &b_incPuppijetelmetdphimin4);
   fChain->SetBranchAddress("incPuppijetphmetdphimin4", &incPuppijetphmetdphimin4, &b_incPuppijetphmetdphimin4);
   fChain->SetBranchAddress("Puppiht", &Puppiht, &b_Puppiht);
   fChain->SetBranchAddress("mu1pid", &mu1pid, &b_mu1pid);
   fChain->SetBranchAddress("mu1pt", &mu1pt, &b_mu1pt);
   fChain->SetBranchAddress("mu1eta", &mu1eta, &b_mu1eta);
   fChain->SetBranchAddress("mu1phi", &mu1phi, &b_mu1phi);
   fChain->SetBranchAddress("mu1pfpt", &mu1pfpt, &b_mu1pfpt);
   fChain->SetBranchAddress("mu1pfeta", &mu1pfeta, &b_mu1pfeta);
   fChain->SetBranchAddress("mu1pfphi", &mu1pfphi, &b_mu1pfphi);
   fChain->SetBranchAddress("mu1id", &mu1id, &b_mu1id);
   fChain->SetBranchAddress("mu1idm", &mu1idm, &b_mu1idm);
   fChain->SetBranchAddress("mu1idt", &mu1idt, &b_mu1idt);
   fChain->SetBranchAddress("mu1iso", &mu1iso, &b_mu1iso);
   fChain->SetBranchAddress("mu2pid", &mu2pid, &b_mu2pid);
   fChain->SetBranchAddress("mu2pt", &mu2pt, &b_mu2pt);
   fChain->SetBranchAddress("mu2eta", &mu2eta, &b_mu2eta);
   fChain->SetBranchAddress("mu2phi", &mu2phi, &b_mu2phi);
   fChain->SetBranchAddress("mu2pfpt", &mu2pfpt, &b_mu2pfpt);
   fChain->SetBranchAddress("mu2pfeta", &mu2pfeta, &b_mu2pfeta);
   fChain->SetBranchAddress("mu2pfphi", &mu2pfphi, &b_mu2pfphi);
   fChain->SetBranchAddress("mu2id", &mu2id, &b_mu2id);
   fChain->SetBranchAddress("mu2idm", &mu2idm, &b_mu2idm);
   fChain->SetBranchAddress("mu2idt", &mu2idt, &b_mu2idt);
   fChain->SetBranchAddress("mu2iso", &mu2iso, &b_mu2iso);
   fChain->SetBranchAddress("el1pid", &el1pid, &b_el1pid);
   fChain->SetBranchAddress("el1pt", &el1pt, &b_el1pt);
   fChain->SetBranchAddress("el1eta", &el1eta, &b_el1eta);
   fChain->SetBranchAddress("el1phi", &el1phi, &b_el1phi);
   fChain->SetBranchAddress("el1id", &el1id, &b_el1id);
   fChain->SetBranchAddress("el1idl", &el1idl, &b_el1idl);
   fChain->SetBranchAddress("el2pid", &el2pid, &b_el2pid);
   fChain->SetBranchAddress("el2pt", &el2pt, &b_el2pt);
   fChain->SetBranchAddress("el2eta", &el2eta, &b_el2eta);
   fChain->SetBranchAddress("el2phi", &el2phi, &b_el2phi);
   fChain->SetBranchAddress("el2id", &el2id, &b_el2id);
   fChain->SetBranchAddress("el2idl", &el2idl, &b_el2idl);
   fChain->SetBranchAddress("tau1pid", &tau1pid, &b_tau1pid);
   fChain->SetBranchAddress("tau1pt", &tau1pt, &b_tau1pt);
   fChain->SetBranchAddress("tau1eta", &tau1eta, &b_tau1eta);
   fChain->SetBranchAddress("tau1phi", &tau1phi, &b_tau1phi);
   fChain->SetBranchAddress("tau1iso", &tau1iso, &b_tau1iso);
   fChain->SetBranchAddress("tau1m", &tau1m, &b_tau1m);
   fChain->SetBranchAddress("tau2pid", &tau2pid, &b_tau2pid);
   fChain->SetBranchAddress("tau2pt", &tau2pt, &b_tau2pt);
   fChain->SetBranchAddress("tau2eta", &tau2eta, &b_tau2eta);
   fChain->SetBranchAddress("tau2phi", &tau2phi, &b_tau2phi);
   fChain->SetBranchAddress("tau2iso", &tau2iso, &b_tau2iso);
   fChain->SetBranchAddress("tau2m", &tau2m, &b_tau2m);
   fChain->SetBranchAddress("zmass", &zmass, &b_zmass);
   fChain->SetBranchAddress("zpt", &zpt, &b_zpt);
   fChain->SetBranchAddress("zeta", &zeta, &b_zeta);
   fChain->SetBranchAddress("zphi", &zphi, &b_zphi);
   fChain->SetBranchAddress("wmt", &wmt, &b_wmt);
   fChain->SetBranchAddress("emumass", &emumass, &b_emumass);
   fChain->SetBranchAddress("emupt", &emupt, &b_emupt);
   fChain->SetBranchAddress("emueta", &emueta, &b_emueta);
   fChain->SetBranchAddress("emuphi", &emuphi, &b_emuphi);
   fChain->SetBranchAddress("zeemass", &zeemass, &b_zeemass);
   fChain->SetBranchAddress("zeept", &zeept, &b_zeept);
   fChain->SetBranchAddress("zeeeta", &zeeeta, &b_zeeeta);
   fChain->SetBranchAddress("zeephi", &zeephi, &b_zeephi);
   fChain->SetBranchAddress("wemt", &wemt, &b_wemt);
   fChain->SetBranchAddress("zttmass", &zttmass, &b_zttmass);
   fChain->SetBranchAddress("zttpt", &zttpt, &b_zttept);
   fChain->SetBranchAddress("ztteta", &ztteta, &b_ztteta);
   fChain->SetBranchAddress("zttphi", &zttphi, &b_zttphi);
   fChain->SetBranchAddress("wtmt", &wtmt, &b_wtmt);
   fChain->SetBranchAddress("taumumass", &taumumass, &b_taumumass);
   fChain->SetBranchAddress("taumupt", &taumupt, &b_taumupt);
   fChain->SetBranchAddress("taumueta", &taumueta, &b_taumueta);
   fChain->SetBranchAddress("taumuphi", &taumuphi, &b_taumuphi);
   fChain->SetBranchAddress("tauemass", &tauemass, &b_tauemass);
   fChain->SetBranchAddress("tauept", &tauept, &b_tauept);
   fChain->SetBranchAddress("taueeta", &taueeta, &b_taueeta);
   fChain->SetBranchAddress("tauephi", &tauephi, &b_tauephi);
   fChain->SetBranchAddress("phidl", &phidl, &b_phidl);
   fChain->SetBranchAddress("phidm", &phidm, &b_phidm);
   fChain->SetBranchAddress("phidt", &phidt, &b_phidt);
   fChain->SetBranchAddress("phidh", &phidh, &b_phidh);
   fChain->SetBranchAddress("phpt", &phpt, &b_phpt);
   fChain->SetBranchAddress("pheta", &pheta, &b_pheta);
   fChain->SetBranchAddress("phphi", &phphi, &b_phphi);
   fChain->SetBranchAddress("nphotonsPurity", &nphotonsPurity, &b_nphotonsPurity);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("phPHiso", &phPHiso, &b_phPHiso);
   fChain->SetBranchAddress("phCHiso", &phCHiso, &b_phCHiso);
   fChain->SetBranchAddress("phPuritypt", &phPuritypt, &b_phPuritypt);
   fChain->SetBranchAddress("pPurityheta", &pPurityheta, &b_phPurityeta);
   fChain->SetBranchAddress("phPurityphi", &phPurityphi, &b_phPurityphi);
   fChain->SetBranchAddress("phPurityPHiso", &phPurityPHiso, &b_phPurityPHiso);
   fChain->SetBranchAddress("phPurityRND04PHiso", &phPurityRND04PHiso, &b_phPurityRND04PHiso);
   fChain->SetBranchAddress("phPurityRND08PHiso", &phPurityRND08PHiso, &b_phPurityRND08PHiso);
   fChain->SetBranchAddress("phPurityCHiso", &phPurityCHiso, &b_phPurityCHiso);
   fChain->SetBranchAddress("phPurityRND04CHiso", &phPurityRND04CHiso, &b_phPurityRND04CHiso);
   fChain->SetBranchAddress("phPurityRND08CHiso", &phPurityRND08CHiso, &b_phPurityRND08CHiso);
   fChain->SetBranchAddress("phNHiso", &phNHiso, &b_phNHiso);
   fChain->SetBranchAddress("phPurityNHiso", &phPurityNHiso, &b_phPurityNHiso);
   fChain->SetBranchAddress("phPuritysieie", &phPuritysieie, &b_phPuritysieie);
   fChain->SetBranchAddress("phPurityhoe", &phPurityhoe, &b_phPurityhoe);
   fChain->SetBranchAddress("phPurityEA", &phPurityEA, &b_phPurityEA);
   fChain->SetBranchAddress("phPurityEAEGamma", &phPurityEAEGamma, &b_phPurityEAEGamma);
   fChain->SetBranchAddress("phPurityElectronVeto", &phPurityElectronVeto, &b_phPurityElectronVeto);
   fChain->SetBranchAddress("wzid", &wzid, &b_wzid);
   fChain->SetBranchAddress("wzmass", &wzmass, &b_wzmass);
   fChain->SetBranchAddress("wzmt", &wzmt, &b_wzmt);
   fChain->SetBranchAddress("wzpt", &wzpt, &b_wzpt);
   fChain->SetBranchAddress("wzeta", &wzeta, &b_wzeta);
   fChain->SetBranchAddress("wzphi", &wzphi, &b_wzphi);
   fChain->SetBranchAddress("wzmothid", &wzmothid, &b_wzmothid);
   fChain->SetBranchAddress("ismatch", &ismatch, &b_ismatch);
   fChain->SetBranchAddress("isdirect", &isdirect, &b_isdirect);
   fChain->SetBranchAddress("l1id", &l1id, &b_l1id);
   fChain->SetBranchAddress("l1pt", &l1pt, &b_l1pt);
   fChain->SetBranchAddress("l1eta", &l1eta, &b_l1eta);
   fChain->SetBranchAddress("l1phi", &l1phi, &b_l1phi);
   fChain->SetBranchAddress("l2id", &l2id, &b_l2id);
   fChain->SetBranchAddress("l2pt", &l2pt, &b_l2pt);
   fChain->SetBranchAddress("l2eta", &l2eta, &b_l2eta);
   fChain->SetBranchAddress("l2phi", &l2phi, &b_l2phi);
   fChain->SetBranchAddress("wzid_h", &wzid_h, &b_wzid_h);
   fChain->SetBranchAddress("wzmass_h", &wzmass_h, &b_wzmass_h);
   fChain->SetBranchAddress("wzmt_h", &wzmt_h, &b_wzmt_h);
   fChain->SetBranchAddress("wzpt_h", &wzpt_h, &b_wzpt_h);
   fChain->SetBranchAddress("wzeta_h", &wzeta_h, &b_wzeta_h);
   fChain->SetBranchAddress("wzphi_h", &wzphi_h, &b_wzphi_h);
   fChain->SetBranchAddress("q1id", &q1id, &b_q1id);
   fChain->SetBranchAddress("q1pt", &q1pt, &b_q1pt);
   fChain->SetBranchAddress("q1eta", &q1eta, &b_q1eta);
   fChain->SetBranchAddress("q1phi", &q1phi, &b_q1phi);
   fChain->SetBranchAddress("q2id", &q2id, &b_q2id);
   fChain->SetBranchAddress("q2pt", &q2pt, &b_q2pt);
   fChain->SetBranchAddress("q2eta", &q2eta, &b_q2eta);
   fChain->SetBranchAddress("q2phi", &q2phi, &b_q2phi);
   fChain->SetBranchAddress("topmass", &topmass, &b_topmass);
   fChain->SetBranchAddress("toppt", &toppt, &b_toppt);
   fChain->SetBranchAddress("topeta", &topeta, &b_topeta);
   fChain->SetBranchAddress("topphi", &topphi, &b_topphi);
   fChain->SetBranchAddress("atopmass", &atopmass, &b_atopmass);
   fChain->SetBranchAddress("atoppt", &atoppt, &b_atoppt);
   fChain->SetBranchAddress("atopeta", &atopeta, &b_atopeta);
   fChain->SetBranchAddress("atopphi", &atopphi, &b_atopphi);
   fChain->SetBranchAddress("parid", &parid, &b_parid);
   fChain->SetBranchAddress("parpt", &parpt, &b_parpt);
   fChain->SetBranchAddress("pareta", &pareta, &b_pareta);
   fChain->SetBranchAddress("parphi", &parphi, &b_parphi);
   fChain->SetBranchAddress("ancid", &ancid, &b_ancid);
   fChain->SetBranchAddress("ancpt", &ancpt, &b_ancpt);
   fChain->SetBranchAddress("anceta", &anceta, &b_anceta);
   fChain->SetBranchAddress("ancphi", &ancphi, &b_ancphi);
   fChain->SetBranchAddress("dmmass", &dmmass, &b_dmmass);
   fChain->SetBranchAddress("dmpt", &dmpt, &b_dmpt);
   fChain->SetBranchAddress("dmeta", &dmeta, &b_dmeta);
   fChain->SetBranchAddress("dmphi", &dmphi, &b_dmphi);
   fChain->SetBranchAddress("dmid", &dmid, &b_dmid);
   fChain->SetBranchAddress("dmX1id", &dmX1id, &b_dmX1id);
   fChain->SetBranchAddress("dmX1pt", &dmX1pt, &b_dmX1pt);
   fChain->SetBranchAddress("dmX1eta", &dmX1eta, &b_dmX1eta);
   fChain->SetBranchAddress("dmX1phi", &dmX1phi, &b_dmX1phi);
   fChain->SetBranchAddress("dmX1mass", &dmX1mass, &b_dmX1mass);
   fChain->SetBranchAddress("dmX2id", &dmX2id, &b_dmX2id);
   fChain->SetBranchAddress("dmX2pt", &dmX2pt, &b_dmX2pt);
   fChain->SetBranchAddress("dmX2eta", &dmX2eta, &b_dmX2eta);
   fChain->SetBranchAddress("dmX2phi", &dmX2phi, &b_dmX2phi);
   fChain->SetBranchAddress("dmX2mass", &dmX2mass, &b_dmX2mass);
   fChain->SetBranchAddress("samplemedM", &samplemedM, &b_samplemedM);
   fChain->SetBranchAddress("sampledmM", &sampledmM, &b_sampledmM);
   Notify();
}

Bool_t datatree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void datatree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t datatree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef datatree_cxx
