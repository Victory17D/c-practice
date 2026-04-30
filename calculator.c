#include <stdio.h> 

//creating a calculator
int main(void) {
	float number1 = 0.0f;
	float number2 = 0;
	float answer = 0;
	char operator = '\0';

	printf("Enter your first number: ");
	if (scanf(" %f", &number1) != 1) {
		printf("Invalid input, please try again.\n");
		return 1;
	}
	char op;
	printf("Enter operator you wanna use (+ - * /): ");
	if(scanf(" %c", &op) != 1 || (op != '+' && op != '-' && op != '*' && op != '/')) {
		printf("Invalid input, please try again.\n");
		return 1;
	}
	operator = op;
	printf("Enter your second number: ");
	if (scanf("%f", &number2) != 1) {
		printf("Invalid input, please try again");
		return 1;
	}
	if (number2 == 0 && operator == '/') {
		printf("You can't divide by zero.");
		return 1;
	}
	if (operator == '+') {
		answer = number1 + number2;
		printf("%f", answer);
	}
	else if (operator == '-') {
		answer = number1 - number2;
		printf("%f", answer);
	}
	else if (operator == '*') {
		answer = number1 * number2;
		printf("%f", answer);
	}
	else if (operator == '/') {
		answer = number1 / number2;
		printf("%f", answer);
	}
	return 0;
}