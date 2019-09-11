#pragma once
//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#ifndef SIMULATION_H
#define SIMULATION_H

#include "Faucet.h"
#include "Container.h"
#include "Fluid.h"
#include "Faucet.h"

class Simulation
{
private:
	Faucet faucet;
	Container container;
	Fluid fluid;
	int waterRate;

public:
	Simulation();
	void setContainer(Container container);
	Container getContainer();
	void setFaucet(Faucet faucet);
	Faucet getFaucet();
	int getWaterRate();
	void setWaterRate(int waterRate);
	void draw();
	void start();
};

#endif

