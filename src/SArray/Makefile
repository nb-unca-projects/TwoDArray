CPP = g++
CPPFLAGS = -Wall -Wextra

SArray.o: Node.o TwoDArray.h TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c TwoDArray.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

clean:
	rm -f *.o
