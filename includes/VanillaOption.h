//
// Created by Andy Chen on 6/11/2022.
//

#ifndef FIN_ALGORITHM_MC_VANILLAOPTION_H
#define FIN_ALGORITHM_MC_VANILLAOPTION_H

#include "Payoff.h"
#include <cmath>
#include <algorithm>
using namespace std;

class VanillaOption : public Payoff{
    virtual vector<double>& calc() override;

};

#endif //FIN_ALGORITHM_MC_VANILLAOPTION_H
