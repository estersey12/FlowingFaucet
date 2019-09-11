#pragma once
//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#ifndef CONTAINER_H
#define CONTAINER_H

#include "GenPoint.h"
#include "Color.h"
#include "graph1.h"

class Container
{
private:
	GenPoint pos;
	int radius;
	int height;
	Color color;

public:
	Container();
	void setPosition(GenPoint pos);
	void setRadius(int radius);
	void setHeight(int height);
	void setColor(Color color);
	GenPoint getPosition();
	int getRadius();
	int getHeight();
	Color getColor();
	void draw();

};

#endif
