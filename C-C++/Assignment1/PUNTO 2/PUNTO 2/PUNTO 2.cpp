// PUNTO 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char first;
	char second;
	char third;
	char fourth;
	char fifth;
	printf("  The game of guessing your name!\n");
	printf("Please write 5 characters, so we can guess your name :) \n");
	printf("Enter the first character: ");
	scanf_s(" %c", &first);

	printf("\nEnter the second character: ");
	scanf_s(" %c", &second);

	printf("\nEnter the third character: ");
	scanf_s(" %c", &third);

	printf("\nEnter the fourth character: ");
	scanf_s(" %c", &fourth);

	printf("\nEnter the fifth character: ");
	scanf_s(" %c", &fifth);

	printf("Your name is: %c%c%c%c%c", first, second, third, fourth, fifth);
	printf("\n Thanks for playing my game!\n");
	return 0;
}
