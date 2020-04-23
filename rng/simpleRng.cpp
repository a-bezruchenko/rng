#include "simpleRng.h"

simpleRng::simpleRng(float seed)
{
	state = seed;
}

float simpleRng::randomFloat()
{
	state = state*(1-state)*3.99999;
	return state;
}