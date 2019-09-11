//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#include <iostream>
#include <cmath>
#include "graph1.h"
#include "Container.h"

Container::Container()
{
	pos.setPoint(0, 0);
	color.setColor(0, 0, 0);
	height = 0;
	radius = 0;
}

void Container::setPosition(GenPoint pos)
{
	this->pos = pos;
}

void Container::setRadius(int radius)
{
	this->radius = radius;
}

void Container::setHeight(int height)
{
	this->height = height;
}

void Container::setColor(Color color)
{
	this->color = color;
}

GenPoint Container::getPosition()
{
	return pos;
}

int Container::getRadius()
{
	return radius;
}

int Container::getHeight()
{
	return height;
}

Color Container::getColor()
{
	return color;
}

void Container::draw()
{
	int obj_no = 0;

	obj_no = drawLine(pos.getX(), pos.getY(), pos.getX(), pos.getY() + height, 5);
	::setColor(obj_no, color.getRed(), color.getGreen(), color.getBlue());

	obj_no = drawLine(pos.getX(), pos.getY() + height, pos.getX() + radius * 2, pos.getY() + height, 5);
	::setColor(obj_no, color.getRed(), color.getGreen(), color.getBlue());

	obj_no = drawLine(pos.getX() + radius * 2, pos.getY() + height, pos.getX() + radius * 2, pos.getY(), 5);
	::setColor(obj_no, color.getRed(), color.getGreen(), color.getBlue());
	
}

