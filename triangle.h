#pragma once
#include "point.h"
struct triangle
{
	point ftpoint, sdpoint, tdpoint;
};

void trianglevvod(triangle* triangle);
void trianglevivod(triangle* triangle);
float trianglesquare(triangle* triangle);
float triangleper(triangle* triangle);