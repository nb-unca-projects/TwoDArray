BUILD = ../build
TEST = ../test
LIB = ../lib
SRCA = ../src/AArray
SRCV = ../src/VArray
SRCS = ../src/SArray
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: sparse_test

array_test: ArrayTest.cpp $(SRCA)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o array_test ArrayTest.cpp $(SRCA)/TwoDArray.o $(GTEST_MAINA)

vector_test: VectorTest.cpp $(SRCV)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o vector_test VectorTest.cpp $(SRCV)/TwoDArray.o $(GTEST_MAINA)

sparse_test: SparseTest.cpp $(SRCS)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o sparse_test SparseTest.cpp $(SRCS)/TwoDArray.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f array_test
	rm -f vector_test
	rm -f sparse_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


