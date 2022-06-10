//
// Created by Andy Chen on 6/10/2022.
//

#ifndef FIN_ALGORITHM_MC_PAYOFF_H
#define FIN_ALGORITHM_MC_PAYOFF_H
#include "Simulator.h"
using namespace std;

class Payoff {
private:
    Simulator* simulator;
    array3d totalPrice;

public:
//  傳基本參數給payoff class
//  simulator是Simulator*類的東西(class的地址)
    Payoff(Simulator* simulator);
    array3d getS();
//  欠重寫式
    vector<double>& calc();
    vector<double>& getValues();
    double getMean();



    void getValue();
};



#endif //FIN_ALGORITHM_MC_PAYOFF_H
