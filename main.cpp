#include <iostream>
#include <vector>

using namespace std;

#include "forest.h"

int Shape::counter = 0;

int main()
{
	Forest las = Forest(15, 60);

	Rectangle* sciana = new Rectangle(6, 14, '*', "cyan");
//	sciana->Print();
	Rectangle* drzwi = new Rectangle(4, 4, '*', "purple");
	Rectangle* pien = new Rectangle(3, 3, '*', "red");
	Border* okno = new Border(3, 6, '*', "blue", 1);
	Triangle* choinka = new Triangle(6, '*', "green");
	Trapeze* dach = new Trapeze(4, '*', "purple");

	dach->SetXY(1, 1);
	las += dach;
	sciana->SetXY(5, 4);	
	las += sciana;			
	drzwi->SetXY(7, 5);	
	las += drzwi;
	okno->SetXY(6, 11);
	las += okno;

	las.AddShape(choinka, 3, 25);
	las.AddShape(pien, 9, 29);


	las.PrintForest();

}
