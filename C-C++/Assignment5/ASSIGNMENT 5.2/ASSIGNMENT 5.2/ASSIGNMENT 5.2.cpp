// ASSIGNMENT 5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
struct CountrytInfo
{
	char name[20];
	int population;

};
struct Instructor
{
	char firstname[10];
	char lastname[10];
	int yearsteaching;
	char gender[10];

};
struct Fighter
{
	char name[20];
	int hp;
	int attackpower;
};
struct Accounts
{
	char username[10];
	char password[10];
};
struct Students
{
	char namestudent[10];
	float grades[3];
};
int main()
{
	//first
	CountrytInfo country1;
	CountrytInfo country2;
	CountrytInfo country3;
	strcpy_s(country1.name, "Canada");
	strcpy_s(country2.name, "USA");
	strcpy_s(country3.name, "Japan");
	country1.population = 37000000;
	country2.population = 395000000;
	country3.population = 123456789;
	printf("%s  Population: %i. \n", country1.name, country1.population);
	printf("%s  Population: %i. \n", country2.name, country2.population);
	printf("%s  Population: %i. \n", country3.name, country3.population);
	//second
	char gendermale[5] = { "male" };
	char genderfemale[7] = { "female" };
	Instructor instructor1;
	Instructor instructor2;
	Instructor instructor3;
	strcpy_s(instructor1.firstname, "Donald");
	strcpy_s(instructor2.firstname, "Hilary");
	strcpy_s(instructor3.firstname, "Kanye");
	strcpy_s(instructor1.lastname, "Trump");
	strcpy_s(instructor2.lastname, "Clinton");
	strcpy_s(instructor3.lastname, "West");
	instructor1.yearsteaching = 2;
	instructor2.yearsteaching = 50;
	instructor3.yearsteaching = 9;
	strcpy_s(instructor1.gender, "male");
	strcpy_s(instructor2.gender, "female");
	strcpy_s(instructor3.gender, "male");
	if (strcmp(instructor1.gender,gendermale) == 0)
	{
		printf("Hello Mr. %s %s! Thank you for %i years of work.\n", instructor1.firstname, instructor1.lastname, instructor1.yearsteaching);
	}
	else
	{
		printf("Hello Ms. %s %s! Thank you for %i years of work.\n", instructor1.firstname, instructor1.lastname, instructor1.yearsteaching);
	}
	if (strcmp(instructor2.gender, gendermale) == 0)
	{
		printf("Hello Mr. %s %s! Thank you for %i years of work.\n", instructor2.firstname, instructor2.lastname, instructor2.yearsteaching);
	}
	else
	{
		printf("Hello Ms. %s %s! Thank you for %i years of work.\n", instructor2.firstname, instructor2.lastname, instructor2.yearsteaching);
	}
	if (strcmp(instructor3.gender, gendermale) == 0)
	{
		printf("Hello Mr. %s %s! Thank you for %i years of work.\n", instructor3.firstname, instructor3.lastname, instructor3.yearsteaching);
	}
	else
	{
		printf("Hello Ms. %s %s! Thank you for %i years of work.\n", instructor3.firstname, instructor3.lastname, instructor3.yearsteaching);
	}
	//third
	Fighter fighter1;
	Fighter fighter2;
	strcpy_s(fighter1.name, "Cat");
	strcpy_s(fighter2.name, "Dog");
	fighter1.hp = 40;
	fighter2.hp = 30;
	fighter1.attackpower = 9;
	fighter2.attackpower = 17;
	do
	{

		fighter1.hp -= fighter2.attackpower;
		fighter2.hp -= fighter1.attackpower;
		if (fighter1.hp <= 0)
		{
			fighter1.hp = 0;
		}
		else if (fighter2.hp <= 0)
		{
			fighter2.hp = 0;
		}
		printf("%s's HP is now %i\n", fighter1.name, fighter1.hp);
		printf("%s's HP is now %i\n", fighter2.name, fighter2.hp);

	} while (fighter1.hp > 0 && fighter2.hp > 0);
	if (fighter1.hp == 0 && fighter2.hp == 0)
	{
		printf("This is a tie! \n");
	}
	else if (fighter1.hp == 0)
	{
		printf("The Dog wins! \n");
	}
	else if (fighter2.hp == 0)
	{
		printf("The Cat wins! \n");
	}
	
	//Fourth
	bool open = false;
	int saver123 = 0;
	char usernamelogo[10];
	char passwordlogo[10];
	Accounts username[3];
	strcpy_s(username[0].username, "admin");
	strcpy_s(username[1].username, "test");
	strcpy_s(username[2].username, "bob");
	strcpy_s(username[0].password, "pa55word");
	strcpy_s(username[1].password, "idontknow");
	strcpy_s(username[2].password, "iforgot");
	for (int i = 0; i < 2; i++)
	{
		printf("Enter your login username: ");
		scanf_s("%s", usernamelogo, 10);
		for (int j = 0; j < 3; j++)
		{
			if (strcmp(usernamelogo, username[j].username) == 0)
			{
				printf("\n The username exists. \n");
				open = true;
				if (open == true)
				{
					saver123 = j;
					j = 4;
				}
			}
		}
		if (open == true)
		{
			printf("Write down your password:");
			scanf_s("%s", passwordlogo, 10);
			open = false;
			for (int p = 0; p < 3; p++)
			{
				if (strcmp(passwordlogo, username[saver123].password) == 0)
				{
					printf("\nLogin successful! \n");
					p = 3;
					i = 3;
				}
				else
				{
					printf("Incorrect password! Access denied.\n");
					p = 4;
					i = 3;
				}
			}

		}
		else
		{
			printf("You are not registered \n");
			i = 3;
		}
	}
	
	//Fifth
	Students student1;
	Students student2;
	float average1 = 0;
	float average2 = 0;
	printf("Enter Student 1's name:");
	scanf_s("%s", student1.namestudent, 10);
	printf("\n Enter their Quiz 1 score: ");
	scanf_s("%f", &student1.grades[0]);
	printf("n\ Enter their Quiz 2 score: ");
	scanf_s("%f", &student1.grades[1]);
	printf("\n Enter their Quiz 3 score: ");
	scanf_s("%f", &student1.grades[2]);
	printf("Enter Student 2's name:");
	scanf_s("%s", student2.namestudent, 10);
	printf("\n Enter their Quiz 1 score: ");
	scanf_s("%f", &student2.grades[0]);
	printf("n\ Enter their Quiz 2 score: ");
	scanf_s("%f", &student2.grades[1]);
	printf("\n Enter their Quiz 3 score: ");
	scanf_s("%f", &student2.grades[2]);
	for (int i = 0; i < 3; i++)
	{
		average1 += student1.grades[i];
		average2 += student2.grades[i];
	}
	average1 /= 3;
	average2 /= 3;
	printf("%s's Quiz Average is %.2f.", student1.namestudent, average1);
	if (average1 >= 68)
	{
		printf(" They passed");
	}
	else
	{
		printf(" They failed");
	}
	printf("\n%s's Quiz Average is %.2f.", student2.namestudent, average2);
	if (average2 >= 68)
	{
		printf(" They passed");
	}
	else
	{
		printf(" They failed");
	}
}
