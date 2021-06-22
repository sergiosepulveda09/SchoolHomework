// NUMBER3EXERCISE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char character;
	printf("Write anything and i'll tell you if it's a symbol, number, uppercase letter, or lowercase letter \n ");
	printf("Write your character: ");
	scanf_s("%c", &character);

	if (character <= 57 && character >= 48)
	{
		printf("this is a number");
	}

	else if (character >= 65 && character <= 90)
	{
		printf("this is an upper-case letter");
	}

	else if (character >= 97 && character <= 122) {
		printf("this is a lower-case letter");
	}

	else
	{
		printf("this is a symbol");
	}

	return 0;
}

