#include<iostream>
#include<cstring>

#include "CRectangle.h"
#include "Rhombus.h"

using namespace std;

int main() {

	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rectangle rectC;

	Rhombus rhombA(2.5, 3);
	Rhombus rhombB = rhombA;
	Rhombus rhombC(-3, 6);
	Rhombus rhombD;
	
	char msg1[1000];
	int size = strlen("prova A");
	memcpy(msg1,"prova A",size); 
	msg1[size]='\0';

	char msg2[1000];
	size = strlen("prova B");
	memcpy(msg2,"prova B",size); 
	msg2[size]='\0';
	
	rectA.SetText(msg1);
	rectB.SetText(msg2);
		
	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump();

	cout << endl;	
	cout << "rectangle B" << endl;
	rectB.Dump();

	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

	rectC=rectA; 
	
	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

	if (rectA == rectC) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;
		

	// doing dumps of all the existing objects to check if constructors work right
	cout << endl << "rhombus A" << endl;
	rhombA.Dump();

	cout << endl << "rhombus B" << endl;
	rhombB.Dump();

	cout << endl << "rhombus C" << endl;
	rhombC.Dump();

	cout << endl << "rhombus D" << endl;
	rhombD.Dump();

	//checking if GetArea() and GetSideLength() methods work right
	cout << endl <<  "The area of rhombA is: " << rhombA.GetArea() << endl;
	cout << "The side length of rhombB is: " << rhombB.GetSideLength() << endl;

	//checking if the overload of operator equality is correct
	if (rhombA == rhombB)
		cout << endl << "The copy constructor does its job along with the operator equality and the 2 rhombus are the same" << endl;
	else
		cout << endl << "Copy constructor didn't work as expected or the overloading of the operator equality is wrong" << endl;

	//checking setters and getters methods
	rhombC.SetDiagonals(2.3, 4.6);
	cout << endl << "rhombus C" << endl;
	rhombC.Dump();

	cout << "The perimeter of rhombus C is: " << rhombC.GetPerimeter() << endl;

	rhombD.SetMajorDiag(1.3);
	rhombD.SetMinorDiag(3.6);
	cout << endl << "rhombus D" << endl;
	rhombD.Dump();

	//checking if the overload of opeartor assignment is correct
	rhombD = rhombC;
	cout << endl << "rhombus D" << endl;
	rhombD.Dump();
	
	return 0;

}