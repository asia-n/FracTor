#include "stdafx.h"
#include "fracture.h"
#include "CalcFractions.h"
#include "math.h"

Tfracture CalcFractions::addition(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;


	if (fractureA.n == fractureA.n) {
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z + fractureB.z;

	}
	else {
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z = (fractureA.z*fractureB.n) + (fractureA.n * fractureB.z);
	}

	return shorten(resultFraction);
}

Tfracture CalcFractions::substraction(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;


	if (fractureA.n == fractureA.n) {
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z - fractureB.z;

	}
	else {
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z = (fractureA.z*fractureB.n) - (fractureA.n * fractureB.z);

	}
	return shorten(resultFraction);
}

Tfracture CalcFractions::multiplication(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;


	resultFraction.n = fractureA.n * fractureB.n;
	resultFraction.z = fractureA.z * fractureB.z;

	return shorten(resultFraction);
}

Tfracture CalcFractions::division(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;


	resultFraction.n = fractureA.n * fractureB.z;
	resultFraction.z = fractureA.z * fractureB.n;

	return shorten(resultFraction);
}

Tfracture CalcFractions::power( Tfracture fracture,int exp) {
	fracture.z = (int)pow(fracture.z, exp);
	fracture.n = (int)pow(fracture.n, exp);

	return shorten(fracture);
}

Tfracture CalcFractions::shorten(Tfracture fracture) {
	for (int i = 2; i <= fracture.n; i++) {
		if (fracture.n%i == 0 && fracture.z%i == 0) {
			fracture.z /= i;
			fracture.n /= i;
			i = 2;
		}
	}
	return fracture;
}