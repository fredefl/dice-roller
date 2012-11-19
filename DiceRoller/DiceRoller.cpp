// DiceRoller.cpp : Defines the entry point for the console application.
//

//#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include <iomanip> 
using std::setprecision;	


int main()
{
	double i;
	int number = 6;
	double rate = 0;
	double frequencyPercentage;
	double iterations = 100 * 1000 * 1000 * 1000;
	srand(time(0));

	clock_t start = clock();
	for (i = iterations; i >= 1; i--) {
		int random = 1 + (rand() % (int)(6 - 1 + 1));
		if (random == number) {
			rate++;
		}
	}
	clock_t end = clock();
	clock_t millis = end - start;

	//cout << rate;
	//cout << "\r\n";
	frequencyPercentage = (rate / iterations) * 100;
	cout << "Frequency: ";
	cout << std::setprecision(51) << frequencyPercentage;
	cout << "\r\n";
	cout << "Time taken: ";
	cout << millis;
	cout << "\r\n";
	
	system("pause");
	return 0;
}

