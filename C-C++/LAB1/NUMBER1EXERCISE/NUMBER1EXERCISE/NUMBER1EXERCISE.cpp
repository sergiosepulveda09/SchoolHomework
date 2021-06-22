#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3;
	printf("Which one is the biggest? \n Write the first number: ");
	scanf_s("%f", &n1);

	printf("\n Write the second number: ");
	scanf_s("%f", &n2);

	printf("\n Write the third number: ");
	scanf_s("%f", &n3);

	if (n1 > n2 && n1 > n3)
	{
		printf("The first number is the biggest.");
	}

	else if (n2 > n1 && n2 > n3)
	{
		printf("The second number is the biggest");
	}

	else
	{
		printf("the third is the biggest");
	}

	return 0;
}
