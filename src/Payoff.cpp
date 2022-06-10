//
// Created by Andy Chen on 6/10/2022.
//

#include "../includes/Payoff.h"

Payoff::Payoff(Simulator* simulator) : simulator(simulator){}
void Payoff::getValue() {
    simulator->getPrice();
}



