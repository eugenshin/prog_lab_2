#pragma once
#include "point.h"
struct circle
{
	point center;
	float radius;
};

void circlevvod(circle* circle);
void circlevivod(circle* circle);
float circlesquare(circle* circle);
float circleper(circle* circle);