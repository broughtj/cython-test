#ifndef EUROPEANOPTION_HPP
#define EUROPEANOPTION_HPP

#include "PayOff.hpp"

class EuropeanOption
{
  public:
    EuropeanOption(PayOff& payoff_, double expiry_);
    double GetPayOff(double Spot) const;
    double GetExpiry() const;
    ~EuropeanOption() {}

  private:
    PayOff& m_payoff;
    double m_Expiry;
};

#endif 
