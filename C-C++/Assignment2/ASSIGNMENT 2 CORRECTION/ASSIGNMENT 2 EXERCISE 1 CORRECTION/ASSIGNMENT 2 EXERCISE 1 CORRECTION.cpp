#include "pch.h"
#include <iostream>

int main()
{
	//FIRST
	int health = 100;
	int power;
	char hit = 'c';
	printf("\tHow strong are you(power)?:  ");
	scanf_s("%i", &power);
	printf("\tWrite down 'h' if you want to hit the player. \n");
	scanf_s(" %c", &hit);
	do
	{


		health -= power;
		if (health <= 0)
		{
			health = 0;
		}
		printf("\tYour Enemy HP is: %i\n", health);
		if (health == 0)
		{
			printf("\tYOUR ENEMY DIED\n");
		}
		else if (health > 0)
		{
			printf("\n\t Wanna hit it again?. \n");
			scanf_s(" %c", &hit);
		}

	} while (health > 0);
	//EIGHT
	int numberdigit = 0;
	int counterdigit = 0;
	printf("Write your number: \n");
	scanf_s("%i", &numberdigit);
	while (numberdigit > 0)
	{
		numberdigit = numberdigit / 10;
		counterdigit++;
	}
	if (numberdigit == 0)
	{
		counterdigit = 1;
	}
	printf("Your number has %i digits", counterdigit);
}
