// A8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "A8.h"

using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;
	string answer = "";

	cout << "Ievadiet pirmo skaitili:  ";
	cin >> firstNumber;
	cout << "Ievadiet otro skaitli:  ";
	cin >> secondNumber;

	answer = compareNumbers(firstNumber, secondNumber);

	cout << answer;

    return 0;
}

string compareNumbers(int first, int second)
{
	if (first % second == 0 || second % first == 0) {
		return "Skaitli ir savstarpeji pirmskaitli.";
	}

	return "Skaitli nav savstarpeji pirmskaitli.";
}