CCX=g++
CXXFLAGS=-Wall -Wextra -Werror

all: main

main: main.o fraction.o
	$(CCX) $(CCXXFLAGS) -o main.out main.o fraction.o

main.o: main.cc rpn.h fraction.h
	$(CCX) $(CCXXFLAGS) -c main.cc 

fraction.o: fraction.cc fraction.h
	$(CCX) $(CCXXFLAGS) -c fraction.cc

clean:
	rm -f main.out *.o
