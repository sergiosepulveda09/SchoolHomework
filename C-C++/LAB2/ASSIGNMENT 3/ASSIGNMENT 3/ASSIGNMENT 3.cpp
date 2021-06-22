// ASSIGNMENT 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	//FIRST POINT
	int heigth = 5;
	int length = 5;
	int i = 0;
	for (i = 1; i <= heigth; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (j == 1 || j == heigth || i == 1 || i == length || j == i || j + i == heigth + 1)
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}



	// SECOND POINT

	heigth = 6;
	length = 6;
	i = 0;
	for (i = 1; i <= heigth; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 && j == 1)
			{
				printf("6");
			}
			else if (i == 2 && j == 1 || i == 2 && j == 2)
			{
				printf("5");
			}
			else if (i == 3 && j == 1 || i == 3 && j == 2 || i == 3 && j == 3)
			{
				printf("4");
			}
			else if (i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3 || i == 4 && j == 4)
			{
				printf("3");
			}
			else if (i == 5 && j == 1 || i == 5 && j == 2 || i == 5 && j == 3 || i == 5 && j == 4 || i == 5 && j == 5)
			{
				printf("2");
			}
			else if (i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6)
			{
				printf("1");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");

	}




	//THIRD EXERCISE


	heigth = 8;
	length = 8;
	i = 0;
	for (i = 1; i <= heigth; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || j == length || i == j)
			{
				printf("*");
			}
			else if (i >= 2 && heigth > i && length > j && j > i)
			{
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


	// Fourth Exercise 
	printf("The odd number from 1 to 100 that are no divisible by 7 are: ");
	i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 != 0 && i % 7 != 0)
		{

			printf("\t%i\n", i);
		}
	}

	//Fifth Exercise

	int side1, side2, side3;
	char playornot = 'y';
	do
	{

		printf("Enter triangle's side 1: ");
		scanf_s("%i", &side1);
		printf("\nEnter triangle's side 2: ");
		scanf_s("%i", &side2);
		printf("\nEnter triangle's side 3: ");
		scanf_s("%i", &side3);

		if (side1 == side2 && side1 != side3 || side1 == side3 && side1 != side2 || side2 == side3 && side2 != side1)
		{
			printf("The triangle is Isosceles\n");
		}
		else if (side1 == side2 && side1 == side3)
		{
			printf("The triangle is Equilateral\n");
		}
		else
		{
			printf("The triangle is Scalene\n");
		}
		printf("Wanna play again? \n");
		scanf_s(" %c", &playornot);
	} while (playornot == 'y');

	//Sixth Exercise
	int sumdigit = 0;
	int result = 0;
	int modulus = 0;
	playornot = 'y';

	do
	{
		printf("Write your number: \n");
		scanf_s("%i", &sumdigit);
		while (sumdigit > 0) {
			modulus = sumdigit % 10;
			sumdigit = sumdigit / 10;
			result += modulus;
		}

		printf("the sum of your digits is: %i \n", result);
		result = 0;
		printf("Wanna play again? \n");
		scanf_s(" %c", &playornot);
	} while (playornot == 'y');
	

	//Seventh exercise 
	int literhour = 0;
	float payment;
	playornot = 'y';
	do
	{
		printf("How much water do you spend in a hour(liters)\n");
		scanf_s("%i", &literhour);
		while (playornot == 'y')
		{

			if (literhour >= 0 && literhour <= 1000)
			{
				payment = literhour * 0.22;
				printf("Total cost: %.2f\n", payment);
				payment = 0;
				playornot = 'n';
			}
			else if (literhour > 1000 && literhour < 5000)
			{
				payment = literhour * 0.27;
				printf("Total cost: %.2f\n", payment);
				payment = 0;
				playornot = 'n';
			}
			else if (literhour > 5000 && literhour < 9999)
			{
				payment = literhour * 0.34;
				printf("Total cost: $%.2f\n", payment);
				payment = 0;
				playornot = 'n';
			}
			else
			{
				payment = literhour * 0.39;
				printf("Total cost: %.2f\n", payment);
				payment = 0;
				playornot = 'n';
			}
		}
		printf("Wanna play again? \n");
		scanf_s(" %c", &playornot);

	} while (playornot == 'y');



}