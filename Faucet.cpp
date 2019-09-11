//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#include <iostream>
#include <cmath>
#include "graph1.h"
#include "Faucet.h"

Faucet::Faucet()
{
	pos.setPoint(0, 0);
	GenPoint(0, 0);
	setFluid(fluid);
	setPosition(upper);

}
void Faucet::turnOn()
{
	//Draw Stream *** change x/y values
	int obj = 0;
	int y = (pos.getY() + container.getHeight());
	obj = drawLine(205, 65, 205, 400, 1);

	//Change color
	setColor(obj, 0, 0, 255);
	
}
void Faucet::turnOff()
{
	int obj = 0;

	//Remove Stream *** change x/y
	obj = drawLine(205, 65, 205, 77, 1);
	setColor(obj, 0, 0, 0);
}
void Faucet::setPosition(GenPoint upper)
{	
	this->upper = upper;
}
GenPoint Faucet::getPosition()
{
	return upper;
}
void Faucet::setFluid(Fluid fluid)
{
	this->fluid = fluid;
}
Fluid Faucet::getFluid()
{
	return fluid;
}
void Faucet::draw()
{
	displayBMP("faucet.bmp", 50 + container.getRadius(), 50);
}