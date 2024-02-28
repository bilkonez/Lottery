#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>
#include <unordered_set>

using namespace std;


int main() {

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
			cout << "Your " << i + 1 << ". number is : " << numbers[i] << " " << endl;
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
			cout << "Your " << i + 1 << ". number is : " << numbers[i] << " " << endl;
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
			cout << "Your " << i + 1 << ". number is : " << numbers[i] << " " << endl;
		}

		return true;

	}
	else
		cout << "Invalid input please try again." << endl;
	return false;

	const int StartingBalance = 100;
	int CurrentBalance;
	int BettingAmount;

	cout << "Your current balance is : " << StartingBalance << endl;
	cout << "Select the amount you would like to put on your lottery ticket : " << endl;
	cin >> BettingAmount;

		if (BettingAmount <= StartingBalance && BettingAmount > 0) {

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



	vector<int> OutputNumbers(48);

	for (int i = 0; i < 48; i++)
	{
		OutputNumbers[i] = i + 1;
	}

	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(OutputNumbers.begin(), OutputNumbers.end(), g);

	int HowManyNumbers;
	cout <<"Choose how many numbers you want to see? (25, 30, 35, Less numbers more money) : " << endl;
	cin >> HowManyNumbers;

	if (HowManyNumbers == 25 ){

		cout <<"Welcome to LOTTERYIO. Game is starting soon." << endl;
		cout<< " " << endl;
		cout<<"If you choose 6 balls your potential earnings are : For 25 Numbers * 3, For 30 Numbers * 2.5, For 35 Numbers * 2" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 7 balls your potential earnings are : For 25 Numbers * 2, For 30 Numbers * 1.75, For 35 Numbers * 1.5" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 8 balls your potential earnings are : For 25 Numbers * 1.75, For 30 Numbers * 1.5, For 35 Numbers * 1.25" << endl;
		Sleep(6000);
		cout<< " " << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< " " << endl;
		cout<< "Game is starting..." << endl;
		cout<< " " << endl;
		Sleep(2000);

		for (int i = 0; i < 25; i++)
		{
		Sleep(2000);
		cout << OutputNumbers[i]<< endl;
		}

	}
	else if (HowManyNumbers == 30 ){

		cout <<"Welcome to LOTTERYIO. Game is starting soon." << endl;
		cout<< " " << endl;
		cout<<"If you choose 6 your potential earnings are : For 25 Numbers * 3, For 30 Numbers * 2.5, For 35 Numbers * 2" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 7 your potential earnings are : For 25 Numbers * 2, For 30 Numbers * 1.75, For 35 Numbers * 1.5" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 8 your potential earnings are : For 25 Numbers * 1.75, For 30 Numbers * 1.5, For 35 Numbers * 1.25" << endl;
		Sleep(6000);
		cout<< " " << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< " " << endl;
		cout<< "Game is starting..." << endl;
		cout<< " " << endl;
		Sleep(2000);

		for (int i = 0; i < 30; i++)
		{
		Sleep(2000);
		cout << OutputNumbers[i]<< endl;
		}

	}
	else if (HowManyNumbers == 35 ){

		cout <<"Welcome to LOTTERYIO. Game is starting soon." << endl;
		cout<< " " << endl;
		cout<<"If you choose 6 your potential earnings are : For 25 Numbers * 3, For 30 Numbers * 2.5, For 35 Numbers * 2" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 7 your potential earnings are : For 25 Numbers * 2, For 30 Numbers * 1.75, For 35 Numbers * 1.5" << endl;
		Sleep(6000);
		cout << "." << endl;
		cout<<"If you choose 8 your potential earnings are : For 25 Numbers * 1.75, For 30 Numbers * 1.5, For 35 Numbers * 1.25" << endl;
		Sleep(6000);
		cout<< " " << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< "." << endl;
		cout<< " " << endl;
		cout<< "Game is starting..." << endl;
		cout<< " " << endl;
		Sleep(2000);

		for (int i = 0; i < 25; i++)
		{
		Sleep(2000);
		cout << OutputNumbers[i]<< endl;
		}

	}
	else {

		cout << "Wrong input." << endl;
		return 1;

	}

	int matchingNumbers = 0;

	unordered_set<int> userNumberSet(userNumbers.begin(), userNumbers.end());
	
	for (int i = 0; i < styleOfPlay; ++i) {
		if (userNumberSet.find(OutputNumbers[i]) != userNumberSet.end()) {
			matchingNumbers++;
		}
	}

	double potentialEarnings = 0;

	if (styleOfPlay == 6) {
		if (matchingNumbers == 25) {
			potentialEarnings = BettingAmount * 3;
		}
		else if (matchingNumbers == 30) {
			potentialEarnings = BettingAmount * 2.5; 
		}
		else if (matchingNumbers == 35) {
			potentialEarnings = BettingAmount * 2;
		}
		else {
			potentialEarnings = 0;
		}
	}

	else if (styleOfPlay == 7) {

		if (matchingNumbers == 25) {
			potentialEarnings = BettingAmount * 2;
		}
		else if (matchingNumbers == 30) {
			potentialEarnings = BettingAmount * 1.75;
		}
		else if (matchingNumbers == 35) {
			potentialEarnings = BettingAmount * 1.5;
		}
		else {
			potentialEarnings = 0;
		}

	}

	else {
		
		if (matchingNumbers == 25) {
			potentialEarnings = BettingAmount * 1.75;
		}
		else if (matchingNumbers == 30) {
			potentialEarnings = BettingAmount * 1.5;
		}
		else if (matchingNumbers == 35) {
			potentialEarnings = BettingAmount * 1.25;
		}
		else {
			potentialEarnings = 0;
		}

	}

	cout << "You matched : " << matchingNumbers << " numbers." << endl;
	cout << "Your earnings: " << potentialEarnings << endl;


	system("pause");
	return 0;

}











