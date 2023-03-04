// Square.cpp

#include"Square.h"

/*  -- Method Header Comment
	Name	: Square -- CONSTRUCTOR
	Purpose : To instantiate a new Square object - given a set of attribute values
	Inputs	: *colour			char		string of square colour
			  sideLength		float		a float number to save length of side
	Outputs	: NONE
	Returns	: Nothing
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

/*  -- Method Header Comment
	Name	: Square -- DESTRUCTOR
	Purpose : To destroy the Square object - free up the memory associated with the object
	Inputs	: NONE
	Outputs	: Outputs a final message from the object before being destroyed
	Returns	: Nothing
*/
Square::~Square() {
	printf("The square is squished...\n");
}

/*  -- Method Header Comment
	Name	: GetSideLength
	Purpose : getting length and return it.
	Inputs	: NONE
	Outputs	: NONE
	Returns	: sideLength		float		side length which is gotten from user
*/
float Square::GetSideLength(void) {
	return sideLength;
}

/*  -- Method Header Comment
	Name	: SetSideLength
	Purpose : A mutator to save sideLength in private data member.
	Inputs	: sideLength		float		side length which is gotten from user		
	Outputs	: NONE
	Returns	: Nothing
*/
void Square::SetSideLength(float sideLength) {
	if (sideLength < kZeroValue) {
		sideLength = kZeroValue;
	}
	this->sideLength = sideLength;
}

/*  -- Method Header Comment
	Name	: Show
	Purpose : Showing all of information of square.
	Inputs	: NONE
	Outputs	: NONE
	Returns	: Nothing
*/
void Square::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", name);
	printf("Colour			: %s\n", colour);
	printf("Side-Length		: %.2f cm\n", sideLength);
	printf("Perimeter		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n");
}

/*  -- Method Header Comment
	Name	: Perimeter
	Purpose : to get round length of square
	Inputs	: NONE
	Outputs	: NONE
	Returns	: perimeter		float		round length of square
*/
float Square::Perimeter(void) {
	float perimeter = kZeroValue;
	perimeter = kFourValue * OverallDimension();
	return perimeter;
}

/*  -- Method Header Comment
	Name	: Area
	Purpose : to get area of square
	Inputs	: NONE
	Outputs	: NONE
	Returns	: area		float		area of square
*/
float Square::Area(void) {
	float area = kZeroValue;
	area = OverallDimension()* OverallDimension();
	return area;
}

/*  -- Method Header Comment
	Name	: OverallDimension
	Purpose : to get dimension of square
	Inputs	: NONE
	Outputs	: NONE
	Returns	: sidelength		float		length of square
*/
float Square::OverallDimension(void) {
	return sideLength;
}