// PaintAWall.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double width = 0.0;
	double height = 0.0;
	double area = 0.0;

	// Input the width of the wall in feet

	cout << "Enter the width of the wall in feet: ";
	cin >> width;

	// Input the height of the wall in feet

	cout << "Enter the height of the wall in feet: ";
	cin >> height;

	// Calculate and output area of wall

	area = height * width;
	cout << "Total area to paint in square feet: "
		<< area
		<< endl;

	// Calculate amount of paint needed

	double gallons = 0.0;
	const double sqFeetPerGallon = 350.0;

	gallons = ceil(area / sqFeetPerGallon);
	cout << "Total number of gallons of paint needed: "
		<< gallons
		<< endl;

	// Calculate cost of paint

	double cost = 0.0;
	double costPerGallon = 27.0;

	cost = gallons * costPerGallon;
	cout << "Total cost of paint in dollars: " << cost << endl;

	// Calculate time needed to paint

	double hours = 0.0;
	double sqFeetPerHour = 100.0;

	hours = area / sqFeetPerHour;
	cout << "Total time to paint in hours: "
		 << hours
		 << endl;

	return 0;
}
