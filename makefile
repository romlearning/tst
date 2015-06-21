all: tst
tst: main.cpp func2.cpp func2.hpp
	g++ -o tst main.cpp func2.cpp

