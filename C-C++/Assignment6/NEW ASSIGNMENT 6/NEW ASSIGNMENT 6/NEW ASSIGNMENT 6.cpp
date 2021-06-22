#include "pch.h"
#include <iostream>
#include <time.h>
struct Node
{
	int data;
	struct Node *pNext;
};
struct cNode
{
	char cData;
	struct cNode*pcNext;
};
int main()
{
	srand(time(NULL));
	int random;
	int biggest = 0;
	int counter = 0;
	int *p = (int*)malloc(sizeof(int) * 10);
	struct Node *pHead;
	struct Node *pCurrent;
	pHead = (struct Node*)malloc(sizeof(struct Node));
	pHead->data = random = 1 + rand() % 100;
	pCurrent = pHead;
	for (int i = 0; i < 9; i++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		*p = pCurrent->data;
		p++;
		pCurrent->pNext = NULL;

	}
	pCurrent = pHead;
	int i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	i = 0;
	pCurrent = pHead;
	biggest = pCurrent->data;
	for (int i = 0; i < 10; i++)
	{
		if (pCurrent->data > *p)
		{
			biggest = pCurrent->data;
			p--;
		}
		else if (pCurrent->data < *p)
		{
			biggest = *p;
			pCurrent = pCurrent->pNext;
		}
	}
	printf("The biggest number is: %i\n", biggest);
	pCurrent = pHead;

	while (biggest != pCurrent->data)
	{
		counter++;
		pCurrent = pCurrent->pNext;
	}
	printf("The highest number is in the position %i\n", counter);

	system("pause");
	system("cls");
	//SECOND

	pCurrent = pHead;
	pHead->data = random = 1 + rand() % 100;
	int size = 0/*sizeof(pCurrent)*/;
	for (int j = 0; j < 9; j++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		pCurrent->pNext = NULL;
		size++;
	}
	pCurrent = pHead;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	pCurrent = pHead;
	printf("Write down a number you would like to print out from the index. Starting from 0.\n");
	scanf_s("%i", &i);
	if (i > size)
	{
		printf("ERROR. That is beyond the linked list!\n");
	}
	else if (i > 0 && i <= size)
	{

		for (int j = 0; j < i; j++)
		{
			pCurrent = pCurrent->pNext;
		}
		printf("The %i node has the number %i\n", i, pCurrent->data);
	}
	else if (i == 0)
	{
		pCurrent = pHead;
		printf("The %i node has the number %i\n", i, pCurrent->data);
	}
	else
	{
		printf("NOT VALID");
	}

	system("pause");
	system("cls");
	//THIRD

	pCurrent = pHead;

	p = (int*)malloc(sizeof(int) * size);
	int *pSaver;
	pSaver = p;
	pHead->data = random = 1 + rand() % 100;
	*p = pHead->data;
	p++;
	for (int j = 0; j < 9; j++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		*p = pCurrent->data;
		p++;
		pCurrent->pNext = NULL;

	}
	pCurrent = pHead;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	p--;
	printf("The last three number are: ");
	for (int j = size; j > (size - 3); j--)
	{
		printf("%i ", *p);
		p--;
	}
	printf("\n");
	system("pause");
	system("cls");

	//Fourth 

	struct Node *pTemp = (struct Node*)malloc(sizeof(struct Node));
	pCurrent = pHead->pNext;
	pHead->data = random = 1 + rand() % 100;
	for (int j = 0; j < 9; j++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		pCurrent->pNext = NULL;

	}
	pCurrent = pHead->pNext;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	printf("What number do you want to add to the linked list: ");
	scanf_s("%i", &size); // I don't want to create another variable, size will be used again.
	printf("\n");
	printf("Which index position do you want to add it to:\n");
	scanf_s("%i", &i);
	pCurrent = pHead;
	if (i <= 9 && i >= 0)
	{
		for (int j = 0; j < i; j++)
		{
			pCurrent = pCurrent->pNext;
		}

		pTemp->pNext = pCurrent->pNext;
		pTemp->data = size;
		pCurrent->pNext = pTemp;
		pCurrent = pHead;
		i = 0;
	}

	else
	{
		printf("\nInvalid number\n");
	}
	i = 0;
	pCurrent = pHead->pNext;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	system("pause");
	system("cls");
	//Fifth
	pCurrent = pHead;
	pHead->data = random = 1 + rand() % 100;
	for (int j = 0; j < 9; j++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		pCurrent->pNext = NULL;
		size++;
	}
	pCurrent = pHead;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	i = 0;
	int nFirstNumber = 0;
	int nSecondNumber = 0;
	int nFirstIndex = 0;
	int nSecondIndex = 0;
	pCurrent = pHead;
	printf("Let's swap two number of the program\n");
	printf("Enter the index of the first number: ");
	scanf_s("%i", &nFirstIndex);
	printf("\nEnter the index of the second number: ");
	scanf_s("%i", &nSecondIndex);
	for (int j = 0; j < nFirstIndex; j++)
	{
		pCurrent = pCurrent->pNext;
	}
	nFirstNumber = pCurrent->data;
	printf("\n FIRST %i\n", nFirstNumber);
	pCurrent = pHead;
	for (int j = 0; j < nSecondIndex; j++)
	{
		pCurrent = pCurrent->pNext;
	}
	nSecondNumber = pCurrent->data;
	printf("\nSECOND %i\n", nSecondNumber);
	pCurrent = pHead;
	for (int j = 0; j < nFirstIndex; j++)
	{
		pCurrent = pCurrent->pNext;
	}
	pCurrent->data = nSecondNumber;
	pCurrent = pHead;
	for (int j = 0; j < nSecondIndex; j++)
	{
		pCurrent = pCurrent->pNext;
	}
	pCurrent->data = nFirstNumber;
	pCurrent = pHead;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	system("pause");
	system("cls");
	//Sixth // AAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH HELP ME 
	
	pCurrent = pHead;
	pHead->data = random = 1 + rand() % 100;
	size = 0;
	for (int j = 0; j < 9; j++)
	{
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		random = 1 + rand() % 100;
		pCurrent->data = random;
		pCurrent->pNext = NULL;
		size++;
	}

	pCurrent = pHead;
	i = 0;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
	printf("\n\n\n");
	pCurrent = pHead;
	struct Node *pSixth = (struct Node*)malloc(sizeof(struct Node));
	struct Node *pToDelete = (struct Node*)malloc(sizeof(struct Node));
	struct Node *pINeedHelp = (struct Node*)malloc(sizeof(struct Node));
	pSixth = pHead;
	pToDelete = pHead;
	pINeedHelp = pHead;
	while (pCurrent != NULL)
	{
		if ((pCurrent->data % 2 ) == 0)
		{
			pINeedHelp = pCurrent->pNext;
			pToDelete = pCurrent;
			free(pToDelete);
			pCurrent = pINeedHelp;
			
			
			

			
		}
		//pasar
		if (pCurrent != pHead)
		{
			pSixth->pNext = pCurrent;
		}
		pCurrent = pCurrent->pNext;
	}
	i = 0;

	pCurrent = pHead;
	while (pCurrent != NULL)
	{

		printf("%i.%i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;

	}
	system("pause");
	system("cls");
	//SEVENTH
	struct cNode *pcStart = (struct cNode*)malloc(sizeof(struct cNode));
	struct cNode *pcCurrent = (struct cNode*)malloc(sizeof(struct cNode));
	random = 97 + rand() % 26;
	pcStart->cData = random;
	pcCurrent = pcStart;
	char *saver = (char*)malloc(sizeof(char) * 5);
	char *saver2 = (char*)malloc(sizeof(char) * 5);
	saver2 = saver;
	*saver = pcStart->cData;
	saver++;
	for (int j = 0; j < 4; j++)
	{
		pcCurrent->pcNext = (struct cNode*)malloc(sizeof(struct cNode));
		pcCurrent = pcCurrent->pcNext;
		random = 97 + rand() % 26;
		pcCurrent->cData = random;
		*saver = pcCurrent->cData;
		pcCurrent->pcNext = NULL;
		saver++;
	}
	i = 0;
	pcCurrent = pcStart;
	while (pcCurrent != NULL)
	{

		printf("%i.%c\n", i, pcCurrent->cData);
		pcCurrent = pcCurrent->pcNext;
		i++;
	}

	pcCurrent = pcStart; 
	for (int j = 0; j < 5; j++)
	{
		saver--;
		
	}
	i = 0;
	for (int j = 0; j < 20; j++)
	{
		printf("\nLOOP %i \n", j);
		saver++;
	pcCurrent->cData = *saver;
	pcCurrent = pcCurrent->pcNext;
	printf("%i.%c\n", i, pcCurrent->cData);
	i++;
	saver++;;
	pcCurrent->cData = *saver;
	pcCurrent = pcCurrent->pcNext;
	printf("%i.%c\n", i, pcCurrent->cData);
	i++;
		saver++;
	pcCurrent->cData = *saver;
	pcCurrent = pcCurrent->pcNext;
	printf("%i.%c\n", i, pcCurrent->cData);
	i++;
	saver++;
	pcCurrent->cData = *saver;
	pcCurrent = pcCurrent->pcNext;
	printf("%i.%c\n", i, pcCurrent->cData);
	i++;
	saver = saver2;
	pcCurrent->cData = *saver;
	printf("%i.%c\n", i, pcCurrent->cData);
	i++;
	pcCurrent = pcStart;

	i = 0;
	for (int h = 0; h <= 4; h++) // RESTART THE VALUES OF SAVER
	{
		*saver = pcCurrent->cData;
		pcCurrent = pcCurrent->pcNext;
		saver++;

	}
	saver = saver2;
	pcCurrent = pcStart;
	}

	
	pcCurrent = pcStart;

	system("pause");
	system("cls");
	//EIGHT
	int input = 0 ;
	printf("Write a number\n");
	scanf_s("%i", &input);
	pCurrent = pHead;
	pHead->data = input;
	do
	{
		printf("Write a number again :\n");
		scanf_s("%i", &input);
		pCurrent->pNext = (struct Node*)malloc(sizeof(struct Node));
		pCurrent = pCurrent->pNext;
		pCurrent->data = input;
		pCurrent->pNext = NULL;
	} while (input != -1);
	pCurrent = pHead;
	i = 0;
	while (pCurrent->data != -1)
	{

		printf("%i) %i\n", i, pCurrent->data);
		pCurrent = pCurrent->pNext;
		i++;
	}
}
