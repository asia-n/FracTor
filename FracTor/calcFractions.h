#pragma once
#include "fraction.h"

class calcFractions
{
public:
	Tfraction addition (Tfraction fractureA, Tfraction fractureB);
	Tfraction substraction (Tfraction fractureA, Tfraction fractureB);
	Tfraction multiplication (Tfraction fractureA, Tfraction fractureB);
	Tfraction division (Tfraction fractureA, Tfraction fractureB);

	Tfraction power (Tfraction fracture, int exp);
	Tfraction shorten (Tfraction fracture);
};

