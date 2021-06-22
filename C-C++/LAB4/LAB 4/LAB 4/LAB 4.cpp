// LAB 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	// First
	int nNumberInsert = 0;
	int anyArray[8] = { 1, 2, 3 ,4 ,5 ,6, 7 ,8 };
	int nIndex = 0;
	//printf("%s \n", anyArray);
	for (int i = 0; i < 8; i++)
	{
		printf("%i  ", anyArray[i]);
	}
	printf("\n");
	printf("Enter which number to insert: \n");
	scanf_s("%i", &nNumberInsert);
	printf("Enter which index to insert it to: \n");
	scanf_s("%i", &nIndex);
	for (int i = 7; i > nIndex; i--)
	{
		int counter2 = i - 1;
		anyArray[i] = anyArray[counter2];

	}
	anyArray[nIndex] = nNumberInsert;
	for (int i = 0; i < 8; i++)
	{
		printf("%i   ", anyArray[i]);
	}
	printf("\n\n\n");
	//SECOND
	nIndex = 0;
	int anyArray2[8] = { 1, 2, 3 ,4 ,5 ,6, 7 ,8 };
	int valuesaved1 = anyArray2[7];;
	int valuesaved2 = 0;
	for (int i = 0; i < 8; i++)
	{
		printf("%i  ", anyArray2[i]);
	}
	printf("\n");
	printf("Enter which index to delete. \n");
	scanf_s("%i", &nIndex);
	for (int i = 7; i > nIndex; i--)
	{
		int counter2 = i - 1;
		valuesaved2 = anyArray2[counter2];
		anyArray2[counter2] = valuesaved1;
		valuesaved1 = valuesaved2;


	}
	anyArray2[7] = -1;
	for (int i = 0; i < 8; i++)
	{
		printf("%i  ", anyArray2[i]);
	}
	printf("\n\n\n");
	//THIRD
	printf("\n");
	char sentence[40];
	int length = 0;
	int counter = 0;
	printf("Write down something: \n");
	scanf_s(" %[^\n]%*c", sentence, 40);
	length = strlen(sentence);
	printf("%i \n", length);
	printf("Your sentence is %s \n", sentence);
	for (int i = 0; i <= length; i++)
	{
		int finder = sentence[i];
		if (finder == 'a' || finder == 'e' || finder == 'i' || finder == 'o' || finder == 'u')
		{
			counter++;
		}
	}
	printf("Your sentence has %i vowels \n", counter);
	counter = 0;
	//Fourth
	printf("\n");
	char sentence2[40];
	length = 0;
	counter = 0;
	printf("Write down something: \n");
	scanf_s(" %[^\n]%*c", sentence2, 40);
	length = strlen(sentence2);
	printf("%i \n", length);
	printf("Your sentence is %s \n", sentence2);
	for (int i = 0; i <= length; i++)
	{
		int finder = sentence2[i];
		if (finder >= 33 && finder <= 64 || finder >= 91 && finder <= 96 || finder >= 123 && finder <= 126 || finder >= 128 && finder <= 254)
		{
			counter++;
		}
	}
	printf("Your sentence has %i symbols \n", counter);
	counter = 0;
	// FIFTH
	printf("\n");
	char sentence3[40];
	printf("Write down another sentence: \n");
	scanf_s(" %[^\n]%*c", sentence3, 40);
	length = 0;
	length = strlen(sentence3);
	for (int i = 0; i <= length; i++)
	{
		sentence3[i];
		if (sentence3[i] >= 97 && sentence3[i] <= 122)
		{
			sentence3[i]-= 32;
		}
	}
	printf("Your new sentence is %s \n", sentence3);

	//SIXTH
	printf("\n");
	char reversethis[20];
	length = 0;
	int resultcom = 0;
	printf("Write down a word: \n");
	scanf_s("%s", reversethis, 20);
	char reversesaver[20];
	strcpy_s(reversesaver, reversethis);
	length = strlen(reversethis);
	char saver1 = reversethis[0];
	for (int i = 0; i < length; i++)
	{
		if (i != length)
		{
			length -= 1;
			reversethis[i] = reversethis[length];
			reversethis[length] = saver1;
			saver1 = reversethis[i + 1];
		}
	}

	resultcom = strcmp(reversesaver, reversethis);
	printf("%s", reversethis);
	if (resultcom == 0)
	{
		printf("\n These word are pretty much the same. \n");
	}
	else
	{
		printf("\n These word are different. \n");
	}

	//Seven
	printf("\n");
	printf("SEVENTH EXERCISE\n\n");
	char lastnameihave[5][15] = { "Talisman" , "Shield", "Boots", "Axe","Potion" };
	int i = 0;
	int saver = 0;
	int result = 0;
	for (i = 0; i < 5; i++)
	{

		result = strcmp(lastnameihave[saver], lastnameihave[i]);
		if (result == 1)
		{
			saver++;
		}

	}
	printf("%s goes first \n", lastnameihave[saver]);
	//Eight
	printf("\n");
	printf("EXERCISE number 8\n\n");
	char nomorenames[5][15] = { "Talisman" , "Shield", "Boots", "Axe","Potion" };
	int j = 0;
	for (int i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (nomorenames[i][j] == 'a' || nomorenames[i][j] == 'A')
			{
				nomorenames[i][j] = '@';
			}
			printf("%c", nomorenames[i][j]);
		}
		printf("\n");
	}
}