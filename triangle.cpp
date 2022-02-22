#define _CRT_SECURE_NO_WARNINGS
#include "triangle.h"
#include <iostream>
#include "angle.h"
#include <math.h>

void trianglevvod(triangle* triangle)
{
	pointvvod(&triangle->ftpoint);
	pointvvod(&triangle->sdpoint);
	pointvvod(&triangle->tdpoint);
	return;
}

void trianglevivod(triangle* triangle)
{
	printf("Первая точка треугольника: %.3f %.3f\nВторая точка треугольника: %.3f %.3f\nТретья точка треугольника: %.3f %.3f", triangle->ftpoint.x, triangle->ftpoint.y, triangle->sdpoint.x, triangle->sdpoint.y, triangle->tdpoint.x, triangle->tdpoint.y);
}

float trianglesquare(triangle* triangle)
{
	return abs((triangle->sdpoint.x - triangle->ftpoint.x) * (triangle->tdpoint.y - triangle->ftpoint.y) - (triangle->tdpoint.x - triangle->ftpoint.x) * (triangle->sdpoint.y - triangle->ftpoint.y)) / 2;
}

float triangleper(triangle* triangle)
{
	return pointdistance(&triangle->ftpoint, &triangle->sdpoint) + pointdistance(&triangle->sdpoint, &triangle->tdpoint) + pointdistance(&triangle->tdpoint, &triangle->ftpoint);
}