//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#include <iostream>
#include "graph1.h"
#include "Simulation.h"

using namespace std;

Simulation::Simulation()
{
	setContainer(container);
	setFaucet(faucet);
	waterRate = 0;
}

void Simulation::setContainer(Container container)
{
	this->container = container;
}

Container Simulation::getContainer()
{
	return container;
}

void Simulation::setFaucet(Faucet faucet)
{
	this->faucet = faucet;
}

Faucet Simulation::getFaucet()
{
	return faucet;
}

int Simulation::getWaterRate()
{
	return waterRate;
}

void Simulation::setWaterRate(int waterRate)
{
	this->waterRate = waterRate;
}

void Simulation::draw()
{
	int wall = 0;
	int ground = 0;
	int pipe = 0;

	//draw wall
	wall = drawRect(0, 0, 55, 400);
	setColor(wall, 200, 200, 200);

	//draw ground
	ground = drawRect(0, 400, 640, 80);
	setColor(ground, 71, 35, 35);

	//draw pipe
	pipe = drawLine(55, 50, 50 + container.getRadius() - 64, 50, 5);
	setColor(pipe, 80, 80, 80);

	//Draw container
	container.draw();

	//Draw Faucet
	faucet.draw();

}

void Simulation::start()
{
	faucet.turnOn();

	//Fill Water
	int i = 0;
	int rect_obj = 0;
	int no_iterations = 0;

	no_iterations = int(container.getHeight() / fluid.getFillLine());

	for (i = 0; i <= no_iterations; i++)
	{
		Sleep(100);
		rect_obj = drawRect(60, 400, 300, -(i * fluid.getFillLine()));
		setColor(rect_obj, fluid.getColor(), fluid.getColor(), fluid.getColor());
	}


	faucet.turnOff();
};