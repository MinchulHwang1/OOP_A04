// Shape.cpp

#include"Shape.h"

/*  -- Method Header Comment
	Name	: Shape -- CONSTRUCTOR
	Purpose : To instantiate a new Shape object - given a set of attribute values
			  It can be overloaded
	Inputs	: NONE
	Outputs	: NONE
	Returns	: Nothing
*/
Shape::Shape() {
	strcpy(name, "Unknown");
	strcpy(colour, "undefined");
	strcpy(nameCopy, " ");
	strcpy(colourCopy, " ");
}

/*  -- Method Header Comment
	Name	: Shape -- CONSTRUCTOR
	Purpose : To instantiate a new Shape object - given a set of attribute values
			  It can be overloaded
	Inputs	: *name			char		string of shape name
			  *colour		char		string of shape colour
	Outputs	: NONE
	Returns	: Nothing
*/
Shape::Shape(char* name, char* colour) {
	// Initiate shape name
	if (strcmp(name, "Circle") == 0 || strcmp(name, "circle") == 0 || strcmp(name, "CIRCLE") == 0) {
		strcpy(this->name, name);
	}
	else if (strcmp(name, "Square") == 0 || strcmp(name, "square") == 0 || strcmp(name, "SQUARE") == 0) {
		strcpy(this->name, name);
	}
	else {
		strcpy(this->name, "Unknown");
	}

	// initiate shape colour
	if (strcmp(colour, "red") == 0 || strcmp(colour, "Red") == 0 || strcmp(colour, "RED") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "green") == 0 || strcmp(colour, "Green") == 0 || strcmp(colour, "GREEN") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "blue") == 0 || strcmp(colour, "Blue") == 0 || strcmp(colour, "BLUE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "yellow") == 0 || strcmp(colour, "Yellow") == 0 || strcmp(colour, "YELLOW") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "purple") == 0 || strcmp(colour, "Purple") == 0 || strcmp(colour, "PURPLE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "pink") == 0 || strcmp(colour, "Pink") == 0 || strcmp(colour, "PINK") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "orange") == 0 || strcmp(colour, "Orange") == 0 || strcmp(colour, "ORANGE") == 0) {
		strcpy(this->colour, colour);
	}
	else {
		strcpy(this->colour, "undefined");
	}

	strcpy(nameCopy, " ");
	strcpy(colourCopy, " ");
}

/*  -- Method Header Comment
	Name	: GetShapeName
	Purpose : getting shape name and return copy of name
	Inputs	: NONE
	Outputs	: NONE
	Returns	: *nameCopy		char	a string has name of shape
*/
char* Shape::GetShapeName(void) {
	memcpy(nameCopy, name, sizeof(name));
	return nameCopy;
}

/*  -- Method Header Comment
	Name	: GetShapeColour
	Purpose : getting shape colour and return copy of colour
	Inputs	: NONE
	Outputs	: NONE
	Returns	: *colourCopy		char	a string has colour of shape
*/
char* Shape::GetShapeColour(void) {
	memcpy(colourCopy, colour, sizeof(colour));
	return colourCopy;
}

/*  -- Method Header Comment
	Name	: SetShapeName
	Purpose : A mutator to save shape name in private data member.
	Inputs	: *name		char	a string to save name of shape
	Outputs	: NONE
	Returns	: Nothing
*/
void Shape::SetShapeName(char* name) {
	if (strcmp(name, "Circle") == 0 || strcmp(name, "circle") == 0 || strcmp(name, "CIRCLE") == 0) {
		strcpy(this->name, name);
	}
	else if (strcmp(name, "Square") == 0 || strcmp(name, "square") == 0 || strcmp(name, "SQUARE") == 0) {
		strcpy(this->name, name);
	}
	else {
		strcpy(this->name, "Unknown");
	}
}

/*  -- Method Header Comment
	Name	: SetShapeColour
	Purpose : A mutator to save shape colour in private data member.
	Inputs	: *colour		char	a string to save colour of shape
	Outputs	: NONE
	Returns	: Nothing
*/
void Shape::SetShapeColour(char* colour) {
	if (strcmp(colour, "red") == 0 || strcmp(colour, "Red") == 0 || strcmp(colour, "RED") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "green") == 0 || strcmp(colour, "Green") == 0 || strcmp(colour, "GREEN") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "blue") == 0 || strcmp(colour, "Blue") == 0 || strcmp(colour, "BLUE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "yellow") == 0 || strcmp(colour, "Yellow") == 0 || strcmp(colour, "YELLOW") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "purple") == 0 || strcmp(colour, "Purple") == 0 || strcmp(colour, "PURPLE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "pink") == 0 || strcmp(colour, "Pink") == 0 || strcmp(colour, "PINK") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "orange") == 0 || strcmp(colour, "Orange") == 0 || strcmp(colour, "ORANGE") == 0) {
		strcpy(this->colour, colour);
	}
	else {
		strcpy(this->colour, "undefined");
	}
}