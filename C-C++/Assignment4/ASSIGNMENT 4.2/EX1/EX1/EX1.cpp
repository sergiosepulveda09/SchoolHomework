// EX1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void PrintArrayIndexAt(int array1[8], int normal)
{
	printf("%i \n", array1[normal]);
}
int main()
{
	int array1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int index = 0;
	for (int i = 0; i < 8; i++)
	{
		printf("%i ", array1[i]);
	}

	printf("\n Write down the index of the number you want to print \n");
	scanf_s("%i", &index);
	PrintArrayIndexAt(array1, index);
}
