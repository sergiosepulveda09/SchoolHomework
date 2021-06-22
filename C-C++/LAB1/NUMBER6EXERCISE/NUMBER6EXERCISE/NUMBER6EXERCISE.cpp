// NUMBER6EXERCISE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int money, another;
	printf("Enter the money you'd like to withdrawal: ");
	scanf_s("%i", &money);

	another = money % 100;
	money = money / 100;
	printf("\n$100 bills: %i", money);

	another = another % 100;
	money = another / 50;

	printf("\n$50 bills: %i", money);

	another = another % 50;
	money = another / 20;
	printf("\n$20 bills: %i", money);

	another = another % 20;
	money = another / 10;
	printf("\n$10 bills: %i", money);

	another = another % 10;
	money = another / 5;
	printf("\n$5 bills: %i", money);

	another = another % 5;
	money = another / 2;
	printf("\n$2 bills: %i", money);

	another = another % 2;
	money = another / 1;
	printf("\n$1 bills: %i", money);
	return 0;
}

