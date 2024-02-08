#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

bool InputOfNumbers();
bool PayIn();
void Game();

int main() {

	if(!InputOfNumbers()){
		return 1;
	}
	if(!PayIn()){
		return 1;
	}
	Game();

	




	system("pause");
	return 0;

}

void Game(){

	vector<int> OutputNumbers(48);

	for (int i = 0; i < 48; i++)
	{
		OutputNumbers[i] = i + 1;
	}

	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(OutputNumbers.begin(), OutputNumbers.end(), g);

	cout <<"Welcome to LOTTERYIO. Game is starting soon." << endl;
	cout<< " " << endl;
	cout<< "." << endl;
	cout<< "." << endl;
	cout<< "." << endl;
	cout<< " " << endl;


	for (int i = 0; i < 30; i++)
	{
		Sleep(2000);
		cout << OutputNumbers[i]<< endl;
	}

}


bool PayIn() {

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

		return true;

	}
	else
	{

	cout << "Insufficient balance. Try again." << endl;
	return false;

	}

}

bool InputOfNumbers() {

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
		
		return true;

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

		return true;

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

		return true;

	}

	else
		cout << "Invalid input please try again." << endl;

	return false;


}






