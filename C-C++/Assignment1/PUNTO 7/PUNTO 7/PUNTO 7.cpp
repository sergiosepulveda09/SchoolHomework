#include "pch.h"
#include <iostream>

int main()
{
	int firstplayer, secondplayer;
	printf("The Rock, Scissors, Paper, Lizard and Spock Game\n");
	printf("1. for Rock\n");
	printf("2. for Scissors\n");
	printf("3. for Paper\n");
	printf("4. for Lizard\n");
	printf("5. for Spock\n");
	printf("LET'S PLAY!\n");
	printf("Player 1, Choose your move :");
	scanf_s("%i", &firstplayer);
	printf("\nPlayer 2, Choose your move:");
	scanf_s("%i", &secondplayer);
	if (firstplayer == 1 && secondplayer == 1) {
		printf("PLAYER 1: ROCK    PLAYER 2: ROCK  \n");
		printf("TIE!");
	}
	else if (firstplayer == 1 && secondplayer == 2) {
		printf("PLAYER 1: ROCK    PLAYER 2: SCISSORS  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 1 && secondplayer == 3) {
		printf("PLAYER 1: ROCK    PLAYER 2: PAPER  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 1 && secondplayer == 4) {
		printf("PLAYER 1: ROCK    PLAYER 2: LIZARD  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 1 && secondplayer == 5) {
		printf("PLAYER 1: ROCK    PLAYER 2: SPOCK  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 2 && secondplayer == 1) {
		printf("PLAYER 1: SCISSORS    PLAYER 2: ROCK  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 2 && secondplayer == 2) {
		printf("PLAYER 1: SCISSORS    PLAYER 2: SCISSORS  \n");
		printf("TIE!");
	}
	else if (firstplayer == 2 && secondplayer == 3) {
		printf("PLAYER 1: SCISSORS    PLAYER 2: PAPER  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 2 && secondplayer == 4) {
		printf("PLAYER 1: SCISSORS    PLAYER 2: LIZARD  \n");
		printf("Player 1  WINS");
	}
	else if (firstplayer == 2 && secondplayer == 5) {
		printf("PLAYER 1: SCISSORS    PLAYER 2: SPOCK  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 3 && secondplayer == 1) {
		printf("PLAYER 1: PAPER    PLAYER 2: ROCK  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 3 && secondplayer == 2) {
		printf("PLAYER 1: PAPER    PLAYER 2: SCISSORS  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 3 && secondplayer == 3) {
		printf("PLAYER 1: PAPER    PLAYER 2: PAPER \n");
		printf("TIE!");
	}
	else if (firstplayer == 3 && secondplayer == 4) {
		printf("PLAYER 1: PAPER    PLAYER 2: LIZARD  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 3 && secondplayer == 5) {
		printf("PLAYER 1: PAPER    PLAYER 2: SPOCK  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 4 && secondplayer == 1) {
		printf("PLAYER 1: LIZARD    PLAYER 2: ROCK  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 4 && secondplayer == 2) {
		printf("PLAYER 1: LIZARD    PLAYER 2: SCISSORS  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 4 && secondplayer == 3) {
		printf("PLAYER 1: LIZARD    PLAYER 2: PAPER  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 4 && secondplayer == 4) {
		printf("PLAYER 1: LIZARD    PLAYER 2: LIZARD  \n");
		printf("TIE!");
	}
	else if (firstplayer == 4 && secondplayer == 5) {
		printf("PLAYER 1: LIZARD    PLAYER 2: SPOCK  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 5 && secondplayer == 1) {
		printf("PLAYER 1: SPOCK    PLAYER 2: ROCK  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 5 && secondplayer == 2) {
		printf("PLAYER 1: SPOCK    PLAYER 2: SCISSORS  \n");
		printf("Player 1 WINS");
	}
	else if (firstplayer == 5 && secondplayer == 3) {
		printf("PLAYER 1: SPOCK    PLAYER 2: PAPER  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 5 && secondplayer == 4) {
		printf("PLAYER 1: SPOCK    PLAYER 2: LIZARD  \n");
		printf("Player 2 WINS");
	}
	else if (firstplayer == 5 && secondplayer == 5) {
		printf("PLAYER 1: SPOCK    PLAYER 2: SPOCK  \n");
		printf("TIE!");
	}
	else {
		printf("\nPlease write any of the numbers listed above");
	}
	return 0;
}