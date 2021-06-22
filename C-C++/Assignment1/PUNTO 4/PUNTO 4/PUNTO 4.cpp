// PUNTO 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	float percentage;
	int score, numberquestions;
	printf("Enter your score: ");
	scanf_s("%i", &score);
	printf("Enter the number of questions: ");
	scanf_s("%i", &numberquestions);
	percentage = (float)score / (float)numberquestions * 100.0;
	printf("\nYour percent is: %.2f", percentage);

}