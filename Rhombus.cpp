/** @file Rhombus.cpp
*	@brief Class Rhombus: implementations of the methods

*/

#include <iostream>
#include <cstring>
#include <cmath>

#include "Rhombus.h"

using namespace std;

/// @brief default constructor
Rhombus::Rhombus() {

	cout << "Rhombus - default constructor" << endl;

	Init();

}

/// @brief constructor
/// @param M_d major diagonal of the rhombus
/// @param m_d minor diagonal of the rhombus
Rhombus::Rhombus(float M_d, float m_d) {

	cout << "Rhombus - constructor" << endl;

	Init();

	if (M_d < 0 || m_d < 0) {
		WarningMessage(" constructor: major diagonal and minor diagonal should be > 0");
		SetDiagonals(0, 0);
	}
	else
		SetDiagonals(M_d, m_d);

}

/// @brief copy constructor
/// @param r reference to the object that should be copied
Rhombus::Rhombus(const Rhombus& r) {

	cout << "Rhombus - copy constructor" << endl;

	Init(r);

}

/// @brief destructor
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;

	Reset();

}

/// @brief overload of operator =
/// @param object that is to the right of = operator
/// @return the pointer to itself
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus - operator =" << endl;

	Init(r);

	return *this;
}

/// @brief overload of operator ==
/// @param the object to check the equality with
/// @return true if the two object are the same
bool Rhombus::operator==(const Rhombus& r) {

	if (r.major_diag == major_diag && r.minor_diag == minor_diag)
		return true;

	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {

	SetDiagonals(0, 0);

}

/// @brief initialization of the object as a copy of an object
/// @param r reference to the object that should be copied
void Rhombus::Init(const Rhombus& r) {

	Init();
	SetDiagonals(r.major_diag, r.minor_diag);

}

/// @brief total reset of the object 
void Rhombus::Reset() {

	SetDiagonals(0, 0);

}

/// @brief set major diagonal of the object
/// @param M_d major diagonal
void Rhombus::SetMajorDiag(float M_d) {

	if (M_d < 0) {
		WarningMessage("SetMajorDiag: major diagonal should be > 0");
		return;
	}

	SetDiagonals(M_d, minor_diag);
}

/// @brief set minor diagonal of the object
/// @param m_d minor diagonal
void Rhombus::SetMinorDiag(float m_d) {

	if (m_d < 0) {
		WarningMessage("SetMinorDiag: minor diagonal should be > 0");
		return;
	}

	SetDiagonals(major_diag, m_d);
}

/// @brief set both diagonals of the object
/// @param M_d major diagonal
/// @param m_d minor diagonal
void Rhombus::SetDiagonals(float M_d, float m_d) {

	if (M_d < 0 || m_d < 0) {
		WarningMessage("SetDiagonals: major diagonal and minor diagonal should be > 0");
		return;
	}

	major_diag = M_d;
	minor_diag = m_d;

	return;
}

/// @brief get major diagonal of the object
/// @return major diagonal
float Rhombus::GetMajorDiag() {

	return major_diag;
}

/// @brief get minor diagonal of the object
/// @return minor diagonal
float Rhombus::GetMinorDiag() {

	return minor_diag;
}

/// @brief get both diagonals of the object
/// @param M_d major diagonal
/// @param m_d minor diagonal
void Rhombus::GetDiagonals(float& M_d, float& m_d) {

	M_d = major_diag;
	m_d = minor_diag;

	return;
}

/// @brief get side length of the object
/// @return side_l side length
float Rhombus::GetSideLength() {

	float side_l = sqrt(pow(major_diag / 2, 2) + pow(minor_diag / 2, 2));

	return side_l;
}

/// @brief get the perimeter of the object
/// @return the perimeter
float Rhombus::GetPerimeter() {

	float side_l = GetSideLength();

	return side_l * 4;
}

/// @brief get the are of the object
/// @return the area
float Rhombus::GetArea() {

	return (major_diag * minor_diag) / 2;
}

/// @brief write an error message
/// @param string message to be printed
void Rhombus::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus -- ";
	cout << string << endl;

}

/// @brief write a warning message
/// @param string message to be printed
void Rhombus::WarningMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Rhombus::Dump() {

	cout << endl;
	cout << "--- Rhombus ---" << endl;
	cout << endl;

	cout << "Major diagonal = " << major_diag << endl;
	cout << "Minor diagonal = " << minor_diag << endl << endl;

}