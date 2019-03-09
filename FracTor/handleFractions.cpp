#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "handleFractions.h"
#include "fraction.h"
#include "calcFractions.h"

using namespace std;

Tfraction handleFractions::handler (string input)
{

	calcFractions calc;
	char ops[] = { '+','-','*',':','^' };
	Tfraction fractionA;
	Tfraction fractionB;
	int exp;

	input.erase (remove_if (input.begin (), input.end (), isspace), input.end ());
	int i = 0;

	while (i < sizeof (ops) / sizeof (ops[0]) && input.find (ops[i]) == std::string::npos)
	{
		i++;
	}
	
	int pos = input.find (ops[i]);


	fractionA = stringToFraction (input.substr (0, pos));
	if (i <= 3)
	{
		fractionB = stringToFraction (input.substr (pos + 1));
	}
	else
	{
		exp = stoi (input.substr (pos + 1));
	}

	switch (ops[i])
	{

		case '+':
			return calc.addition (fractionA, fractionB);

		case '-':
			return calc.substraction (fractionA, fractionB);

		case '*':
			return calc.multiplication (fractionA, fractionB);

		case ':':
			return calc.division (fractionA, fractionB);

		case '^':
			return calc.power (fractionA, exp);
	}
}
Tfraction handleFractions::stringToFraction (string fraction)
{
	string z, n;
	z = fraction.substr (0, fraction.find ("/"));
	n = fraction.substr (fraction.find ("/") + 1);

	return{ stoi (z),stoi (n) };
}
