#include <iostream>
#include "PayOff.hpp"
#include "EuropeanOption.hpp"
#include "BinomialPricer.hpp"
//#include "NaiveMCPricer.hpp"

int main()
{
 // The Option
 double K = 40.0;
 double S = 41.0;
 double r = 0.08;
 double v = 0.30;
 double T = 1.0;
 double q = 0.0;
 int n = 5000;

 // The Call Option
 PayOffCall callPO(K);
 EuropeanOption theCall(callPO, T);
 double callPrice = BinomialPricer(theCall, S, r, v, q, T, n);
 std::cout << "The Binomial Call Price = " << callPrice << std::endl;

 return 0;
}
