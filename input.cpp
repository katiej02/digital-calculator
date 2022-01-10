#include <iostream>
#include <limits>
#include "input.hpp"

using namespace std;

void display_operations()
{
	cout << "\nAvailable operations. \n(enter 'exit' to exit program)" << endl;
	cout << "+ for addition" << endl;
	cout << "- for subtraction" << endl;
	cout << "* for multiplication" << endl;
	cout << "/ for division" << endl;
}

char input_operation()
{
	char operation;
	cout << "\nEnter operation: ";
	cin >> operation;
	return operation;
}

void print_result(char operation, double num1, double num2, double result)
{
	//string result_exp = "" + num1 + operation + num2 + " = " + result;
	cout << "Equation: " << num1 << operation << num2 << " = " << result << endl;
}

double input_first_num()
{
	double num1{};
	while ((cout << "Enter first num: ") && !(cin >> num1))
	{
		cout << "Invalid input. Not a number!\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //cin.ignore(10000, '\n');
	};

	return num1;
}

double input_second_num()
{
	double num2{};
	while ((cout << "Enter second num: ") && !(cin >> num2))
	{
		cout << "Invalid input. Not a number!\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	};
	return num2;
}
