#include "pch.h"
#include <iostream>

struct Games
{
	struct Games *prev;
	char name[20];
	struct Games *next;
};

int main()
{
	//first
	struct Games *pHead = (struct Games*)malloc(sizeof(struct Games));
	struct Games *pTail = (struct Games*)malloc(sizeof(struct Games));
	struct Games *pCurrent = (struct Games*)malloc(sizeof(struct Games));
	pTail = pHead;
	strcpy_s(pTail->name, "Halo");
	pTail->next = (struct Games*)malloc(sizeof(struct Games));
	pTail->next->prev = pTail;
	pTail->prev = NULL;

	strcpy_s(pTail->next->name, "PUBG");
	pTail = pTail->next;
	pTail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(pTail->next->name, "Dota");
	pTail->next->prev = pTail;
	pTail = pTail->next;
	pTail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(pTail->next->name, "League");
	pTail->next->prev = pTail;
	pTail = pTail->next;
	pTail->next = (struct Games*)malloc(sizeof(struct Games));
	strcpy_s(pTail->next->name, "Starcraft");
	pTail->next->prev = pTail;
	pTail = pTail->next;
	pTail->next = NULL;
	pCurrent = pHead;
	struct Games *pInsert = (struct Games*)malloc(sizeof(struct Games));
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	//Second
	int option = 0;
	printf("Which position to insert Overwatch? ");
	scanf_s("%i", &option);

	strcpy_s(pInsert->name, "Overwatch");
	pInsert->next = (struct Games*)malloc(sizeof(struct Games));
	pCurrent = pHead;
	if (option != 0)
	{
	
	for (int j = 0; j < option; j++)
	{


		pCurrent = pCurrent->next;
	}

	pCurrent->prev = pInsert;
	pInsert->next = pCurrent;
	pCurrent = pHead;
	for (int j = 0; j < option - 1; j++)
	{
		pCurrent = pCurrent->next;
	}

	pCurrent->next = pInsert;
	pInsert->prev = pCurrent;
	}
	else if (option == 0)
	{
		pCurrent->prev = pInsert;
		pInsert->next = pCurrent;
		pInsert->prev = NULL;
		pHead = pInsert;
	}

	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	pCurrent = pTail;

	printf("\tBACKWARDS\n");
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->prev;
	}
	system("pause");
	system("cls");
	//Third
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	char cOption[10] = {};
	int comparison;
	printf("Which game would you like to delete? ");
	scanf_s("%s", cOption, 10);
	pCurrent = pHead;
	int i = 0;
	while (pCurrent != NULL)
	{
		comparison = strcmp(pCurrent->name, cOption);
		if (comparison == 0)
		{

		}
		else
		{
			printf("%s\n", pCurrent->name);

		}
		i++;
		pCurrent = pCurrent->next;
	}
	printf("\tBACKWARDS\n");
	pCurrent = pTail;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->prev;
	}
	system("pause");
	system("cls");
	//Fourth
	pCurrent = pHead;
	printf("\n\n");
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	printf("First position to swap ");
	scanf_s("%i", &option);
	int option2;
	printf("\nSecond position to swap ? ");
	scanf_s("%i", &option2);
	struct Games *pInsert2 = (struct Games*)malloc(sizeof(struct Games));
	struct Games *pInsert3 = (struct Games*)malloc(sizeof(struct Games));
	pCurrent = pHead;
	for (int j = 0; j < option; j++)
	{
		pCurrent = pCurrent->next;

	}
	strcpy_s(pInsert3->name, pCurrent->name);
	pCurrent = pHead;
	for (int j = 0; j < option2; j++)
	{
		pCurrent = pCurrent->next;

	}
	strcpy_s(pInsert2->name, pCurrent->name);
	pCurrent = pHead;
	for (int j = 0; j < option; j++)
	{
		pCurrent = pCurrent->next;

	}
	strcpy_s(pCurrent->name, pInsert2->name);
	pCurrent = pHead;
	for (int j = 0; j < option2; j++)
	{
		pCurrent = pCurrent->next;

	}
	strcpy_s(pCurrent->name, pInsert3->name);
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	pCurrent = pTail;

	printf("\tBACKWARDS\n");
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->prev;
	}

	system("pause");
	system("cls");
	//Fifth
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
	char cOption2[10] = {};
	printf("Enter new game to add to the list: ");
	scanf_s("%s", cOption2, 10);
	comparison = strcmp(cOption2, "done");
	pCurrent = pTail;
	while (comparison != 0)
	{

		pCurrent->next = (struct Games*)malloc(sizeof(struct Games));
		strcpy_s(pCurrent->next->name, cOption2);
		pCurrent->next->prev = pCurrent;
		pCurrent = pCurrent->next;
		pCurrent->next = NULL;
		printf("Enter new game to add to the list: ");
		scanf_s("%s", cOption2, 10);
		comparison = strcmp(cOption2, "done");
	}
	printf("\n\n");
	pCurrent = pHead;
	while (pCurrent != NULL)
	{
		printf("%s\n", pCurrent->name);
		pCurrent = pCurrent->next;
	}
}