#include "stdafx.h"
#include <iostream>

using namespace std;


int mainNOTREADY() {
	long karakterek[6];
	long szam = 99876;
	int k = 1000;
	int i = 0;
	while (i != 5) {
		karakterek[i] = szam%10000;
		karakterek[i] *= k;
		i++; // need to figure out how to get single number back ,stuff mathematics
		k = k / 10;


	}for (int j = 0; j < 5; j++)
	{
		cout<<karakterek[i]<<endl;
	}
	
	cin.get();
	return 0;
}