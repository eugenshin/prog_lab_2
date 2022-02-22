#define _CRT_SECURE_NO_WARNINGS
#include "angle.h"
#include <iostream>
#include <math.h>

void anglevvod(angle* angle)
{
	pointvvod(&angle->ftpoint);
	pointvvod(&angle->verpoint);
	pointvvod(&angle->sdpoint);
	return;
}

void anglevivod(angle* angle)
{
	printf("Первая точка угла: %.3f %.3f\nВершина угла: %.3f %.3f\nВторая точка угла: %.3f %.3f", angle->ftpoint.x, angle->ftpoint.y, angle->verpoint.x, angle->verpoint.y, angle->sdpoint.x, angle->sdpoint.y);
	return;
}

float anglevalue(angle* angle)
{
	return acos(((angle->ftpoint.x - angle->verpoint.x) * (angle->sdpoint.x - angle->verpoint.x) + (angle->ftpoint.y - angle->verpoint.y) * (angle->sdpoint.y - angle->verpoint.y))/pointdistance(&angle->ftpoint, &angle->verpoint)/ pointdistance(&angle->sdpoint, &angle->verpoint))/3.14159265*180;
}