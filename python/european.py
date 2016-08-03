import numpy as np
from scipy.stats import binom

def call_payoff(strike, spot):
    return np.maximum(spot - strike, 0.0)

def european_binomial(spot, strike, rate, volatility, expiry, steps):
    num_nodes = steps + 1
    spotT = 0.0
    callT = 0.0
    dt = expiry / steps
    u = np.exp(rate * dt + volatility * np.sqrt(dt))
    d = np.exp(rate * dt - volatility * np.sqrt(dt))
    pu = (np.exp(rate * dt) - d) / (u - d)
    pd = 1 - pu
    
    for i in range(num_nodes):
        spotT = spot * (u ** (steps - i)) * (d ** i)
        callT += call_payoff(strike, spotT) * binom.pmf(steps - i, steps, pu)
    
    call_prc = callT * np.exp(-rate * expiry)
    
    return call_prc
    
if __name__ == "__main__":
    print("Not run")
