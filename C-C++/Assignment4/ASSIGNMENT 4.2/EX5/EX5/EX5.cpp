// EX5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void ClockwiseShift(int array5[9])
{
	int saver = array5[7];
	for (int i = 8; i > 0; i--)
	{
		array5[i] = array5[i - 1];
	}
	array5[0] = saver;
	printf("\n Order after shifting : \n");
	for (int i = 0; i < 8; i++)
	{
		printf("%i ", array5[i]);
	}
}
int main()
{
	int array5[9] = { 64, 47, 100, 55, 78, 90, 91, 16, '\0' };
	ClockwiseShift(array5);
	printf("\n\n");
}