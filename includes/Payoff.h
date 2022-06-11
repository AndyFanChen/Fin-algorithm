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
    //public:
//    Payoff(Simulator *simulator, const array3d &totalPrice, vector<double> &optionValues);

private:
//    問! &類型變數如何初始化???
    vector<double> optionValues;
public:
//  傳基本參數給payoff class
//  simulator是Simulator*類的東西(class的地址)
    Payoff();
    virtual ~Payoff();
//  override時要放private
    virtual vector<double>& calc() = 0;
    vector<double>& getValues();
    double getMean();
    double getStd();
    vector<double> getRange();
    virtual void deletePrice() = 0;


};



#endif //FIN_ALGORITHM_MC_PAYOFF_H
