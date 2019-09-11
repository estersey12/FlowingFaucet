//Emmanuelle Esters
//Lab7out
//Flowing Faucet


#include <iostream>
#include <cmath>
#include "graph1.h"
#include "Fluid.h"

Fluid::Fluid()
{
	setStart(start);
	setEnd(end);
	setFluidName(fluidName);
	fillLine = 0;
}
void Fluid::setStart(GenPoint start)
{
	this->start = start;
}
void Fluid::setEnd(GenPoint end)
{
	this->end = end;
}
void Fluid::setFluidName(string name)
{
	this->fluidName = fluidName;
}
void Fluid::setFillLine(int fillLine)
{
	const double pi = 3.1415926;

	fillLine = (((3785411.78 * simulation.getWaterRate()) / 60) / (pi * pow(150, 2)));

	this->fillLine = fillLine;
}
GenPoint Fluid::getStart()
{
	return start;
}
GenPoint Fluid::getEnd()
{
	return end;
}
int Fluid::getFillLine()
{
	return fillLine;
}
Color Fluid::getColor()
{
	int r = 0;
	int g = 0;
	int b = 0;

	//Set Color
	switch (fluidName)
	{
	case water:
		Color(0, 0, 255);
		break;

	case oil:
		Color(142, 70, 70);
		break;

	case diesel:
		Color(255, 0, 255);
		break;
	}

	return Color(r, g, b);
}
string Fluid::getFluidName()
{
	return fluidName;
}