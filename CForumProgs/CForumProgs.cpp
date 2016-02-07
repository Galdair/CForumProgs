// CForumProgs.cpp : Defines the entry point for the console application.
//Score initializer program

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
double Avarager(double num1, double num2, double num3) {
	
	
	return (num1 + num2 + num3) / 3;


}

void ScoreCounter(double score) {




	cout << "hello, tell me your score" << endl;
	int YourScore;
	cin >> YourScore;
	if (YourScore == 100) {
		cout << "congrats you are a very smart ass kid" << endl;

	}
	else if (YourScore <= 100 && YourScore >= 90)
	{
		cout << "good job you got an A!!" << endl;

	}
}
bool NumberIsPrime(long long prime) {
	//chceks if number is prime
	for (int i = 2; i != (long long)sqrt(prime) + 1; i++)
	{ 
		if (prime % i == 0) {
			
			return false;
			
		}
		
	}
	
	return true;

}
// a finds a numbers biggest prime
long long primefinder(long long number) {
	long long highestoszto = 0;
	for (long long i = 2;i != (long long)sqrt(number); i++)
	{
		if (number % i == 0) {
			if (NumberIsPrime(i)) {
				highestoszto = i;


			}
		}

	}
	return highestoszto;
}

int primes()
{

	cout << primefinder(600851475143) << endl;
	cin.get();
	
    return 0;
}

