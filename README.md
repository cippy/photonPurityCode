# photonPurityCode
code to run photon purity for monojet analysis

compile FitPurityNewId.cc (not linking)
g++ -Wall -pedantic -c FitPurityNewId.cc `rootlib` -L $ROOTSYS/lib -lRooFitCore -lRooFit -lRooStats -I$ROOTSYS/include/RooStats/

Using with ROOT
root -l -q 'MakeFitPurityNewId.C++("MEDIUM")'

Compile main
g++ -Wall -pedantic -lm -o MakeFitPurityNewId MakeFitPurityNewId.cc `rootlib` -L $ROOTSYS/lib -lRooFitCore -lRooFit -lRooStats -I$ROOTSYS/include/RooStats/ 

rootlib is an alias for $ROOTSYS/bin/root-config --cflags --libs