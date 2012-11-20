// DiceRoller.cpp : Defines the entry point for the console application.
//

//#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
#include <iomanip> 
using std::setprecision;	


int main()
{
	double i;
	int number = 6;
	double rate = 0;
	double frequencyPercentage;
	double iterations = pow((double) 10, (double) 11);
	i = iterations;
	cout << std::setprecision(100) << i;
	srand(time(0));

	clock_t start = clock();
	for (i = iterations; i >= 1; i--) {
		int random = (rand() % 6 + 1);
		if (random == number) {
			rate++;
		}
	}
	clock_t end = clock();
	clock_t millis = end - start;

	//cout << rate;
	//cout << "\r\n";
	frequencyPercentage = (rate / iterations) * 100;
	cout << "Iterations: " << std::setprecision(100) << iterations << "\r\n";
	cout << "Rate of " << number << "'s: " << rate << "\r\n";
	cout << "Frequency: " << std::setprecision(51) << frequencyPercentage << "\r\n";
	cout << "Time taken: " << millis << "\r\n";
	
	//system("pause");
	return 0;
}

