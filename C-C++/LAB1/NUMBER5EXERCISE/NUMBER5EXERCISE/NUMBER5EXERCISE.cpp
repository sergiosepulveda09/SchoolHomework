#include "pch.h"
#include <iostream>

int main()
{
	int n1, n2;
	printf("You have $100\n");
	printf("[1] Potion $10 \n");
	printf("[2] Sword $15 \n");
	printf("[3] Gold Bar $45\n");

	printf("Choose an item you would like to buy: ");
	scanf_s("%i", &n1);
	if (n1 == 1) {
		n2 = 100 - 10;

		printf("\nYou have $%i left", n2);
	}
	else if (n1 == 2) {
		n2 = 100 - 15;

		printf("\nYou have $%i left", n2);
	}
	else if (n1 == 3) {
		n2 = 100 - 45;

		printf("\nYou have $%i left", n2);
	}
	else {
		printf("please write one of the numbers above. \n");
	}
	return 0;
}
