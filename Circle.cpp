// Circle.cpp
#include"Circle.h"

/**
* \brief Circle -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new circle object - given a set of attribute values.
* It prints nothing
* \param colour  - <b>char *</b> - string of circle colour
* \param radius - <b>float</b> - a float number to save radius of circle
* 
* \return Nothing
*
* \see ~Circle()
*/
Circle::Circle(char* colour, float radius) {
	if (radius < kZeroValue) {
		radius = kZeroValue;
	}
	this->radius = radius;

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
* \brief Circle -- DESTRUCTOR
* Called upon to <i>destroy</i> a circle object
* \details <b>Details</b>
*
* To destroy the circle object - free up the memory associated with the object
* It prints the message that object is destoried
*
* \return Nothing
*
*/
Circle:: ~Circle() {
	printf("The circle is broken...\n");
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting radius and return it.
/// 
/// \return Returns radius which is gotten from user as float data type
///
///
float Circle::GetRadius(void) {
	return radius;
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// Mutator to save radius in private data member.
/// \param radius - <b>float</b> - a radius which is gotten from user
/// \return Nothing
/// 
void Circle::SetRadius(float radius) {
	if (radius < kZeroValue) {
		radius = kZeroValue;
	}
	this->radius = radius;
}

///
///
/// \details <b>Details</b>
///
/// Showing all of information of circle.
///	\return Nothing
/// 
void Circle::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", name);
	printf("Colour			: %s\n", colour);
	printf("Radius			: %.2f cm\n", radius);
	printf("Circumference		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n");
}

/// 
/// \details <b>Details</b>
///
/// To get round length of circle
/// \return Returns a parimeter which is round length of circle
///
float Circle::Perimeter(void) {
	return kPI * OverallDimension();
}

///
/// \details <b>Details</b>
///
/// To get area of circle
/// \return Returns a area of circle
///
float Circle::Area(void) {
	return kPI * radius * radius;
}

///
/// \details <b>Details</b>
///
/// To get diameter of circle
/// \return Returns a diameter of circle
///
float Circle::OverallDimension(void) {
	return kTwoValue * radius;
}