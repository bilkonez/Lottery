#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdlib>

using namespace std;

void InputOfNumbers();
void PayIn();
void Game();

int main() {

	InputOfNumbers();
	PayIn();
	Game();




	system("pause");
	return 0;

}

void Game(){

int OutputNumbers[48];

for (int i = 0; i < 48; i++)
{
	OutputNumbers[i] = rand() % 48 + 1;
}


for (int i = 0; i < 48; i++)
{
	Sleep(1000);
	cout << OutputNumbers[i];
}

}


void PayIn() {

	const int StartingBalance = 100;
	int CurrentBalance;
	int BettingAmount;

	cout << "Select the amount you would like to put on your lottery ticket : " << endl;
	cin >> BettingAmount;

	if (BettingAmount <= StartingBalance && BettingAmount > 0){

		CurrentBalance = StartingBalance - BettingAmount;

		if (CurrentBalance < 0) {
        CurrentBalance = 0;
		}

		cout << "You decided to bet " << BettingAmount << " coins." << endl;
		cout << "Your current balance is : " << CurrentBalance << " coins." << endl;

	}
	else
	{

	cout << "Insufficient balance. Try again." << endl;
	

	}

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

		for (int i = 0; i < 6; i++)
		{
			cout << "Your "<< i+1 << ". number is : " << numbers[i] << " " << endl;
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

		for (int i = 0; i < 7; i++)
		{
			cout << "Your "<< i+1 << ". number is : " << numbers[i] << " " << endl;
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

		for (int i = 0; i < 8; i++)
		{
			cout << "Your "<< i+1 << ". number is : " << numbers[i] << " " << endl;
		}

	}

	else
		cout << "Invalid input please try again." << endl;


}






