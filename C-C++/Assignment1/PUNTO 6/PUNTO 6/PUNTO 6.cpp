// PUNTO 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	float temperaturec, temperaturef;
	printf("Don't know how many degrees is there in fahrenheit?\n");
	printf("You don't have to worry about it, we have the solution!\n");
	printf("How many degrees in celsius is the temperature?\n");
	scanf_s("%f", &temperaturec);
	temperaturef = temperaturec * (1.8) + 32;
	printf("The temperature in farenheits is: %.2f", temperaturef);
	return 0;

}
