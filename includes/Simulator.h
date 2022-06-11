//
// Created by 林大中 on .
//

#ifndef FIN_ALGORITHM_MC_SIMULATOR_H
#define FIN_ALGORITHM_MC_SIMULATOR_H
#include <vector>
using namespace std;
using array3d = vector<vector<vector<double>>>;
#include <random>
#include <cmath>

class Simulator {
private:
    array3d price;
    double S, K, q, r, T, sigma;
    int Rep, Sim, TradeDays;

    // Normal RV
    double getNormal();

    // calculate price and put in array3d price
    void calc();


public:
    // Constructor
    Simulator(double S, double K, double r, double q, double T, double sigma, double Rep, double Sim, double TradeDays);


    // getter
    const array3d &getPrice() const;

    double getS() const;

    double getK() const;

    double getQ() const;

    double getT() const;

    double getSigma() const;

    int getRep() const;

    int getSim() const;

    double getR() const;

    int getTradeDays() const;

    virtual ~Simulator();

};


#endif //FIN_ALGORITHM_MC_SIMULATOR_H
