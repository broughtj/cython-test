#ifndef BINOMIALPRICER_HPP
#define BINOMIALPRICER_HPP

#include "EuropeanOption.hpp"

double BinomialPricer(EuropeanOption& option, const double S, const double r, const double v,
                        const double q, const double T, const int n);

#endif
