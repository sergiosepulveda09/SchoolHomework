#include "pch.h"
#include <iostream>

int main()
{
	int grade;
	printf("Please introduce your grade: ");
	scanf_s("%i", &grade);
	if (grade >= 90 && grade <=100)
		printf("Your letter grade is: A");
	else if (grade >= 80 && grade < 90)
		printf("Your letter grade is: B");
	else if (grade >= 70 && grade < 80)
		printf("Your letter grade is: C");
	else if (grade >= 60 && grade < 70)
		printf("Your letter grade is: D");
	else if (grade < 60)
		printf("Your letter grade is: F");
	else {
		printf("\nplease write a number between 0 to 100");
	}
}

