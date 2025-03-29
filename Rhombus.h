/** @file Rhombus.h
*	@brief Declaration of the class Rhombus
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

/// @class Rhombus
/// @brief Class created to manage objects with a diamond shape

class Rhombus
{
private: 
	float major_diag;
	float minor_diag;

public:
	/// @name CONSTRUCTORS / DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float M_d, float m_d); // M_d: major diagonal; m_d: minor diagonal
	Rhombus(const Rhombus& r);

	~Rhombus();
	/// @}

	/// @name OPERATORS OVERLOADING
	/// @{
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);
	/// @}

	/// @name INIT / RESET
	/// @{
	void Init();
	void Init(const Rhombus& r);

	void Reset();
	/// @}

	/// @name GETTERS / SETTERS
	/// @{
	void SetMajorDiag(float M_d);
	void SetMinorDiag(float m_d);
	void SetDiagonals(float M_d, float m_d);

	float GetMajorDiag();
	float GetMinorDiag();
	void GetDiagonals(float& M_d, float& m_d);

	float GetSideLength();

	float GetPerimeter();
	float GetArea();
	/// @}

	/// @name DEBUG / SERIALIZATION
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	///@}
	
};

#endif