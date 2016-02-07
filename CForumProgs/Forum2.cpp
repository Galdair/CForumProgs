#include "stdafx.h"
#include <iostream>
using namespace std;
int colaMachen(int choice) {
	switch (choice)
	{ // a simple switch statement
	case 1:
		cout << "you ahve entered one" << endl;
		break;
	case 2:
		cout << "you ahve entered two" << endl;
		break;
	case 3:
		cout << "you have entered three" << endl;
		break;
	case 4:
		cout << "you ahve entered four" << endl;
		break;
	case 5:
		cout << "you ahve entered five" << endl;
		break;
	default:
		cout << "sorry what you entered is not a valid option";
		break;
	}

	return 0;
}
int gluttonizer() {
	//bad little program wich ameks you enter five
	int userinput = 0;
	cout << "enter number 5" << endl;
	while (userinput != 5) {

		cin >> userinput;
		cout << "this is not 5!!";


	}
	cout << "you entered five good job!" << endl;


	return 0;
}
int gluttonizer(bool statement) {
	if (statement == true) {
		int userinput = 1201;
		int iter = 1;
		
		while (userinput != iter ) {
			cout << "enter number " << iter+1 << endl;
			cin >> userinput;
			
			iter++;

		}
		cout << "you entered five good job!" << endl;

	}
	return 0;
}
int pancaker() {
	//pancake checker checkes for pancakes and gives you bakc he top notch one
	int pancakes[9];
	for (int i = 0; i != 9; i++)
	{
		cout << "enter the nubmer you have eaten" << endl;
		cin >> pancakes[i];
	}
	int ergosum = pancakes[1];
	for (int i = 0; i < 9; i++)
	{
		if (pancakes[i] >= ergosum) {
			ergosum = pancakes[i];

		}
	}
	cout << ergosum;
	return 0;
}
//bubblesort
int pancaker(int pancakes[9]) {
	for (int i = 0; i < 9; i++)
	{
		for (int k = 0; k < 9; k++) {
			if (pancakes[i] <= pancakes[k])
			{
				int temp = pancakes[k];
				pancakes[k] = pancakes[i];
					pancakes[i] = temp;
			}



		}


	}
	
	return 0;
	}






int forumrandom() {
	int lolwhat[9] = { 81,22,34,52,42,321,4,5,65 };
	pancaker(lolwhat);// kiírja dolgokat

	for (int i = 0; i < 9; i++)
	{
		cout << lolwhat[i]<<endl;

	}
	cin.get();
	return 0;
}

