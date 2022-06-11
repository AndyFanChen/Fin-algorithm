#include "includes/Simulator.h"
#include "includes/LookBack.h"
#include <iostream>

int main(){
    Simulator *simulator = new Simulator(100,100,0.07,0.05,1.2,0.2,2,5,10);
    LookBack lookBackCall(simulator, 'C');
    cout << lookBackCall.getMean() << endl;

}
