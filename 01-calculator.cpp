

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double num1, num2, result;
	char operation;
	string continueChoice = "yes";

	cout << "===== BASIC CALCULATOR ==== " << endl;

	//Loop continues until the user types "no"
	while (continueChoice == "yes") {

		cout << "\nEnter the first number:";
		cin >> num1;


		cout << "\nEnter the operation ( + , - , * , / ):";
		cin >> operation;

		cout << "\nEnter the second number:";
		cin >> num2;

		switch (operation) {
		case '+':
			result = num1 + num2;
			cout << "\nResult:" << result << endl;
			break;
	
		case '-':
			result = num1 - num2;
			cout << "\nResult: " << result << endl;
			break;

		case '*':
			result = num1 * num2;
			cout << "\nResult: " << result << endl;
			break;

		case '/':
			if (num2 == 0) {
				cout << "Error: Cannot divide by zero!" << endl;
			}
			else {
				result = num1 / num2;
				cout << "\nResult: " << result << endl;
			}
			break;

		default:
			cout << "\nInvalid operation! Please use + , - , * , or / ." << endl;
			break;
		}

		cout << "\nDo you want continue? (yes/no):";
		cin >> continueChoice;
	}

	cout << "\nProgram terminated. Have a nice day!" << endl;
	return 0;
  
}

