#pragma once
#include "fracture.h"

class CalcFractions
{
public:
	Tfracture addition(Tfracture fractureA, Tfracture fractureB);
	Tfracture substraction(Tfracture fractureA, Tfracture fractureB);
	Tfracture multiplication(Tfracture fractureA, Tfracture fractureB);
	Tfracture division(Tfracture fractureA, Tfracture fractureB);

	Tfracture power(Tfracture fracture,int exp);
	Tfracture shorten(Tfracture fracture);
};

