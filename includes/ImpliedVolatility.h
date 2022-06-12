//
// Created by 林大中 on .
//

#ifndef IMPLIEDVOLATILITY_IMPLIIEDVOLATILITY_H
#define IMPLIEDVOLATILITY_IMPLIIEDVOLATILITY_H
#include "CRRBinomialTree.h"
#include <iostream>

double TreeNewton(const double S, const double K, const double r, const double q, const double T,
                  const char whichOption, const OptionType type, const int n, const double initGuess, const double MktPrice, const double criteria);



#endif //IMPLIEDVOLATILITY_IMPLIIEDVOLATILITY_H
