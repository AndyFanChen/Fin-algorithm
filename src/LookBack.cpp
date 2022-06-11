//
// Created by 林大中 on .
//

#include "../includes/LookBack.h"


LookBack::LookBack(Simulator *simulator, char whichOption)
:simulator(simulator), whichOption(whichOption){}

void LookBack::calc() {
    auto totalPrice = simulator->getPrice();
    // store payoff for every simulation path per Repetition
    vector<vector<double>> payoff;

    // find Smax and calculate the payoff
    for (int rep = 0; rep < totalPrice.size(); rep++){
        payoff.push_back(vector<double>());
        for (int sim = 0; sim < totalPrice.at(rep).size(); sim++){
            if (whichOption == 'C') {
                // initial Smax as the first number per simulation.
                double Smax = totalPrice.at(rep).at(sim).at(0);
                for (int tradedays = 0; tradedays < totalPrice.at(rep).at(sim).size(); tradedays++) {
                    // find Smax
                    if (totalPrice.at(rep).at(sim).at(tradedays) > Smax) {
                        Smax = totalPrice.at(rep).at(sim).at(tradedays);
                    }
                }

                double lastPrice = totalPrice.at(rep).at(sim).at(simulator->getTradeDays() - 1);
                payoff.at(rep).push_back(Smax - lastPrice);
            }
            else{
                // initial Smin as the first number per simulation.
                double Smin = totalPrice.at(rep).at(sim).at(0);
                for (int tradedays = 0; tradedays < totalPrice.at(rep).at(sim).size(); tradedays++) {
                    // find Smin
                    if (totalPrice.at(rep).at(sim).at(tradedays) < Smin) {
                        Smin = totalPrice.at(rep).at(sim).at(tradedays);
                    }
                }

                double lastPrice = totalPrice.at(rep).at(sim).at(totalPrice.at(rep).at(sim).size() - 1);
                payoff.at(rep).push_back(lastPrice - Smin);
            }
        }
    }

    // discount, then put into optionValues
    for (int rep = 0; rep < payoff.size(); rep++){
        double sum = 0;
        for (int sim = 0; sim < payoff.at(rep).size(); sim++){
            sum += payoff.at(rep).at(sim);
        }
        double r = simulator->getR();
        int tradedays = simulator->getTradeDays();
        // discount
        double value = (sum / tradedays) / exp(-r * tradedays);

        // put into optionValues
        optionValues.push_back(value);
    }
}

void LookBack::deletePrice() {

}


