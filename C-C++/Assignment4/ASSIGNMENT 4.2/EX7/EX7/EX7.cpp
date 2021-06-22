
#include "pch.h"
#include <iostream>
int CountNegatives(int arraylast[8])
{
	int counter = 0;
	for (int i = 0; i < 8; i++)
	{
		if (arraylast[i] < 0)
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	int numberset[8] = { 64, -47, 100, -55, -78, 90, 91, -16 };
	int result = 0;
	result = CountNegatives(numberset);
	printf("There are %i negative numbers\n", result);
}
