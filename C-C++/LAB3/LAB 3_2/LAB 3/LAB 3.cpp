// LAB 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
int Randomize(int min, int max)
{
	int randomNumber = 0;
	for (int i = 0; i < 1; i++)
	{
		randomNumber = min + rand() % ( (max - min) + 1);
		
	}
	return randomNumber;
}
int CheckCriticalHit(int damage)
{
	int randomcritical = 0;

	randomcritical = rand() % 101;
	if (randomcritical <= 30)
	{
		damage = damage * 2;
		return damage;
	}
	else
	{
		return damage;
	}
}
float ModifyDamage(int damage)
{
	float randomm = Randomize(90, 110);
	float damageModified;
		if (randomm != 100)
		{
			damageModified = (randomm * damage)/ 100;
			return damageModified;

		}
		if (randomm == 100)
		{
			damageModified = damage;
			return damageModified;
		}
}
int CountPrimeNumbers(int min, int max)
{
	int i = 0;
	int result = 0;

	for (min; min <= max; min++)
	{
		for (int counter = 2; counter <= min; counter++)
		{

			if (min % counter == 0)
			{
				result++;
			}

		}
		if (result == 1)
		{
			i++;

		}
		result = 0;
	}
	return i;
}
int CountDays(int year1, int year2)
{
	int normal = 0;
	int leap = 0;
	int total = 0;
	for (int i = year1; i <= year2; i++)
	{
		if (i % 4 == 0)
		{
			leap++;
		}
		else
		{
			normal++;
		}
	}
	total = (leap * 366) + (normal * 365);
	return total;

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
bool Mastermind(int number, int random)
{

	if (number == random)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	srand(time(NULL));
	//first
	printf("First point (\n");
	int result = 0;
	int min, max;
	printf("What is the minimum number\n");
	scanf_s("%i", &min);
	printf("What is the maximum number\n");
	scanf_s("%i", &max);
	result = Randomize(min, max);
	printf("The randomized number is %i\n", result);
	//second
	int damage;
	printf("What is your damage\n");
	scanf_s("%i", &damage);
	result = CheckCriticalHit(damage);
	printf("The damage dealt is %i\n", result);
	//Third
	float fResult;
	printf("What is your damage\n");
	scanf_s("%i", &damage);
	fResult = ModifyDamage(damage);
	printf("You dealt %f damage\n", fResult);
	fResult = ModifyDamage(damage);
	printf("You dealt %f damage\n", fResult);
	fResult = ModifyDamage(damage);
	printf("You dealt %f damage\n", fResult);
	fResult = ModifyDamage(damage);
	printf("You dealt %f damage\n", fResult); 
	fResult = ModifyDamage(damage);
	printf("You dealt %f damage\n", fResult);
	//Fourth
	printf("What is your minimum\n");
	scanf_s("%i", &min);
	printf("What is your maximum\n");
	scanf_s("%i", &max);
	result =CountPrimeNumbers(min, max);
	printf("There are %i prime numbers in that range\n", result);
	//Fifth
	printf("What is the first year\n");
	scanf_s("%i", &min);
	printf("What is the last year\n");
	scanf_s("%i", &max);
	result = CountDays(min, max);
	printf("There are %i days.\n", result);
	//Sixth
	int coin = 0;
	char wannaplay = ' ';
	int money = 100;

	do
	{
		printf("Head (1) Tails (2) \n");
		scanf_s("%i", &coin);
		result = DoubleOrNothing(coin, money);
		printf("Want to keep playing? \n");
		scanf_s(" %c", &wannaplay);
	} while (result != 0 && wannaplay == 'y' || wannaplay == 'Y');


	//Seventh
	int firstnumber, secondnumber, thirdnumber, fourthnumber;
	int i = 0;
	int i2 = 10;
	int random1 = Randomize(0, 9);
	int random2 = Randomize(0, 9);
	int random3 = Randomize(0, 9);
	int random4 = Randomize(0, 9);
	bool result1 = false, result2 = false, result3 = false, result4 = false;
	do
	{
		i = 0;
		printf("\n%i %i %i %i \n", random1, random2, random3, random4);

		printf("Enter first number: \n");
		scanf_s("%i", &firstnumber);
		result1 = Mastermind(firstnumber, random1);

		printf("Enter second number: \n");
		scanf_s("%i", &secondnumber);
		result2 = Mastermind(secondnumber, random2);
		printf("Enter third number: \n");
		scanf_s("%i", &thirdnumber);
		result3 = Mastermind(thirdnumber, random3);
		printf("Enter fourth number: \n");
		scanf_s("%i", &fourthnumber);
		result4 = Mastermind(fourthnumber, random4);
		if (result1 == true)
		{
			i++;
		}
		if (result2 == true)
		{
			i++;
		}
		if (result3 == true)
		{
			i++;
		}
		if (result4 == true)
		{
			i++;
		}

		printf("%i of your numbers are correctly placed. \n", i);
		i2--;
		printf("You have %i tries left \n", i2);
	} while (i2 != 0 && i != 4);

}
