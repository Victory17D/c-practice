#include <stdio.h> //creating a calculator
int calculator(void) {
	float number1 = 0.0f;
	float number2 = 0;
	float answer = 0;
	char operator = '\0';

	printf("Enter your first number: ");
	scanf(" %f", &number1);
	if (number1 == 0) {
		printf("You can't divide by zero.");
	}
	printf("Enter your second number: ");
	scanf(" %f", &number2);

	printf("Enter operator you wanna use: ");
	scanf(" %c", &operator);
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
}
int main(void) {
	float number1 = 0.0f;
	float number2 = 0;
	float answer = 0;
	char operator = '\0';

	printf("Enter your first number: ");
	scanf(" %f", &number1);
	printf("Enter operator you wanna use (+ - * /): ");
	scanf(" %c", &operator);
	printf("Enter your second number: ");
	scanf(" %f", &number2);
	if (number2 == 0 && operator == '/') {
		printf("You can't divide by zero.");
		calculator;
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