#include "PayOff.hpp"
#include "EuropeanOption.hpp"

EuropeanOption::EuropeanOption(PayOff& payoff_, double expiry_)
                   : m_payoff(payoff_), m_Expiry(expiry_)
{
}

double EuropeanOption::GetPayOff(double spot) const
{
  return m_payoff(spot); 
}

double EuropeanOption::GetExpiry() const
{
  return m_Expiry;
}

