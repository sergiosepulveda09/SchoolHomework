// EX6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void ToUpperCase(char sentence3[20])
{
	int length = 0;
	length = strlen(sentence3);
	for (int i = 0; i <= length; i++)
	{
		sentence3[i];
		if (sentence3[i] >= 97 && sentence3[i] <= 122)
		{
			sentence3[i] -= 32;
		}
	}
	printf("Your new sentence is %s \n", sentence3);
}
int main()
{
	printf("\n");
	char sentence3[40];
	printf("Write down another sentence: \n");
	scanf_s("%[^\n]c", sentence3, 40);
	ToUpperCase(sentence3);
}