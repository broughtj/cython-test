#ifndef PAYOFF_HPP
#define PAYOFF_HPP

class PayOff
{
  public:
    PayOff() {}
    virtual double operator()(double spot) const=0;
    virtual double GetStrike() const=0;
    virtual ~PayOff(){}
  private:
};

class PayOffCall : public PayOff
{
  public:
    PayOffCall(double strike_);
    virtual double operator()(double spot) const;
    virtual double GetStrike() const;
    virtual ~PayOffCall() {}

  private:
    double m_strike;
};

class PayOffPut : public PayOff
{
  public:
    PayOffPut(double strike_);
    virtual double operator()(double spot) const;
    virtual double GetStrike() const;
    virtual ~PayOffPut(){}

  private:
    double m_strike;
};

#endif
