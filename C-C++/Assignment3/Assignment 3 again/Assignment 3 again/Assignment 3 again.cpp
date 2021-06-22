#include "pch.h"
#include <iostream>

void DrawRectangle(int height, int length)
{
	for (int h = 1; h <= height; h++)
	{
		for (int l = 1; l <= length; l++)
		{
			printf("*");
		}
		printf(" \n");
	}
}
float AbsoluteValue(float number)
{
	float result;
	if (number < 0)
	{
		result = number * -1;
		return result;
	}
	else
	{
		result = number;
		return result;
	}
}
float KilosToPounds(float weight)
{
	float result;
	result = weight * 2.2;
	return result;
}
float GetCircleArea(float radius)
{
	float area;
	area = (radius * radius) * 3.141692;
	return area;
}
bool CanEquipWeapon(int strength, int strengthreq, bool barbarian)
{
	if (strength >= strengthreq && barbarian == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
char ToUpperCase(char character)
{
	if (character >= 65 && character <= 90)
	{
		printf("Here is your upper-case character: %c\n", character);
		return character;
	}
	else if (character >= 97 && character <= 122 )
	{
		character = character - 32;
		printf("Here is your upper-case character: %c\n", character);
		return character;
	}

	
}
int CountTo1000(int number1, int number2)
{
	for (number1; number1 <= 1000; number1 += number2)
		printf("%i\n", number1);
	return number1;
}
int FibunacciNth(int position)
{
	int number1 = 0;
	int number2 = 1;
	int result = 0;

	if (position == 1)
	{
		result = 0;
		return result;
	}
	else if (position == 2)
	{
		result = 1;
		return result;
	}
	else
	{
		for (int i = 2; i < position; i++)
		{
			result = number1 + number2;
			number1 = number2;
			number2 = result;
		}
		return result;
	}
}
int main()
{
	//First 
	int height, length;
	printf("Enter height\n");
	scanf_s("%i", &height);
	printf("Enter length\n");
	scanf_s("%i", &length);
	DrawRectangle(height, length);
	//Second
	float Fnumber, Fresult;
	printf("Enter number\n");
	scanf_s("%f", &Fnumber);
	Fresult = AbsoluteValue(Fnumber);
	printf("The absolute value is %.2f\n", Fresult);
	//Third
	printf("Enter weight in kilograms\n");
	scanf_s("%f", &Fnumber);
	Fresult = KilosToPounds(Fnumber);
	printf("The weight in pounds is %.2f lbs\n", Fresult);
	//Fourth
	printf("Enter radius\n");
	scanf_s("%f", &Fnumber);
	Fresult = GetCircleArea(Fnumber);
	printf("The circle's area is %.2f \n", Fresult);
	//Fifth
	int INumber, IRequired;
	char barbarian;
	bool BResult;
	printf("Enter strength\n");
	scanf_s("%i", &INumber);
	printf("Enter weapon's strength required\n");
	scanf_s("%i", &IRequired);
	printf("Are you barbarian? (y/n)\n");
	scanf_s(" %c", &barbarian);
	if (barbarian == 'y' || barbarian == 'Y')
	{
		INumber = INumber + (0.3* INumber);
		barbarian == true;
	}
	else
	{
		barbarian == false;
	}
	BResult = CanEquipWeapon(INumber, IRequired, barbarian);
	if (BResult == true)
	{
		printf("You can equip the weapon. \n");
	}
	else
	{
		printf("You can't equip the weapon. \n");
	}
	//Sixth
	char character;
	printf("Enter character to turn into Upper-case: \n");
	scanf_s(" %c", &character);
	character = ToUpperCase(character);
	//Seventh
	int result;
	printf("Enter number to start counting from: \n");
	scanf_s("%i", &INumber);
	printf("Enter number to skip counting by: \n");
	scanf_s("%i", &IRequired);
	result = CountTo1000(INumber, IRequired);
	//Final
	int position;
	printf("Enter the placement of the number you want in the Fibunacci Sequence: \n");
	scanf_s("%i", &position);
	result = FibunacciNth(position);
	if (result == 0)
	{
		printf("The number on that position of the Fibunacci Sequence is 0\n");
	}
	else if (result == 1)
	{
		printf("The number on that position of the Fibunacci Sequence is 1\n");
	}
	else
	{
		printf("The number on that position of the Fibunacci Sequence is %i\n", result);
	}
}

