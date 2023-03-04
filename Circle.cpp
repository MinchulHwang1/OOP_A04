// Circle.cpp
#include"Circle.h"

/*  -- Method Header Comment
	Name	: Circle -- CONSTRUCTOR
	Purpose : To instantiate a new circle object - given a set of attribute values
	Inputs	: *colour			char		string of circle colour
			  radius			float		a float number to save radius of circle
	Outputs	: NONE
	Returns	: Nothing
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

/*  -- Method Header Comment
	Name	: Circle -- DESTRUCTOR
	Purpose : To destroy the circle object - free up the memory associated with the object
	Inputs	: NONE
	Outputs	: Outputs a final message from the object before being destroyed
	Returns	: Nothing
*/
Circle:: ~Circle() {
	printf("The circle is broken...\n");
}

/*  -- Method Header Comment
	Name	: GetRadius
	Purpose : getting radius and return it.
	Inputs	: NONE
	Outputs	: NONE
	Returns	: radius		float		radius which is gotten from user
*/
float Circle::GetRadius(void) {
	return radius;
}

/*  -- Method Header Comment
	Name	: SetRadius
	Purpose : A mutator to save radius in private data member.
	Inputs	: radius		float		radius which is gotten from user
	Outputs	: NONE
	Returns	: Nothing
*/
void Circle::SetRadius(float radius) {
	if (radius < kZeroValue) {
		radius = kZeroValue;
	}
	this->radius = radius;
}

/*  -- Method Header Comment
	Name	: Show
	Purpose : Showing all of information of circle
	Inputs	: NONE
	Outputs	: NONE
	Returns	: Nothing
*/
void Circle::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", name);
	printf("Colour			: %s\n", colour);
	printf("Radius			: %.2f cm\n", radius);
	printf("Circumference		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n");
}

/*  -- Method Header Comment
	Name	: Perimeter
	Purpose : to get round length of circle
	Inputs	: NONE
	Outputs	: NONE
	Returns	: perimeter		float		round length of circle
*/
float Circle::Perimeter(void) {
	float perimeter = kZeroValue;
	perimeter =  kPI * OverallDimension();
	return perimeter;
}

/*  -- Method Header Comment
	Name	: Area
	Purpose : to get area of circle
	Inputs	: NONE
	Outputs	: NONE
	Returns	: area		float		area of circle
*/
float Circle::Area(void) {
	float area = kZeroValue;
	area = kPI * radius * radius;
	return area;
}

/*  -- Method Header Comment
	Name	: OverallDimension
	Purpose : to get diameter of circle
	Inputs	: NONE
	Outputs	: NONE
	Returns	: diameter		float		diameter of circle
*/
float Circle::OverallDimension(void) {
	float diameter = kZeroValue;
	diameter = kTwoValue * radius;
	return diameter;
}