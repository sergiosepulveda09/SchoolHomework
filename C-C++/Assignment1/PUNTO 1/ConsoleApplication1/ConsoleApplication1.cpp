#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	//EXERCISE 1
	char G;
	printf("  The game of guessing you genre!\n");
	printf("Are you male or female?\n");
	printf("Please introduce the first letter your genre(not a capital letter): \n");
	scanf_s("%c", &G);
	if (G == 'm')
		printf("You're a MALE!");
	
	if (G == 'f')
		printf("You're a FEMALE!");
	
	else {
		printf("\nYou wrote it incorrectly, try again.");
	}
	return 0;
}

