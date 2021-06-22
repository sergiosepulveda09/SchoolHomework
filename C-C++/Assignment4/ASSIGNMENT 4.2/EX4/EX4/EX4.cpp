// EX4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void VowelsToE(char array4[20])
{
	int length = strlen(array4);

	for (int i = 0; i < length; i++)
	{
		switch (array4[i])
		{
		case 'a':
		case 'i':
		case 'o':
		case 'u':
			array4[i] = 'e';
			break;
		default:
			break;
		}

	}

	printf("\n%s\n\n", array4);

}
int main()
{
	printf("Question four\n");
	char array4[20] = { "Talisman" };
	VowelsToE(array4);
	printf("\n\n");
}
