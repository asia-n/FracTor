// FracTor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	string input;

	cout << "FracTor\n-------" << endl;
	cout << "Um etwas zu berechnen musst du (zwei) Brueche eingeben sowie einen Operator" << endl <<
		"Beispiel Eingaben: 1/2 + 3/4 | 1/2 - 3/4 | 1/2 * 3/4 | 1/2 : 3/4 | 1/2 ^ 3" << endl <<
		"Deine Rechnung:\t";
	getline(cin, input);


	return 0;
}

