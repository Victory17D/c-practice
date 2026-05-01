#include <stdio.h> 
#include <windows.h>

void mainChoice(int choice, float *balance);
void Menu(void);

int main() {
	//Declaring variables
	float balance = 1000.0f;
	int choice;
	Menu();
	
	// Choice input

	do {
		printf("\nEnter your choice: ");
		if (scanf("%d", &choice) != 1 || (choice < 1 || choice > 4)) {
			while (getchar() != '\n');
			printf("Invalid input, please try again.\n");
			return 1;
		}
		mainChoice(choice, &balance);
	} while (choice != 4);
	return 0;
}
void mainChoice(int choice, float *balance) {
	float deposit;
	float withdraw;
	// Choice Check

	if (choice == 1) {
		printf("\nYour balance: %.2f\n", *balance);
		Sleep(1000);
		Menu();
	}
	if (choice == 2) {
		printf("Enter amount you want to deposit: ");
		scanf("%f", &deposit);
		*balance += deposit;
		Sleep(1000);
		printf("Successfully deposited %.2f!\n", deposit);
		printf("Your balance: %.2f\n", *balance);
		Menu();
	}
	if (choice == 3) {
		printf("Enter amount to withdraw: ");
		scanf("%f", &withdraw);
		*balance -= withdraw;
		Sleep(1000);
		printf("Successfully withdrew %.2f\n", withdraw);
		printf("Your balance: %.2f\n", *balance);
		Menu();
	}
}
void Menu(void) {
	printf("\nSelect an option:\n");
	printf("\n1. Check Balance");
	printf("\n2. Deposit Money");
	printf("\n3. Withdraw Money");
	printf("\n4. Exit");
}