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
	printf("������� ���������� ������ �����: ");
	pointvvod(point1);
	printf("������� ���������� ������ �����: ");
	pointvvod(point2);
	printf("���������� ������ �����: ");
	pointvivod(point1);
	printf("\n���������� ������ �����: ");
	pointvivod(point2);
	printf("\n���������� ����� ������� = %f.", pointdistance(point1, point2));
	free(point1);
	free(point2);
	line line1;
	printf("\n������� ���������� ������ � ������ ����� �����: ");
	linevvod(&line1);
	linevivod(&line1);
	printf("\n������ ����� = %f.", linelength(&line1));
	angle angle1;
	printf("\n������� ���������� ������: �� ������ ������� ����, �������, �� ������ ������� ����: ");
	anglevvod(&angle1);
	anglevivod(&angle1);
	printf("\n�������� ���� = %f ��������.", anglevalue(&angle1));
	triangle tri1;
	printf("\n������� ���������� ����� ������������: ");
	trianglevvod(&tri1);
	trianglevivod(&tri1);
	printf("\n������� ������������ = %f, �������� ������������ = %f.", trianglesquare(&tri1), triangleper(&tri1));
	circle circle1;
	printf("\n������� ���������� ����� ����� � ��� ������: ");
	circlevvod(&circle1);
	circlevivod(&circle1);
	printf("\n������� ����� = %f, �������� ����� = %f.", circlesquare(&circle1), circleper(&circle1));
	return 0;
}