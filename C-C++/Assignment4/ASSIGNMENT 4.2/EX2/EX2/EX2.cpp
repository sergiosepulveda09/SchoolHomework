// EX2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
float GetMean(int array2[8])
{
	float result = 0;
	for (int i = 0; i < 8; i++)
	{
		result += array2[i];
	}
	return result;
}
int main()
{
	printf("\n\n Question two \n");
	int array2[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	float result = 0;
	result = GetMean(array2);
	printf("%.2f\n \n\n", result);
}

