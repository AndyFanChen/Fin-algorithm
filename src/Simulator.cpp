//
// Created by 林大中 on .
//

#include "../includes/Simulator.h"


Simulator::Simulator(double S, double K, double r,double q, double T, double sigma, double Rep, double Sim, double TradeDays)
: S(S), K(K), q(q), r(r), T(T), sigma(sigma), Rep(Rep), Sim(Sim), TradeDays(TradeDays){}

const array3d &Simulator::getPrice() const {
    return price;
}

double Simulator::getS() const {
    return S;
}

double Simulator::getK() const {
    return K;
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

double Simulator::getRep() const {
    return Rep;
}

double Simulator::getSim() const {
    return Sim;
}

double Simulator::getTradeDays() const {
    return TradeDays;
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

            for (int tradedays = 0; tradedays < TradeDays; tradedays++){
                double onePirce = exp(log(S) + (r - q - pow(sigma, 2) / 2) * T + getNormal() * sigma * sqrt(T));
                price.at(rep).at(sim).push_back(onePirce);
            }
        }
    }
}
