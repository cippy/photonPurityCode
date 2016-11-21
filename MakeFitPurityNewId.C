//ROOT header files                                                                                                              
#include <TROOT.h>
#include <TAttFill.h>
#include <TAxis.h>
#include <TCanvas.h>
#include <TColor.h>
#include <TChain.h>
#include <TF1.h>
#include <TFile.h>
#include <TFitResult.h>
#include <TGraphErrors.h>
#include <THStack.h>
#include <TH1.h>
#include <TH1D.h>
#include <TKey.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLorentzVector.h>
#include <TMath.h>
#include <TMatrixDSym.h>
#include <TMultiGraph.h>
#include <TPad.h>
#include <TPaveStats.h>
#include <TPaveText.h>
#include <TStyle.h>
#include <TString.h>
#include <TVirtualFitter.h>

#include <RooRealVar.h>
#include <RooArgSet.h>
#include <RooDataHist.h>
#include <RooFitResult.h>
#include <RooWorkspace.h>
#include <RooPlot.h>
#include <RooHistPdf.h>
#include <RooAddPdf.h>

//C or C++ header files                                                                                                         
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib> //as stdlib.h                                                                                  
#include <cstdio>
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>  // to use the "reverse" function to reverse the order in the array                          
#include <Rtypes.h> // to use kColor                                                                             

#include "FitPurityNewId.cc"
//

void MakeFitPurity(std::string phid){ 
  //  runfits("EB", "LOOSE");
  runAllfits(phid);
}
