// EX3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void OddEvenSorter(int array3[8])
{
	int even[10];
	int odds[10];
	int countere = 0;
	int counterod = 0;
	for (int i = 0; i < 8; i++)
	{
		if (array3[i] % 2 == 0)
		{
			even[countere] = array3[i];
			countere++;
		}
		else
		{
			odds[counterod] = array3[i];
			counterod++;
		}
	}
	printf("Contents of even number array\n");
	for (int i = 0; i < countere; i++)
	{
		printf("%i ", even[i]);
	}
	printf("\nContents of odd number array\n");
	for (int i = 0; i < counterod; i++)
	{
		printf("%i ", odds[i]);
	}
	countere = 0;
	counterod = 0;
}
int main()
{
	printf("Question three \n");
	int array3[20] = { 64, 47, 100, 55, 78, 90, 91, 16 };
	OddEvenSorter(array3);
}
