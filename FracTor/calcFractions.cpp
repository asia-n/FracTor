#include "stdafx.h"
#include "fraction.h"
#include "CalcFractions.h"
#include "math.h"

Tfraction calcFractions::addition (Tfraction fractureA, Tfraction fractureB)
{
	Tfraction resultFraction;


	if (fractureA.n == fractureB.n)
	{
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z + fractureB.z;

	}
	else
	{
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z = (fractureA.z*fractureB.n) + (fractureA.n * fractureB.z);
	}

	return ea (resultFraction);
}

Tfraction calcFractions::substraction (Tfraction fractureA, Tfraction fractureB)
{
	Tfraction resultFraction;


	if (fractureA.n == fractureB.n)
	{
		resultFraction.n = fractureA.n;
		resultFraction.z = fractureA.z - fractureB.z;

	}
	else
	{
		resultFraction.n = fractureA.n * fractureB.n;
		resultFraction.z = (fractureA.z*fractureB.n) - (fractureA.n * fractureB.z);

	}
	return ea (resultFraction);
}

Tfraction calcFractions::multiplication (Tfraction fractureA, Tfraction fractureB)
{
	Tfraction resultFraction;


	resultFraction.n = fractureA.n * fractureB.n;
	resultFraction.z = fractureA.z * fractureB.z;

	return ea (resultFraction);
}

Tfraction calcFractions::division (Tfraction fractureA, Tfraction fractureB)
{
	Tfraction resultFraction;


	resultFraction.n = fractureA.n * fractureB.z;
	resultFraction.z = fractureA.z * fractureB.n;

	return ea (resultFraction);
}

Tfraction calcFractions::power (Tfraction fracture, int exp)
{
	fracture.z = (int) pow (fracture.z, exp);
	fracture.n = (int) pow (fracture.n, exp);

	return ea (fracture);
}

Tfraction calcFractions::shorten (Tfraction fracture)
{
	for (int i = 2; i <= fracture.n; i++)
	{
		if (fracture.n%i == 0 && fracture.z%i == 0)
		{
			fracture.z /= i;
			fracture.n /= i;
			i = 2;
		}
	}
	return fracture;
}

Tfraction calcFractions::ea (Tfraction fraction)
{
	int n = fraction.n;
	int z = fraction.z;
	int temp;

	while (n != 0)
	{
		temp = z % n;
		z = n;
		n = temp;
	}

	return{fraction.z/z,fraction.n/z};
}