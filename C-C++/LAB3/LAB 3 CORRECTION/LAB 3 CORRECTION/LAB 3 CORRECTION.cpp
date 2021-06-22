// LAB 3 CORRECTION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
int Randomize(int min, int max)
{
	int randomNumber = 0;
	for (int i = 0; i < 1; i++)
	{
		randomNumber = min + rand() % ((max - min) + 1);

	}
	return randomNumber;
}
int DoubleOrNothing(int bet, int money)
{
	char wannaplay = ' ';
	int random = Randomize(1, 2);
	if (random == 1)
	{
		printf("The coin landed Heads\n");
		if (bet == random)
		{
			money *= 2;
			printf("You have won, your money is now  %i \n", money);
			return money;
		}

		else
		{
			money = 0;
			printf("You have lost, your money is now %i \n", money);
		}
		return money;
	}
	else if (random == 2)
	{
		printf("The coin landed Tails\n");
		if (bet == random)
		{
			money = money * 2;
			printf("You have won, your money is now  %i \n", money);
		}

		else
		{
			money = 0;
			printf("You have lost, your money is now %i \n", money);
		}
		return money;
	}

}
int main()
{
	srand(time(NULL));
	int result = 0;
	int coin = 0;
	char wannaplay = ' ';
	int money = 100;

	do
	{
		printf("Head (1) Tails (2) \n");
		scanf_s("%i", &coin);
		result = DoubleOrNothing(coin, money);
		if (result > 0)
		{
			printf("Want to keep playing? \n");
			scanf_s(" %c", &wannaplay);
		}
		money = result;
	} while (result != 0 && wannaplay == 'y' || wannaplay == 'Y');
}
