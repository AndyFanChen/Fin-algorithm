//
// Created by 林大中 on .
//

#include "../includes/ImpliedVolatility.h"


double TreeNewton(const double S, const double K, const double r, const double q, const double T,
                  const char whichOption, const OptionType type, const int n, const double initGuess, const double MktPrice, const double criteria){
    double error = 0;
    double stepSize = 0.000001;
    double guess = initGuess;

    do{
        CRRBinomialTree init(S, T, n, guess, r, q, K, whichOption, type);

        CRRBinomialTree initPlusDelta(S, T, n, guess + stepSize, r, q, K, whichOption, type);

        // f(x) = option calculate - Market price = error, our object is to let the f(x) = 0
        double initError = (init.getOptionValue() - MktPrice);
        double initPlusDeltaError = (initPlusDelta.getOptionValue() - MktPrice);
        // if the root we guess correctly at beginning.
        if (abs(initError) <= criteria){
            return guess;
        }

        double differential = (initPlusDeltaError - initError) / stepSize;
        guess -= initError / differential;

        CRRBinomialTree newRoot(S, T, n, guess, r, q, K, whichOption, type);

        error = newRoot.getOptionValue() - MktPrice;


    }while(abs(error) > criteria);
    return guess;
}