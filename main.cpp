#include <iostream>
#include <cstring>
#include <stdexcept> //to use runtime_error
#include "arithmetic.hpp"
#include "input.hpp"

using namespace std;

int main()
{
	string user_input;
	cout << "*******************************************************" << endl;
	cout << "DIGITAL CALCULATOR" << endl;
	cout << "*******************************************************" << endl;
	cout << "Enter 'y' to start, 'exit' to quit: ";
	cin >> user_input;

	while (user_input != "exit")
	{
		if (user_input == "y")
		{
			cout << "*******************************************************" << endl;
			display_operations();
			string operation;
			cout << "\nInput operation: ";
			cin >> operation;

			if (operation.length() > 1)
			{
				// handling for string input; if 'exit', exit program. otherwise display options again
				if (operation == "exit")
					user_input = operation;
				else
					cout << "Cannot recognize operation! Please select from the options." << endl;
			}
			else
			{
				//store as char
				char operation_char = operation[0];
				switch (operation_char)
				{
				case '+':
				{
					double num1 = input_first_num();
					double num2 = input_second_num();
					print_result(operation_char, num1, num2, add_numbers(num1, num2));
					cout << "\nPerform another operation? Enter 'y' to continue, 'exit' to quit program." << endl;
					cin >> user_input;
				}
				case '-':
				{
					double num1 = input_first_num();
					double num2 = input_second_num();
					print_result(operation_char, num1, num2, subtract_numbers(num1, num2));
					cout << "\nPerform another operation? Enter 'y' to continue, 'exit' to quit program." << endl;
					cin >> user_input;
					break;
				}
				case '*':
				{
					double num1 = input_first_num();
					double num2 = input_second_num();
					print_result(operation_char, num1, num2, multiply_numbers(num1, num2));
					cout << "\nPerform another operation? Enter 'y' to continue, 'exit' to quit program." << endl;
					cin >> user_input;
					break;
				}
				case '/':
					try
					{
						double num1 = input_first_num();
						double num2 = input_second_num();
						print_result(operation_char, num1, num2, divide_numbers(num1, num2));
					}
					catch (runtime_error &e)
					{
						cout << "\nException occurred" << endl
							 << e.what();
					}
					cout << "\nPerform another operation? Enter y to continue, 'exit' to quit program." << endl;
					cin >> user_input;
					break;
				default:
					cout << "\nCannot recognize operation! Please select from the options." << endl;
				}
			}
		}
		else
		{
			//input other than +, -, *, /, exit
			cout << "Input not recognized. Please enter 'y' or 'exit' only." << endl;
			cin >> user_input;
		}
	}

	cout << "\nProgram exited successfully!!!!! BYE!\n"
		 << endl;
	return 0;
}
