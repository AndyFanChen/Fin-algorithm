//
// Created by Andy Chen on 6/11/2022.
//

#include "../includes/VanillaOption.h"

VanillaOption::VanillaOption(Simulator* simulator, char corP) : simulator(simulator), whichOption(whichOption) {}
VanillaOption::~VanillaOption() {}
void VanillaOption::getK() {
    K = simulator->getK();
}

void VanillaOption::calc() {
    const array3d& totalPrice = simulator->getPrice();
    double sumPayoff = 0;
    for(int i = 0; i < totalPrice.size(); ++i){
        for(int j = 0; j < totalPrice[0].size(); ++j){
            if (whichOption == 'C'){
                sumPayoff += max<double>(totalPrice[i][j][totalPrice[0][0].size() - 1] - K, 0);
            } else if(whichOption == 'P'){
                sumPayoff += max<double>(K - totalPrice[i][j][totalPrice[0][0].size() - 1], 0);
            }
        }
        double avePayoff = sumPayoff / totalPrice[0].size();
        optionValues.push_back();
    }
}








