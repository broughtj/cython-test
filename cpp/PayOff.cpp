#include <algorithm>
#include "PayOff.hpp"

PayOffCall::PayOffCall(double strike_) : m_strike(strike_)
{
}

double PayOffCall::operator()(double spot) const
{
  return std::max(spot - m_strike, 0.0);
}

double PayOffCall::GetStrike() const
{
  return m_strike;
}

PayOffPut::PayOffPut(double strike_) : m_strike(strike_)
{
}

double PayOffPut::operator()(double spot) const
{
  return std::max(m_strike - spot, 0.0);
}

double PayOffPut::GetStrike() const
{
  return m_strike;
}
