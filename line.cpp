#define _CRT_SECURE_NO_WARNINGS
#include "line.h"
#include <iostream>

void linevvod(line* line)
{
	pointvvod(&line->ftpoint);
	pointvvod(&line->sdpoint);
	return;
}

void linevivod(line* line)
{
	printf("������ ����� �����: %.3f %.3f\n������ ����� �����: %.3f %.3f",line->ftpoint.x,line->ftpoint.y,line->sdpoint.x,line->sdpoint.y);
	return;
}

float linelength(line* line)
{
	return pointdistance(&line->ftpoint, &line->sdpoint);
}
