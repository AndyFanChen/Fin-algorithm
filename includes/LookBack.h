//
// Created by 林大中 on .
//

#ifndef FIN_ALGORITHM_MC_LOOKBACK_H
#define FIN_ALGORITHM_MC_LOOKBACK_H
#include "Payoff.h"

class LookBack final : public Payoff {
private:
    virtual vector<double>& calc() override;

public:
    LookBack(Simulator *simulator);

};


#endif //FIN_ALGORITHM_MC_LOOKBACK_H

