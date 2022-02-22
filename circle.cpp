#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <iostream>
#define PI 3.14159265

void circlevvod(circle* circle)
{
	pointvvod(&circle->center);
	float r;
	while (scanf("%f", &r) < 1) {
		while (getchar() != '\n');
		printf("Радиус введен неверно");
	}
	circle->radius = r;
}

void circlevivod(circle* circle)
{
	printf("Центр окружности: %.3f %.3f\nРадиус окружности: %.3f", circle->center.x, circle->center.y, circle->radius);
}

float circlesquare(circle* circle)
{
	return circle->radius*circle->radius*PI;
}

float circleper(circle* circle)
{
	return 2*PI*circle->radius;
}
