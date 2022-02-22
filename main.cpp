#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point* point1 = (point*)malloc(sizeof(point));
	point* point2 = (point*)malloc(sizeof(point));
	printf("Введите координаты первой точки: ");
	pointvvod(point1);
	printf("Введите координаты второй точки: ");
	pointvvod(point2);
	printf("Координаты первой точки: ");
	pointvivod(point1);
	printf("\nКоординаты второй точки: ");
	pointvivod(point2);
	printf("\nРасстояние между точками = %f.", pointdistance(point1, point2));
	free(point1);
	free(point2);
	line line1;
	printf("\nВведите координаты первой и второй точки линии: ");
	linevvod(&line1);
	linevivod(&line1);
	printf("\nДлинна линии = %f.", linelength(&line1));
	angle angle1;
	printf("\nВведите координаты точкек: на первой стороне угла, вершины, на второй стороне угла: ");
	anglevvod(&angle1);
	anglevivod(&angle1);
	printf("\nЗначение угла = %f градусов.", anglevalue(&angle1));
	triangle tri1;
	printf("\nВведите координаты точек треугольника: ");
	trianglevvod(&tri1);
	trianglevivod(&tri1);
	printf("\nПлощадь треугольника = %f, периметр треугольника = %f.", trianglesquare(&tri1), triangleper(&tri1));
	circle circle1;
	printf("\nВведите координаты цента круга и его радиус: ");
	circlevvod(&circle1);
	circlevivod(&circle1);
	printf("\nПлощадь круга = %f, периметр круга = %f.", circlesquare(&circle1), circleper(&circle1));
	return 0;
}