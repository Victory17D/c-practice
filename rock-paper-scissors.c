#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
int main(void) {

	// Intro of the game & defining variables
	srand(time(NULL));
	int userChoice, randomChoice;
	printf("=====ROCK PAPER SCISSORS=====\n");

	// Input userChoice
	printf("\nChoose Rock, Paper, Scissors (1, 2, 3): ");
	if (scanf("%d", &userChoice) != 1 || (userChoice < 1 || userChoice > 3)) {
		printf("Invalid input, please try again.\n");
		return 1;
	}
	while (getchar() != '\n');
	userChoice -= 1;
	randomChoice = rand() % 3;
	switch (userChoice) {
		case 0:
			printf("You chose Rock!\n");
			break;
		case 1:
			printf("You chose Paper!\n");
			break;
		case 2:
			printf("You chose Scissors!\n");
			break;
	}
	switch (randomChoice) {
		case 0:
			printf("Computer chose Rock!\n");
			break;
		case 1:
			printf("Computer chose Paper!\n");
			break;
		case 2:
			printf("Computer chose Scissors!\n");
			break;
	}
	if (userChoice == 0 && randomChoice == 2) {
		printf("You win!\n");
	}
	else if (userChoice == 1 && randomChoice == 0) {
		printf("You win!\n");
	}
	else if (userChoice == 2 && randomChoice == 1) {
		printf("You win!\n");
	}
	else if (userChoice == randomChoice) {
		printf("It is a tie!\n");
		printf("Let's go get it! Try again?\n");
	}
	else {
		printf("You lose!\n");
		printf("You wanna try again?\n");
	}
	return 0;
}