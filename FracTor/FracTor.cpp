// FracTor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "fraction.h"
#include "handleFractions.h"

using namespace std;

int main ()
{
	handleFractions handler;
	string input;

	cout << "FracTor\n-------" << endl;
	cout << "Um etwas zu berechnen musst du (zwei) Brueche eingeben sowie einen Operator" << endl <<
		"Beispiel Eingaben: 1/2 + 3/4 | 1/2 - 3/4 | 1/2 * 3/4 | 1/2 : 3/4 | 1/2 ^ 3" << endl <<
		"Deine Rechnung:\t";
	getline (cin, input);

	Tfraction res = handler.handler (input);

	cout << "Das Ergebnis:\t" << res.z << "/" << res.n;
	getchar ();
	getchar ();
	return 0;
}

