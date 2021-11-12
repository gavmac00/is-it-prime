#include <iostream>
#include "primeCalculator.h"

using namespace std;

bool primeClass::primeCalculator(int v) {
	int factor = 0;

	if (v == 2) { //2 is a special case, imediate answer
		return true;
	}
	else {
		for (int i = 2; i < v; i++) { //for loop to check every integer between 2 and the given value
			if (v % i == 0) { 
				factor++;
			}
		}
	}
	
	//review of factors
	if (factor > 0) { //if at least one factor was found
		return false;
	}
	else if (factor == 0) { //if there was no factor
		return true;
	}
}