//
// Created by 林大中 on .
//

#include "../includes/Simulator.h"


Simulator::Simulator(double S, double K, double q, double T, double sigma, double Rep, double Sim, double TradeDays)
: S(S), K(K), q(q), T(T), sigma(sigma), Rep(Rep), Sim(Sim), TradeDays(TradeDays){}

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
