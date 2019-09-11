//Emmanuelle Esters
//Lab7out
//Flowing Faucet

#include <iostream>
#include "graph1.h"
#include "Simulation.h"

using namespace std;

int main()
{
	//Variable Declaration/Initialization
	int height = 0;
	int radius = 0;
	int r = 0;
	int b = 0;
	int g = 0;
	int waterRate = 0;
	string fluidName;
	string buffer = "";
	char repeat = 'y';
	Container container;
	Simulation simulation;
	Color col;
	GenPoint position;
	Fluid fluid;

	//Display the graphics
	displayGraphics();

	//Continually simulate

	do
	{
		//Get Fluid rate
		do
		{
			cout << "Enter fluid rate between 1 to 30 gallons/minure: ";
			cin >> waterRate;

			if ((waterRate < 1) || (waterRate > 30))
			{
				cout << "Invalid entry. Type a number from 1 to 30." << endl;
			}

		} while ((waterRate < 1) || (waterRate > 30));

		simulation.setWaterRate(waterRate);

		//Get the Container's radius/height/color (Add Data Validation)
		//Set the Containers radius
		do {
			cout << "Enter radius of container <between 10 and 285>: ";
			cin >> radius;

			//if Error message

		} while (radius < 10 || radius > 285);

		container.setRadius(radius); 

		//height 

		do {
				cout << "Enter height of container <between 10 and 300>: ";
				cin >> height;

				//if Error message

		} while (height < 10 || height > 300);

		container.setHeight(height);

		//color

		do {
			cout << "Enter color of container <between 0 and 255>: ";
			cin >> r >> g >> b;

			//if Error message

		} while ((r < 0 || r > 255) || (g < 0 || g > 255) || (b < 0 || b > 255));

		col.setColor(r, g, b);
		container.setColor(col);

		//Get FLuid Name

		cin.ignore();

			cout << "Enter fluid name (water, oil, or diesel): ";
			getline(cin, fluidName);
		
		fluid.setFluidName(fluidName);

		cin.ignore();

		//Compute the Container upper left coordinate based on the height
		//Set the Container’s position
		//Hint: 55, 400 - height
		position.setPoint(60, 400 - height);
		container.setPosition(position);

		//Set the Container for the Simulation
		simulation.setContainer(container);

		//Draw the simulation/container (invoke draw on Simulation)
		simulation.draw();

		//Start Water
		simulation.start();

		//Repeat the simulation?
		cout << "Repeat the simulation (y/n)? ";
		cin >> repeat;

		clearGraphics();
		system("cls");

	} while (repeat == 'y');

	return 0;
}

