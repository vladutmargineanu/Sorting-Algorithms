CC = g++
CFLAGS = -Wall -Wextra -O2
LDLIBS = -lm

build: algo.o

run:
	./tester

build_best: algo.o tester.o
	g++ algo.o tester.o -o tester $(CFLAGS)

build_snd_best: algo2.o tester.o
	g++ algo2.o tester.o -o tester $(CFLAGS)	

build_trd_best: algo3.o tester.o
	g++ algo3.o tester.o -o teste $(CFLAGS)

algo.o: algo.cpp
	g++ algo.cpp -c $(CFLAGS)

algo2.o: algo2.cpp
	g++ algo2.cpp -c $(CFLAGS)	

algo3.o: algo3.cpp
	g++ algo3.cpp -c $(CFLAGS)

tester.o: tester.cpp
	g++ tester.cpp -c $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o tester
