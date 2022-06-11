//
// Created by 林大中 on .
//

#include "../includes/Simulator.h"


Simulator::Simulator(double S, double r,double q, double T, double sigma, double Rep, double Sim, double TradeDays)
: S(S), q(q), r(r), T(T), sigma(sigma), Rep(Rep), Sim(Sim), TradeDays(TradeDays){
    calc();
}

double Simulator::getNormal() {
    // random device
    std::random_device rd;

    // random generator
    std::mt19937 generator(rd());

    // distribution
    std::normal_distribution<double> norm(0.0, 1.0);

    // random sample
    double x = norm(generator);
    return x;
}

void Simulator::calc() {
    for (int rep = 0; rep < Rep; rep++) {
        price.push_back(vector<vector<double>>());

        for (int sim = 0; sim < Sim; sim++){
            price.at(rep).push_back(vector<double>());

            for (int tradedays = 0; tradedays < (int)(TradeDays / 2); tradedays++){
                double RV = getNormal();
                if (tradedays == 0) {
                    double onePirce = exp(log(S) + (r - q - pow(sigma, 2) / 2) * (T / TradeDays) +
                                          RV * sigma * sqrt(T / TradeDays));
                    price.at(rep).at(sim).push_back(onePirce);
                    // Variance Reduction
                    double onePirce2 = exp(log(S) + (r - q - pow(sigma, 2) / 2) * (T / TradeDays) -
                                           RV * sigma * sqrt(T / TradeDays));
                    price.at(rep).at(sim).push_back(onePirce2);
                }
                else{
                    double lastPrice =price.at(rep).at(sim).at(tradedays - 1);
                    double onePirce = exp(log(lastPrice) + (r - q - pow(sigma, 2) / 2) * (T / TradeDays) +
                                          RV * sigma * sqrt(T / TradeDays));
                    price.at(rep).at(sim).push_back(onePirce);
                    // Variance Reduction
                    double onePirce2 = exp(log(lastPrice) + (r - q - pow(sigma, 2) / 2) * (T / TradeDays) -
                                           RV * sigma * sqrt(T / TradeDays));
                    price.at(rep).at(sim).push_back(onePirce2);
                }
            }
        }
    }
}

const array3d &Simulator::getPrice() const {
    return price;
}

double Simulator::getS() const {
    return S;
}


double Simulator::getQ() const {
    return q;
}

double Simulator::getT() const {
    return T;
}

double Simulator::getSigma() const {
    return sigma;
}

int Simulator::getRep() const {
    return Rep;
}

int Simulator::getSim() const {
    return Sim;
}

int Simulator::getTradeDays() const {
    return TradeDays;
}

Simulator::~Simulator() {}

double Simulator::getR() const {
    return r;
}
