## main.make
#

main:			main.o PayOff.o EuropeanOption.o BinomialPricer.o 
			g++ -o main main.o PayOff.o EuropeanOption.o BinomialPricer.o 


main.o:			main.cpp PayOff.hpp EuropeanOption.hpp BinomialPricer.hpp 
			g++ -c main.cpp


PayOff.o:		PayOff.cpp PayOff.hpp 
			g++ -c PayOff.cpp

EuropeanOption.o:	EuropeanOption.cpp EuropeanOption.hpp
			g++ -c EuropeanOption.cpp

BinomialPricer.o:	BinomialPricer.cpp BinomialPricer.hpp
			g++ -c BinomialPricer.cpp

clean:
			rm -f *.o main
