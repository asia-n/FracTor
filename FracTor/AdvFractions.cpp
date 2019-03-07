#include "stdafx.h"
#include "AdvFractions.h"
#include "math.h"
#include "fracture.h"

Tfracture AdvFractions::power(int exp, Tfracture fracture) {
	fracture.z = pow(fracture.z, exp);
	fracture.n = pow(fracture.n, exp);

	return shorten(fracture);
}

Tfracture AdvFractions::shorten(Tfracture fracture) {
	for (int i = 2; i <= fracture.n; i++) {
		if (fracture.n%i == 0 && fracture.z%i == 0) {
			fracture.z /= i;
			fracture.n /= i;
			i = 2;
		}
	}
	return fracture;
}