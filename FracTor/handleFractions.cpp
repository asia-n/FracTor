#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "handleFractions.h"
#include "fraction.h"
#include "calcFractions.h"
using namespace std;

void handleFractions::handler(string input) {
	input.erase(remove_if(input.begin(), input.end(), isspace), input.end());
	char ops[] = { '+','-','*',':','^' };


	int i = 0;

	while (i < sizeof(ops) / sizeof(ops[0]) && input.find(ops[i]) == std::string::npos) {
		i++;
	}

	switch (ops[i])
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case ':':
		break;
	case '^':

	}
}
Tfraction handleFractions::stringToFraction(string fraction) {


}
