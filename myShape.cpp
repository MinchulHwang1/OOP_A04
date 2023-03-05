// myShape.cpp

/* -- this is a FILEHEADER COMMENT --
	NAME	: myShape
	PURPOSE : This program receives the radius and color of the circle and the length and color of the sides of the square from the user.
			  As soon as all information is received, each class is dynamically instantiated, and dynamic allocation is freed after creation.
*/
#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Square.h"

void clearLine(char* string);
float getFloat(void);

#define kContinue		1
#define kTwoValue		2

int main() {

	char circleName[kNameString] = "Circle";
	char squareName[kNameString] = "Square";
	char circleColour[kColourString] = {};
	char squareColour[kColourString] = {};
	float circleRadius = 0;
	float squareSideLength = 0;
	
	printf("Enter colour of the circle : ");
	fgets(circleColour, sizeof(circleColour), stdin);
	clearLine(circleColour);
	printf("Enter radius of the circle : ");
	circleRadius = getFloat();

	printf("Enter colour of the square : ");
	fgets(squareColour, sizeof(squareColour), stdin);
	clearLine(squareColour);
	printf("Enter side length of the square : ");
	squareSideLength = getFloat();

	printf("\n");
	
	// Make shape class to put information each class
	Shape* circleShape;
	Shape* squareShape;

	// Create shape class allocated momory
	Circle* circle = new Circle(circleColour, circleRadius);			
	Square* square = new Square(squareColour, squareSideLength);
	
	circleShape = (Shape*)(circle);
	circleShape->SetShapeName(circleName);
	circle->Show();
	
	squareShape = (Shape*)(square);
	squareShape->SetShapeName(squareName);
	square->Show();

	/// delete allocated memory
	delete circle;
	delete square;

	return 0;
}

/*
* Function		: clearNewLine()
* Description	: If the received data is blank or contains \n, it is removed.
* Parameters	: *string		char		the pointer has string from user
* Returns		: None
*/
void clearLine(char* string) {
	char* searchNewLine = strchr(string, '\n');
	if (searchNewLine != NULL) {
		*searchNewLine = '\0';
	}
}

/*
* Function		: getFloat()
* Description	: it can float number from user
* Parameters	: void
* Returns		: number		float		a float number which is gotten from user
*/
float getFloat(void)
{
	char	record[121] = { 0 };	
	float 	number = 0.00;

	fgets(record, sizeof(record), stdin);

	if (sscanf(record, "%f", &number) != 1){
		number = -1.00;
	}

	return number;
}
