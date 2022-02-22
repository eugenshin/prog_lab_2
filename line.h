#pragma once
#include "point.h"

struct line
{
	point ftpoint, sdpoint;
};

void linevvod(line* line);
void linevivod(line* line);
float linelength(line* line);