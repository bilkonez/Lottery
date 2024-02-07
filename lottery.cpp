#include <iostream>
#include <cmath>

using namespace std;

void InputOfNumbers();

int main() {

	InputOfNumbers();




	system("pause > 0");
	return 0;

}



void PayIn() {

	int StartingBalance = 100;
	int CurrentBalance;





















}






void InputOfNumbers() {

	int styleOfPlay;
	

	cout << "Do you want to play 6, 7 or 8 numbers? (input 6 or 7 or 8) " << endl;
	cin >> styleOfPlay;

	if (styleOfPlay == 6)
	{
		int numbers[6];

		for (int i = 0; i < 6; i++)
		{
			cout << "Input your " << i + 1 << ". " << "number (between 1 - 48) :" << endl;
			cin >> numbers[i];

			if (numbers[i] > 48 || numbers[i] < 1) {

				cout << "Invalid input." << endl;
				i--;

			}

			bool alreadyExists = false;

			for (int j = 0; j < i; j++) {

				if (numbers[j] == numbers[i]) {

					alreadyExists = true;
					break;

				}
			}

			if (alreadyExists) {

				cout << "Wrong input. Number is already in your ticket." << endl;
				i--;

			}
		}
	}
	else if (styleOfPlay == 7)
	{
		int numbers[7];

		for (int i = 0; i < 7; i++)
		{
			cout << "Input your " << i + 1 << ". " << "number (between 1 - 48) :" << endl;
			cin >> numbers[i];

			if (numbers[i] > 48 || numbers[i] < 1) {

				cout << "Invalid input." << endl;
				i--;

			}

			bool alreadyExists = false;

			for (int j = 0; j < i; j++) {

				if (numbers[j] == numbers[i]) {

					alreadyExists = true;
					break;

				}
			}

			if (alreadyExists) {

				cout << "Wrong input. Number is already in your ticket." << endl;
				i--;

			}
		}
	}
	else if (styleOfPlay == 8)
	{
		int numbers[8];

		for (int i = 0; i < 8; i++)
		{
			cout << "Input your " << i + 1 << ". " << "number (between 1 - 48) :" << endl;
			cin >> numbers[i];

			if (numbers[i] > 48 || numbers[i] < 1) {

				cout << "Invalid input." << endl;
				i--;

			}

			bool alreadyExists = false;

			for (int j = 0; j < i; j++) {

				if (numbers[j] == numbers[i]) {

					alreadyExists = true;
					break;

				}
			}

			if (alreadyExists) {

				cout << "Wrong input. Number is already in your ticket." << endl;
				i--;

			}
				
		}
	}

	else
		cout << "Invalid input please try again." << endl;

}



