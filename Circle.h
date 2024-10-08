// Circle.h

#ifndef _CIRCLE_H
#define _CIRCLE_H
#pragma once

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include"Shape.h"
using namespace std;

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define kPI				3.1415926
#define kZeroValue		0
#define kTwoValue		2

/// 
/// \class Circle
///
/// \brief The purpose of This class creates an object that inherited from Shape class, and save radius itself. also showing information of shape.
///
///
/// \author A <i>Minchul Hwang</i>
///
/// 
/// 

class Circle : public Shape {
	/* ====================================== */
	/*              PRIVATE                   */
	/* ====================================== */
private:
	float radius;									///< To save radius of circle

	/* ====================================== */
	/*              PUBLIC                    */
	/* ====================================== */
public:
	/* -------------- ATTRIBUTES ------------ */
	Circle(char* colour, float radius);				///< Constructor with 2 parameters.
	virtual ~Circle();								///< Distructor of object

	/* ---------- METHOD PROTOTYPES --------- */
	float GetRadius(void);							///< Accessor - to get radius of circle
	void SetRadius(float radius);					///< Mutator - to set radius of circle

	void Show(void);								///< Show information of circle

	virtual float Perimeter(void);					///< Virtual function of perimeter - it calculates round length of circle
	virtual float Area(void);						///< Virtual function of area - it calculates area of circle
	virtual float OverallDimension(void);			///< Virtual function of dimension - diagram of circle
};

#endif _CIRCLE_H