//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#pragma once

#include "GenPoint.h"
#include "Fluid.h"
#include "Container.h"

class Faucet
{
private:
	GenPoint pos;
	Fluid fluid;
	Container container;
	GenPoint upper;

public:
	Faucet();
	void turnOn();
	void turnOff();
	void setPosition(GenPoint upper);
	GenPoint getPosition();
	void setFluid(Fluid fluid);
	Fluid getFluid();
	void draw();

};

