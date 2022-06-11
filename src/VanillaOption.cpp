//
// Created by Andy Chen on 6/11/2022.
//

#include "../includes/VanillaOption.h"

VanillaOption::VanillaOption(Simulator* simulator, char corP) : Payoff(simulator), whichOption(whichOption) {}
VanillaOption::~VanillaOption() {}
void VanillaOption::getK() {
    K = simulator->getK();
}

vector<double>& VanillaOption::calc() {
    for(int i = 0; i < totalPrice.size(); ++i){

    }
    totalPrice
    return ;
}








