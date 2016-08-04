#include <boost/math/distributions.hpp>
#include "BinomialPricer.hpp"

double BinomialPricer(EuropeanOption& option, const double S, const double r, const double v,
                        const double q, const double T, const int n)
{
  double h = T / n;  
  double SpotT = 0.0;
  double payoff = 0.0;
  double probs = 0.0;
  double u = exp((r - q)*h + v*sqrt(h));
  double d = exp((r - q)*h - v*sqrt(h));
  double pstar = (exp((r - q) * h) - d) / (u - d);
  double sum = 0.0;

  boost::math::binomial_distribution<> dist(n, pstar);

  for(int i = 0; i < n; ++i)
  {
    SpotT = S * pow(u, i) * pow(d, n-i);
    payoff = option.GetPayOff(SpotT);
    probs = boost::math::pdf(dist, i);  
    sum += payoff * probs;  
  }

  double price = exp(-r * T) * (sum);  


  return price;
}

