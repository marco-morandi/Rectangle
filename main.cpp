#include <iostream>
#include "CRectangle.h"

int main() {
	// instantiation of the object rect1
	Rectangle rect1;
	Rectangle rect2(2, 3);

	// checking the width and height of rect1 and rect2
	std::cout << "- Rect1 dimensions" << std::endl;
	rect1.Dump();

	std::cout << "- Rect2 dimensions" << std::endl;
	rect2.Dump();

	// setting height and width of rect1
	rect1.SetHeight(1.2);
	rect1.SetWidth(3.6);

	// checking the new height and width of rect1
	std::cout << "- Rect1 dimensions" << std::endl;
	rect1.Dump();

	// checking if Get() methods work
	std::cout << "The height of rect1 is: " << rect1.GetHeight() << std::endl;
	std::cout << "The width of rect1 is: " << rect1.GetWidth() << std::endl;
	std::cout << "The height of rect2 is: " << rect2.GetHeight() << std::endl;
	std::cout << "The width of rect2 is: " << rect2.GetWidth() << std::endl;

	// checking the GetArea and GetPerimeter methods
	std::cout << "The perimeter of rect1 is: " << rect1.GetPerimeter() << std::endl;
	std::cout << "The area of rect1 is: " << rect1.GetArea() << std::endl;

	// checking if reset method works
	rect1.Reset();
	rect1.Dump();

	return 0;
}
