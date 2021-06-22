// NUMBER2EXERCISE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int inches, feet, result;
	printf("Let's convert your height(inches) in Feet and Inches :)\n");
	printf("Write down how tall you are(inches): ");
	scanf_s("%i", &inches);
	printf("\nThe inches you wrote are : %i\n ", inches);

	feet = inches / 12;
	result = inches % 12;
	printf("Your height is : %i feets and %i inches", feet, result);
	return 0;

}

