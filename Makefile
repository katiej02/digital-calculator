CC=g++

digital_calc: main.cpp arithmetic.cpp
	$(CC) -g -o digital_calculator main.cpp arithmetic.cpp input.cpp
