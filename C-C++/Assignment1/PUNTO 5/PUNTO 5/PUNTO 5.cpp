// PUNTO 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int month;
	printf("Let's find out what month are you thinking of\n");
	printf("Please write the number of your month\n");
	scanf_s("%i", &month);
	if (month == 1) {
		printf("The month you're thinking of is January");
	}
	if (month == 2) {
		printf("The month you're thinking of is February");
	}
	if (month == 3) {
		printf("The month you're thinking of is March");
	}
	if (month == 4) {
		printf("The month you're thinking of is April");
	}
	if (month == 5) {
		printf("The month you're thinking of is May");
	}
	if (month == 6) {
		printf("The month you're thinking of is June");
	}
	if (month == 7) {
		printf("The month you're thinking of is July");
	}
	if (month == 8) {
		printf("The month you're thinking of is August");
	}
	if (month == 9) {
		printf("The month you're thinking of is September");
	}
	if (month == 10) {
		printf("The month you're thinking of is October");
	}
	if (month == 11) {
		printf("The month you're thinking of is November");
	}
	if (month == 12) {
		printf("The month you're thinking of is December");
	}
	else {
		printf("The year has only 12 months!");
	}
	return 0;
}
