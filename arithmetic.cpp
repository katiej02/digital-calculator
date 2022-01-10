#include <iostream>
#include <stdexcept>
#include "arithmetic.hpp"
#include "input.hpp"

using namespace std;

double add_numbers(double num1, double num2)
{
	return num1 + num2;
}

double subtract_numbers(double num1, double num2)
{
	return num1 - num2;
}

double multiply_numbers(double num1, double num2)
{
	return num1 * num2;
}

double divide_numbers(double num1, double num2)
{
	if (num2 == 0)
	{
		throw runtime_error("Cannot divide by zero!\n");
	}
	else
		return num1 / num2;
}
