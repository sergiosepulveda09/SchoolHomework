

#include "pch.h"
#include <iostream>

int main()
{
		int health = 100;
		int power;
		char hit = 'c';
		printf("\tHow strong are you(power)?:  ");
		scanf_s("%i", &power);
		printf("\tWrite down 'h' if you want to hit the player. \n");
		scanf_s(" %c", &hit);
		while (health > 0 && hit == 'h')
		{

			health = health - power;
			printf("\tYour HP is: %i", health);
			printf("\n\t Wanna hit it again?. \n");
			scanf_s(" %c", &hit);


		}
		if (health == 0)
			printf("\tYOUR ENEMY DIED\n");
		system("pause");

		system("cls");

		for (int triangularNumber, counter = 1; counter > 0 && counter <= 12; counter++)
		{
			triangularNumber = counter * (counter + 1) / 2;
			printf("\t%i Triangular Number is: %i\n ", counter, triangularNumber);
		}
		system("pause");
		system("cls");

		int sum = 0;
		int number = 0;
		int newnumber = 0;
		printf("\tWrite down number and will show you the sum (write -1 if you want to stop)\n");
		scanf_s("%i", &number);
		while (newnumber != -1 )
		{
			sum = number + newnumber;
			printf("\tWrite another number:\n");
			scanf_s("%i", &newnumber);
			number = sum;
		}
		printf("\t\nThe sum of all numbers entered is: %i \n", sum);
		system("pause");
		system("cls");

		int number1, result;
		result = 0;
		printf("Write a number, I'll tell you if it is a prime or a composite number: \n");
		scanf_s("%i", &number1);
		for (int counter = 2; counter <= number1; counter++)
		{

			if (number1 % counter == 0)
			{
				result++;
			
			}

		}
	
		if (result > 1) {
			printf("That is compose number\n");
	
		}
		else {
			printf("This is a prime number \n");
		}
	system("pause");
	system("cls");
		int mynumber, guess, counter;
		counter = 1;
		mynumber = 18;
		printf("Guess my number. You have 10 lifes! \n");
		while (counter <= 10)
		{
			printf("What is my number?\n");
			scanf_s("%i", &guess);
			if (guess == mynumber)
			{
				printf("you have won, you used %i lifes! \n", counter);
				counter = 11;
			}
			else if (guess != mynumber)
			{
				if (guess > mynumber)
				{
					printf("you guessed is too high!\n");
				}
				else {
					printf("You guessed too low!\n");
				}
				printf("Keep trying, you have used %i lifes!/n", counter);
			}
			counter++;
		}
		system("pause");
		system("cls");

		int firstplayer, secondplayer;
		int counterone = 0;
		int	countertwo = 0;
		char playornot;
		printf("The Rock, Scissors, Paper, Lizard and Spock Game\n");
		printf("1. for Rock\n");
		printf("2. for Scissors\n");
		printf("3. for Paper\n");
		printf("4. for Lizard\n");
		printf("5. for Spock\n");
		printf("LET'S PLAY!\n");
		do
		{

			printf("Player 1, Choose your move :");
			scanf_s("%i", &firstplayer);
			printf("\nPlayer 2, Choose your move:");
			scanf_s("%i", &secondplayer);
			if (firstplayer == 1 && secondplayer == 1) {
				printf("PLAYER 1: ROCK    PLAYER 2: ROCK  \n");
				printf("TIE!\n");
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 1 && secondplayer == 2) {
				printf("PLAYER 1: ROCK    PLAYER 2: SCISSORS  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 1 && secondplayer == 3) {
				printf("PLAYER 1: ROCK    PLAYER 2: PAPER  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 1 && secondplayer == 4) {
				printf("PLAYER 1: ROCK    PLAYER 2: LIZARD  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 1 && secondplayer == 5) {
				printf("PLAYER 1: ROCK    PLAYER 2: SPOCK  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
			}
			else if (firstplayer == 2 && secondplayer == 1) {
				printf("PLAYER 1: SCISSORS    PLAYER 2: ROCK  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 2 && secondplayer == 2) {
				printf("PLAYER 1: SCISSORS    PLAYER 2: SCISSORS  \n");
				printf("TIE!\n");
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 2 && secondplayer == 3) {
				printf("PLAYER 1: SCISSORS    PLAYER 2: PAPER  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
			}
			else if (firstplayer == 2 && secondplayer == 4) {
				printf("PLAYER 1: SCISSORS    PLAYER 2: LIZARD  \n");
				printf("Player 1  WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 2 && secondplayer == 5) {
				printf("PLAYER 1: SCISSORS    PLAYER 2: SPOCK  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 3 && secondplayer == 1) {
				printf("PLAYER 1: PAPER    PLAYER 2: ROCK  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 3 && secondplayer == 2) {
				printf("PLAYER 1: PAPER    PLAYER 2: SCISSORS  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 3 && secondplayer == 3) {
				printf("PLAYER 1: PAPER    PLAYER 2: PAPER \n");
				printf("TIE!\n");
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 3 && secondplayer == 4) {
				printf("PLAYER 1: PAPER    PLAYER 2: LIZARD  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 3 && secondplayer == 5) {
				printf("PLAYER 1: PAPER    PLAYER 2: SPOCK  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 4 && secondplayer == 1) {
				printf("PLAYER 1: LIZARD    PLAYER 2: ROCK  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 4 && secondplayer == 2) {
				printf("PLAYER 1: LIZARD    PLAYER 2: SCISSORS  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 4 && secondplayer == 3) {
				printf("PLAYER 1: LIZARD    PLAYER 2: PAPER  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 4 && secondplayer == 4) {
				printf("PLAYER 1: LIZARD    PLAYER 2: LIZARD  \n");
				printf("TIE!\n");
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 4 && secondplayer == 5) {
				printf("PLAYER 1: LIZARD    PLAYER 2: SPOCK  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 5 && secondplayer == 1) {
				printf("PLAYER 1: SPOCK    PLAYER 2: ROCK  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 5 && secondplayer == 2) {
				printf("PLAYER 1: SPOCK    PLAYER 2: SCISSORS  \n");
				printf("Player 1 WINS\n");
				counterone++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 5 && secondplayer == 3) {
				printf("PLAYER 1: SPOCK    PLAYER 2: PAPER  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 5 && secondplayer == 4) {
				printf("PLAYER 1: SPOCK    PLAYER 2: LIZARD  \n");
				printf("Player 2 WINS\n");
				countertwo++;
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else if (firstplayer == 5 && secondplayer == 5) {
				printf("PLAYER 1: SPOCK    PLAYER 2: SPOCK  \n");
				printf("TIE!\n");
				printf("Score is now %i - %i \n", counterone, countertwo);
				firstplayer = 0;
				secondplayer = 0;
			}
			else {
				printf("\nPlease write any of the numbers listed above\n");

			}
			printf("Want to play again? Y o y = yes    any other letter: no. \n");
			scanf_s(" %c", &playornot);

		} while (playornot == 'y' || playornot == 'Y');
		system("pause");
		system("cls");

		int basenumber, exponent, counterexp, resultexp;
		counterexp = 1;
		printf("The base\n");
		scanf_s("%i", &basenumber);
		printf("The exponent\n");
		scanf_s("%i", &exponent);
		resultexp = basenumber;
		if (exponent == 0)
		{
			resultexp = 1;
		}
		else if (exponent == 1)
		{
			resultexp = basenumber;
		}

		else
		{
			for (counterexp; counterexp < exponent; counterexp++)
			{
				resultexp = resultexp * basenumber;

			}
		}
		printf("%i raised to the power of %i is %i \n", basenumber, exponent, resultexp);

		system("pause");
		system("cls");

		int numberdigit = 0;
		int counterdigit = 0;
		printf("Write your number: \n");
		scanf_s("%i", &numberdigit);
		while (number > 0)
		{
			numberdigit = numberdigit / 10;
			counterdigit++;
		}
		printf("Your number has %i digits", counterdigit);

		system("pause");
		system("cls");
}
 