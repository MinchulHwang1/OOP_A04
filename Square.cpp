// Square.cpp

#include"Square.h"

/**
* \brief Square -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new Square object - given a set of attribute values
* It prints nothing
* \param colour  - <b>char *</b> - string of square colour
* \param sideLength - <b>float</b> - a float number to save length of side
*
* \return Nothing
*
* \see ~Square()
*/
Square::Square(char* colour, float sideLength) {
	// Initiating of sideLength
	if (sideLength < kZeroValue) {
		sideLength = kZeroValue;
	}
	this->sideLength = sideLength;

	// Initiating of colour
	if (strcmp(colour, "red") == 0 || strcmp(name, "Red") == 0 || strcmp(name, "RED") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "green") == 0 || strcmp(name, "Green") == 0 || strcmp(name, "GREEN") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "blue") == 0 || strcmp(name, "Blue") == 0 || strcmp(name, "BLUE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "yellow") == 0 || strcmp(name, "Yellow") == 0 || strcmp(name, "YELLOW") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "purple") == 0 || strcmp(name, "Purple") == 0 || strcmp(name, "PURPLE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "pink") == 0 || strcmp(name, "Pink") == 0 || strcmp(name, "PINK") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "orange") == 0 || strcmp(name, "Orange") == 0 || strcmp(name, "ORANGE") == 0) {
		strcpy(this->colour, colour);
	}
	else {
		strcpy(this->colour, "undefined");
	}
}

/**
* \brief Square -- DESTRUCTOR
* Called upon to <i>destroy</i> a square object
* \details <b>Details</b>
*
* To destroy the Square object - free up the memory associated with the object
* It prints the message that object is destoried
*
* \return Nothing
*
*/
Square::~Square() {
	printf("The square is squished...\n");
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting length and return it.
/// 
/// \return Returns sideLength which is side length which is gotten from user
///
///
float Square::GetSideLength(void) {
	return sideLength;
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// A mutator to save sideLength in private data member.
/// \param sideLength - <b>float</b> - side length which is gotten from user
/// \return Nothing
/// 
void Square::SetSideLength(float sideLength) {
	if (sideLength < kZeroValue) {
		sideLength = kZeroValue;
	}
	this->sideLength = sideLength;
}

///
///
/// \details <b>Details</b>
///
/// Showing all of information of square.
/// \return Nothing
/// 
void Square::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", name);
	printf("Colour			: %s\n", colour);
	printf("Side-Length		: %.2f cm\n", sideLength);
	printf("Perimeter		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n");
}

/// 
/// \details <b>Details</b>
///
/// To get round length of square
/// \return Returns a parimeter which is round length of square
///
float Square::Perimeter(void) {
	float perimeter = kZeroValue;
	perimeter = kFourValue * OverallDimension();
	return perimeter;
}

///
/// \details <b>Details</b>
///
/// To get area of square
/// \return Returns a area of square
///
float Square::Area(void) {
	float area = kZeroValue;
	area = OverallDimension()* OverallDimension();
	return area;
}

///
/// \details <b>Details</b>
///
/// To get diameter of square
/// \return Returns length of square
///
float Square::OverallDimension(void) {
	return sideLength;
}