SRC = ./src
TEST = ./test

CPP = g++
CPPFLAGS = -Wall -Wextra

all:
	cd $(SRC); $(MAKE)
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean	
