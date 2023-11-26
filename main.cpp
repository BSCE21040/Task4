#include"function.h"

int main()
{
	int choice;
	int digit;
	cout << "Enter the last digit of your CNIC: ";
	cin >> digit;
	while (true)
	{
		cout << "1. Area, Perimeter and Sum of all the Angles of Hexagon" << endl;
		cout << "2. Area and Perimeter of the Square." << endl;
		cout << "Enter: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
			calcArea(digit);
			calcPeri(digit);
			calcAngleSum();
			displayHex();
			cout << endl;
			break;
		}
		case 2:
		{
			calcAreaSquare(digit);
			calcPeriSquare(digit);
			displaySquare();
			cout << endl;
			break;
		}
		default:
		{
			cout << "Invalid Input! Exiting Program." << endl;
			exit(0);
		}
		}
	}
	return 0;
}