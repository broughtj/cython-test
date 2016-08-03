from european import european_binomial

def main():
    spot = 41.0
    rate = 0.08
    volatility = 0.30
    strike = 40.0
    expiry = 1.0
    steps = 5000

    prc = european_binomial(spot, strike, rate, volatility, expiry, steps)
    print("The European Call Price is: ${0:.3f}".format(prc))
    
if __name__ == "__main__":
    main()
