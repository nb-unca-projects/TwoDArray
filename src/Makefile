BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra


$(BUILD)/AArray.o: AArray/TwoDArray.h AArray/TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c AArray/TwoDArray.cpp


$(BUILD)/SArray.o: SArray/TwoDArray.h SArray/TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c SArray/TwoDArray.cpp


$(BUILD)/VArray.o: VArray/TwoDArray.h VArray/TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c VArray/TwoDArray.cpp

clean:
	rm -f *.o
