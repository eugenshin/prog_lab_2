#define _CRT_SECURE_NO_WARNINGS
#include "point.h"
#include <iostream>
#include <math.h>

void pointvvod(point* point)
{
	float x, y;
	while (scanf("%f%f", &x, &y) < 2) {
		while (getchar() != '\n');
		printf("Координаты точки введены неверно.\n");
	}
	point->x = x;
	point->y = y;
	return;
}

void pointvivod(point* point)
{
	printf("x=%.3f, y=%.3f",point->x,point->y);
}

float pointdistance(point* ftpoint, point* sdpoint)
{
	return sqrt(pow(sdpoint->x - ftpoint->x, 2) + pow(sdpoint->y - ftpoint->y, 2));
}
