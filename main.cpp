#include "includes/Simulator.h"
#include "includes/LookBack.h"
#include "includes/CRRBinomialTree.h"
#include <iostream>

int main(){
//    Simulator *simulator = new Simulator(100, 0.07,0.05,1.2,0.2,20,10000,100);
//
//    LookBack lookBackCall(simulator, 'C');
//    double mean = lookBackCall.getMean();
//    double std = lookBackCall.getStd();
//    cout << mean << endl;
//    cout << mean - 2 * std << ", " << mean + 2 * std << endl;
    CRRBinomialTree tree(100, 0.07, 100, 0.4, 0.07, 0.02, 100, 'C', A);
    cout << tree.getOptionValue() << endl;
}
