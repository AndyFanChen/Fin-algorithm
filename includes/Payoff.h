//
// Created by Andy Chen on 6/10/2022.
//

#ifndef FIN_ALGORITHM_MC_PAYOFF_H
#define FIN_ALGORITHM_MC_PAYOFF_H
#include "Simulator.h"
#include <cmath>
#include <algorithm>
using namespace std;

class Payoff {
private:
    // store the option values for every simulation
    vector<double> optionValues;
public:
    // constructor and destructor
    Payoff();
    virtual ~Payoff();

    // override method
    virtual vector<double>& calc() = 0;
    virtual void deletePrice() = 0;

    // get the simulation statistic summary result
    vector<double>& getValues();
    double getMean();
    double getStd();
    vector<double> getRange();


};



#endif //FIN_ALGORITHM_MC_PAYOFF_H
