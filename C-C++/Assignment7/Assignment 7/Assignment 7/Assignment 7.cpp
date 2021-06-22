#include "pch.h"
#include <iostream>

struct Weapon
{
	char cName[15];
	int nAttack;
	struct Weapon *Next;
};
void WeaponsPrinting()
{
	struct Weapon *pHead;
	struct Weapon *pCurrent;
	pHead = (struct Weapon*)malloc(sizeof(struct Weapon));
	strcpy_s(pHead->cName, "M16 rifle");
	pHead->nAttack = 100;
	pCurrent = pHead;
	pCurrent->Next = (struct Weapon*)malloc(sizeof(struct Weapon));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->cName, "MP9");
	pCurrent->nAttack = 80;
	pCurrent->Next = (struct Weapon*)malloc(sizeof(struct Weapon));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->cName, "AK47");
	pCurrent->nAttack = 101;
	pCurrent->Next = (struct Weapon*)malloc(sizeof(struct Weapon));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->cName, "SCAR H");
	pCurrent->nAttack = 106;
	pCurrent->Next = (struct Weapon*)malloc(sizeof(struct Weapon));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->cName, "TDI-VECTOR");
	pCurrent->nAttack = 65;
	pCurrent->Next = NULL;
	pCurrent = pHead;
	int i = 1;
	while (pCurrent != NULL)
	{
		printf("\tThe %i Weapon's Name is %s\n", i, pCurrent->cName);
		printf("\tThe %i Weapon's Attack is %i\n", i, pCurrent->nAttack);
		pCurrent = pCurrent->Next;
		i++;
		printf("\n");
	}
	i = 0;
	int counter = 0;
	pCurrent = pHead;
	int nBiggestPower = pHead->nAttack;
	while (pCurrent != NULL)
	{
		if (nBiggestPower < pCurrent->nAttack)
		{
			nBiggestPower = pCurrent->nAttack;
			counter = i;
		}
		pCurrent = pCurrent->Next;


		i++;

	}
	pCurrent = pHead;
	i = 0;
	while (i < counter)
	{
		pCurrent = pCurrent->Next;
		i++;
	}
	printf("The strongest weapon is : %s with ATK of %i\n", pCurrent->cName, pCurrent->nAttack);
}
struct Pokemon
{
	char Name[15];
	int atk;
	int def;
	char Element[10];
	struct Pokemon *Next;
};
void Printing34()
{
	struct Pokemon *pHead = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	struct Pokemon *pCurrent;
	pCurrent = pHead;
	strcpy_s(pHead->Name, "Bulbasaur");
	pHead->atk = 33;
	pHead->def = 22;
	strcpy_s(pHead->Element, "Grass");
	pCurrent = pCurrent->Next = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	strcpy_s(pCurrent->Name, "Charmander");
	pCurrent->atk = 52;
	pCurrent->def = 11;
	strcpy_s(pCurrent->Element, "Fire");
	pCurrent = pCurrent->Next = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	strcpy_s(pCurrent->Name, "Squirtle");
	pCurrent->atk = 21;
	pCurrent->def = 49;
	strcpy_s(pCurrent->Element, "Water");
	pCurrent = pCurrent->Next = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	strcpy_s(pCurrent->Name, "Magikarp");
	pCurrent->atk = 10;
	pCurrent->def = 8;
	strcpy_s(pCurrent->Element, "Water");
	pCurrent->Next = NULL;
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("\t%s (%s)\n", pCurrent->Name, pCurrent->Element);
		printf("\tATK: %i DEF: %i\n", pCurrent->atk, pCurrent->def);
		pCurrent = pCurrent->Next;
	}
	printf("Insert a new Pokemon at the third slot!\n");
	printf("Enter their name: ");
	struct Pokemon *pTemp = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	scanf_s(" %s", pTemp->Name, 15);
	printf("\nEnter ATK: ");
	scanf_s(" %i", &pTemp->atk);
	printf("\nEnter DEF: ");
	scanf_s(" %i", &pTemp->def);
	printf("\nEnter Element: ");
	scanf_s(" %s", pTemp->Element, 10);
	pTemp->Next = NULL;
	struct Pokemon *pTemp2 = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	pCurrent = pHead;
	for (int j = 0; j < 2; j++)
	{
		pCurrent = pCurrent->Next;
	}
	strcpy_s(pTemp2->Name, pCurrent->Name);
	pTemp2->atk = pCurrent->atk;
	pTemp2->def = pCurrent->def;
	strcpy_s(pTemp2->Element, pCurrent->Element);
	pTemp2->Next = pCurrent->Next;

	strcpy_s(pCurrent->Name, pTemp->Name);
	pCurrent->atk = pTemp->atk;
	pCurrent->def = pTemp->def;
	strcpy_s(pCurrent->Element, pTemp->Element);

	printf("\nInsert successful! Here’s the updated linked list: \n");
	pCurrent = pHead;
	int i = 0;
	while (pCurrent != NULL)
	{


		printf("\t%s (%s)\n", pCurrent->Name, pCurrent->Element);
		printf("\tATK: %i DEF: %i\n", pCurrent->atk, pCurrent->def);
		i++;

		if (i == 3)
		{
			printf("\t%s (%s)\n", pTemp2->Name, pTemp2->Element);
			printf("\tATK: %i DEF: %i\n", pTemp2->atk, pTemp2->def);
			pTemp2->Next = pCurrent->Next;
			i++;
		}
		pCurrent = pCurrent->Next;
	}

	printf("Insert a new Pokemon at the first slot!\n");
	printf("Enter their name: ");
	scanf_s(" %s", pTemp->Name, 15);
	printf("\nEnter ATK: ");
	scanf_s(" %i", &pTemp->atk);
	printf("\nEnter DEF: ");
	scanf_s(" %i", &pTemp->def);
	printf("\nEnter Element: ");
	scanf_s(" %s", pTemp->Element, 10);
	pTemp->Next = NULL;
	struct Pokemon *pTemp3 = (struct Pokemon*)malloc(sizeof(struct Pokemon));
	pCurrent = pHead;
	strcpy_s(pTemp3->Name, pHead->Name);
	pTemp3->atk = pHead->atk;
	pTemp3->def = pHead->def;
	strcpy_s(pTemp3->Element, pHead->Element);
	pTemp3->Next = pHead->Next;

	strcpy_s(pHead->Name, pTemp->Name);
	pHead->atk = pTemp->atk;
	pHead->def = pTemp->def;
	strcpy_s(pHead->Element, pTemp->Element);
	i = 0;
	while (pCurrent != NULL)
	{


		printf("\t%s (%s)\n", pCurrent->Name, pCurrent->Element);
		printf("\tATK: %i DEF: %i\n", pCurrent->atk, pCurrent->def);

		i++;
		if (i == 1)
		{
			printf("\t%s (%s)\n", pTemp3->Name, pTemp3->Element);
			printf("\tATK: %i DEF: %i\n", pTemp3->atk, pTemp3->def);
			pTemp2->Next = pCurrent->Next;
			i++;
		}
		else if (i == 3)
		{
			printf("\t%s (%s)\n", pTemp2->Name, pTemp2->Element);
			printf("\tATK: %i DEF: %i\n", pTemp2->atk, pTemp2->def);
			pTemp2->Next = pCurrent->Next;
			i++;
		}
		pCurrent = pCurrent->Next;
	}
	free(pTemp3);
	free(pTemp2);
	free(pTemp);
}
struct ShopItems
{
	char Name[15];
	int Price;
	struct ShopItems *Next;

};
void Printing56()
{
	struct ShopItems *pHead;
	struct ShopItems *pCurrent;
	pHead = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	strcpy_s(pHead->Name, "Potion");
	pHead->Price = 300;
	pCurrent = pHead;
	pCurrent->Next = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, "Phoenix Down");
	pCurrent->Price = 1000;
	pCurrent->Next = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, "Longsword");
	pCurrent->Price = 4200;
	pCurrent->Next = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, "Super Potion");
	pCurrent->Price = 500;
	pCurrent->Next = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, "PlayStation 4");
	pCurrent->Price = 1234;
	pCurrent->Next = NULL;

	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("\t%s: %iG \n", pCurrent->Name, pCurrent->Price);
		pCurrent = pCurrent->Next;
	}

	struct ShopItems *pTemp = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	struct ShopItems *pTemp2 = (struct ShopItems*)malloc(sizeof(struct ShopItems));
	pCurrent = pHead;
	printf("\n\nThe first item (%s) was bought for %iG.\n", pCurrent->Name, pCurrent->Price);
	pCurrent = pCurrent->Next;
	strcpy_s(pTemp->Name, pCurrent->Name);
	pTemp->Price = pCurrent->Price;
	pTemp->Next = pCurrent->Next;
	pCurrent = pCurrent->Next;
	strcpy_s(pTemp2->Name, pCurrent->Name);
	pTemp2->Price = pCurrent->Price;
	pTemp2->Next = pCurrent->Next;
	pCurrent = pHead;
	strcpy_s(pCurrent->Name, pTemp->Name);
	pCurrent->Price = pTemp->Price;
	pCurrent->Next = pTemp->Next;
	pCurrent = pHead;
	for (int j = 0; j < 2; j++)
	{
		pCurrent = pCurrent->Next;
	}

	printf("\n\n\n");
	strcpy_s(pTemp->Name, pCurrent->Name);
	pTemp->Price = pCurrent->Price;
	pTemp->Next = pCurrent->Next;
	pCurrent = pHead;
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, pTemp2->Name);
	pCurrent->Price = pTemp2->Price;
	pCurrent->Next = pTemp2->Next;
	pCurrent = pCurrent->Next;
	strcpy_s(pCurrent->Name, pTemp->Name);
	pCurrent->Price = pTemp->Price;
	pCurrent->Next = pTemp->Next;
	pCurrent = pHead;

	free(pTemp2);
	while (pCurrent != NULL)
	{
		printf("\t%s: %iG \n", pCurrent->Name, pCurrent->Price);
		pCurrent = pCurrent->Next;
	}


	printf("Enter the index of the item you'll delete: ");
	int option = 0;
	scanf_s("%i", &option);
	pCurrent = pHead;
	printf("\n");
	if (option < 3)
	{
		for (int j = 0; j < option + 1; j++)
		{
			pCurrent = pCurrent->Next;
		}

		strcpy_s(pTemp->Name, pCurrent->Name);
		pTemp->Price = pCurrent->Price;
		pTemp->Next = pCurrent->Next;
		pCurrent = pHead;
		for (int j = 0; j < option; j++)
		{
			pCurrent = pCurrent->Next;
		}
		strcpy_s(pCurrent->Name, pTemp->Name);
		pCurrent->Price = pTemp->Price;
		pCurrent->Next = pTemp->Next;
		free(pTemp);
	}
	else if (option == 3)
	{
		for (int j = 0; j < option; j++)
		{
			pCurrent = pCurrent->Next;
		}

		free(pCurrent);
		pCurrent = pHead;
		for (int j = 0; j < option - 1; j++)
		{
			pCurrent = pCurrent->Next;
		}

		pCurrent->Next = NULL;
	}
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("\t%s: %iG \n", pCurrent->Name, pCurrent->Price);
		pCurrent = pCurrent->Next;
	}
}
struct Game
{
	char Name[20];
	int Rating;
	struct Game *Next;
};
int main()
{
	//First and second
	WeaponsPrinting();
	system("pause");
	system("cls");
	//ThirdAndFour
	Printing34();
	system("pause");
	system("cls");
	//FifthAndSix
	Printing56();
	system("pause");
	system("cls");
	//Seventh
	/*struct Game *pHead = (struct Game*)malloc(sizeof(struct Game));
	struct Game *pCurrent = (struct Game*)malloc(sizeof(struct Game));
	pCurrent = pHead;
	printf("Enter Game 1: \n");
	scanf_s(" %[^\n]s", pCurrent->Name, 20);
	printf("Enter score: \n");
	scanf_s(" %i", &pCurrent->Rating);
	for (int j = 2; j <=5; j++)
	{
		pCurrent = pCurrent->Next = (struct Game*)malloc(sizeof(struct Game));
		printf("Enter Game %i: \n", j);
		scanf_s(" %[^\n]s", pCurrent->Name, 20);
		printf("Enter score: \n");
		scanf_s(" %i", &pCurrent->Rating);
		pCurrent->Next = NULL;
		
	}
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("\t%s(%i)\n", pCurrent->Name, pCurrent->Rating);
		pCurrent = pCurrent->Next;
	}
	printf("\n\n\n\n");
	pCurrent = pHead;
	struct Game *pTemp = (struct Game*)malloc(sizeof(struct Game));
	strcpy_s(pTemp->Name,pCurrent->Name);
	pTemp->Rating = pCurrent->Rating;
		for (int counter = 0; pCurrent != NULL; counter++, pCurrent = pCurrent->Next)
		{
			if (pTemp->Rating < pCurrent->Rating)
			{
				strcpy_s(pTemp->Name, pCurrent->Name);
				pTemp->Rating = pCurrent->Rating;
			}
		}
		struct Game *pTempCurrent = pTemp;
		pTempCurrent = pTempCurrent->Next = (struct Game*)malloc(sizeof(struct Game));

		pCurrent = pHead;
		pCurrent = pCurrent->Next;
		pTempCurrent->Rating = pCurrent->Rating;
		for (int counter = 0; pCurrent != NULL; counter++, pCurrent = pCurrent->Next)
		{
			if (pTempCurrent->Rating < pCurrent->Rating)
			{
				strcpy_s(pTempCurrent->Name, pCurrent->Name);
				pTempCurrent->Rating = pCurrent->Rating;
			}
		}
		pCurrent = pHead;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pTempCurrent = pTempCurrent->Next;
		pTempCurrent->Rating = pCurrent->Rating;
		for (int counter = 0; pCurrent != NULL; counter++, pCurrent = pCurrent->Next)
		{
			if (pTempCurrent->Rating < pCurrent->Rating)
			{
				strcpy_s(pTempCurrent->Name, pCurrent->Name);
				pTempCurrent->Rating = pCurrent->Rating;
			}
		}
		pCurrent = pHead;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pTempCurrent = pTempCurrent->Next;
		pTempCurrent->Rating = pCurrent->Rating;
		for (int counter = 0; pCurrent != NULL; counter++, pCurrent = pCurrent->Next)
		{
			if (pTempCurrent->Rating < pCurrent->Rating)
			{
				strcpy_s(pTempCurrent->Name, pCurrent->Name);
				pTempCurrent->Rating = pCurrent->Rating;
			}
		}
		pCurrent = pHead;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pCurrent = pCurrent->Next;
		pTempCurrent = pTempCurrent->Next;
		pTempCurrent->Rating = pCurrent->Rating;
		for (int counter = 0; pCurrent != NULL; counter++, pCurrent = pCurrent->Next)
		{
			if (pTempCurrent->Rating < pCurrent->Rating)
			{
				strcpy_s(pTempCurrent->Name, pCurrent->Name);
				pTempCurrent->Rating = pCurrent->Rating;
			}
		}
		pTempCurrent->Next = NULL;

		pTempCurrent = pTemp;
		pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("\t%s(%i)\n", pCurrent->Name, pCurrent->Rating);
		pCurrent = pCurrent->Next;
	}
	while (pTempCurrent != NULL)
	{
		printf("\t%s(%i)\n", pTempCurrent->Name, pTempCurrent->Rating);
		pTempCurrent = pTempCurrent->Next;
	}*/
}
