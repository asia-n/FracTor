#include "stdafx.h"
#include "BasicFractions.h"
#include "fracture.h"

Tfracture BasicFractions::addition(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;

	if (fractureA.n == fractureA.n) {
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z + fractureB.z;

	}
	else {
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z =   (fractureA.z*fractureB.n)+ (fractureA.n * fractureB.z);
	}

	return resultFraction;
}

Tfracture BasicFractions::substraction(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;

	if (fractureA.n == fractureA.n) {
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z - fractureB.z;

	}
	else {
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z = (fractureA.z*fractureB.n) - (fractureA.n * fractureB.z);

	}
	//Kürzen

	return resultFraction;
}

Tfracture BasicFractions::multiplication(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;
	resultFraction.n = fractureA.n * fractureB.n;
	resultFraction.z = fractureA.z * fractureB.z;

	return resultFraction;
}

Tfracture BasicFractions::division(Tfracture fractureA, Tfracture fractureB) {
	Tfracture resultFraction;
	resultFraction.n = fractureA.n * fractureB.z;
	resultFraction.z = fractureA.z * fractureB.n;

	return resultFraction;
}

