//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#pragma once

#include <string>
#include "GenPoint.h"
#include "Color.h"
#include "Simulation.h"

using namespace std;

class Fluid
{
private:
	GenPoint start;
	GenPoint end;
	int fillLine;
	string fluidName;
	Simulation simulation;

public:
	Fluid();
	void setStart(GenPoint start);
	void setEnd(GenPoint end);
	void setFluidName(string name);
	void setFillLine(int fillLine);
	GenPoint getStart();
	GenPoint getEnd();
	int getFillLine();
	Color getColor();
	string getFluidName();
};

