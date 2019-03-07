// FracTor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "fracture.h"
#include "AdvFractions.h"
#include "BasicFractions.h"
using namespace std;

int main()
{
	string input;
	
	cout << "FracTor\n-------" << endl;
	cout << "Um etwas zu berechnen musst du (zwei) Brueche eingeben" << endl <<
		"Beispiel eingaben:		1/2 + 3/4	|	1/2 - 3/4	|	1/2 * 3/4	|	1/2 : 3/4	|	1/2 ^ 3";
	getline(cin, input);


    return 0;
}

