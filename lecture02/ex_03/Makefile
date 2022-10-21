CCX=g++
CXXFLAGS=-Wall -Wextra -Werror

all: main

main: main.o fraction.o
	$(CCX) $(CCXXFLAGS) -o main.out main.o fraction.o

main.o: main.cc rpn.h ../../lecture01/ex_02/fraction.h
	$(CCX) $(CCXXFLAGS) -c main.cc 

fraction.o: ../../lecture01/ex_02/fraction.cpp ../../lecture01/ex_02/fraction.h
	$(CCX) $(CCXXFLAGS) -c ../../lecture01/ex_02/fraction.cpp

clean:
	rm -f main.out *.o
