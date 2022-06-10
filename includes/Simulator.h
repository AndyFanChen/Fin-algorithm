//
// Created by 林大中 on .
//

#ifndef FIN_ALGORITHM_MC_SIMULATOR_H
#define FIN_ALGORITHM_MC_SIMULATOR_H
#include <vector>
using namespace std;
using array3d = vector<vector<vector<double>>>;

class Simulator {
private:
    array3d price;
    double S, K, q, T, sigma, Rep, Sim, TradeDays;

public:
    Simulator(double S, double K, double q, double T, double sigma, double Rep, double Sim, double TradeDays);

    const array3d &getPrice() const;

    double getS() const;

    double getK() const;

    double getQ() const;

    double getT() const;

    double getSigma() const;

    double getRep() const;

    double getSim() const;

    double getTradeDays() const;

};


#endif //FIN_ALGORITHM_MC_SIMULATOR_H
