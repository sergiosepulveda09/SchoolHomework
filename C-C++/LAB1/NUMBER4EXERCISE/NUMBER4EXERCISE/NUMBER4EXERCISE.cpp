#include "pch.h"
#include <iostream>

int main()
{
	int yournumber;

	printf("I'll show you if your number is divisible by 13 or 7\n ");
	printf("Write your number: ");
	scanf_s("%i", &yournumber);

	if ((yournumber % 13) == 0 && (yournumber % 7) == 0)
	{
		printf("Your number is divisible by 13 and 7");
	}
	else if ((yournumber % 13) == 0 && (yournumber % 7) != 0)
	{
		printf("Your number is divisible by 13 but not by 7");
	}
	else if ((yournumber % 13) != 0 && (yournumber % 7) != 0)
	{
		printf("Your number is not divisible by either 13 or 7");
	}
	else if ((yournumber % 13) != 0 && (yournumber % 7) == 0)
	{
		printf("Your number is not divisible by 13 but it is divisible by 7");
	}
	return 0;
}

