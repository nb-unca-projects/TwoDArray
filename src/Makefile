BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra
SRC = ./AQueue


time_test: ./TimingTests/TimeTest.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o time_test ./TimingTests/TimeTest.cpp Queue.o

Queue.o: $(SRC)/Queue.h $(SRC)/Queue.cpp
	$(CPP) $(CPPFLAGS) -c $(SRC)/Queue.cpp

clean:
	rm -f $(SRC)/*.o
	rm -f *.o
	rm -f *~
	rm -f time_test
