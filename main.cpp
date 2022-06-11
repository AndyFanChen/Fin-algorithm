#include "includes/Simulator.h"
#include "includes/LookBack.h"
#include <iostream>

int main(){
    Simulator *simulator = new Simulator(100, 0.07,0.05,1.2,0.2,20,10000,100);

    LookBack lookBackCall(simulator, 'C');
    cout << lookBackCall.getMean() << endl;
    cout << lookBackCall.getStd() << endl;

}
