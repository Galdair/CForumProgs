#include "stdafx.h"
#include <iostream>

using namespace std;

int bracketingSearch()
{
	int guess = 50;
	int yesorno = 0 ;
	cout << "write one if that was your guess write two if its too high and write 0 if its too low";

	while (yesorno != 1) {
		cout << "another guess" << endl;
		cin >> yesorno;
		if (yesorno == 2)
		{
			guess += guess / 2;
		}
		else if (guess == 0) {
			guess -= guess / 2;


		}
		cout << guess << endl;
	}

	//not working
	return guess;
}


int main() {
	cout<<bracketingSearch();
}