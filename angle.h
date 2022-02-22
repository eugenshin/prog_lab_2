#pragma once
#include "point.h"
struct angle
{
	point ftpoint, verpoint, sdpoint;
};

void anglevvod(angle* angle);
void anglevivod(angle* angle);
float anglevalue(angle* angle);