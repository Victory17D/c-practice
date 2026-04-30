#include <stdio.h>
#include <windows.h>
#include <string.h>
int main() {

	//defining variables
	int columns = 0;
	int rows = 0;
	char symbol[3];

	//input symbol
	printf("Please print symbol you want: ");
	fgets(symbol, sizeof(symbol), stdin);
	size_t len = strlen(symbol);
	if (len > 0 && symbol[len - 1] == '\n') {
		symbol[len - 1] = '\0';
	}
	if (strlen(symbol) == 0) {
		printf("No symbol entered, please try again.\n");
		return 1;
	}
	if (strlen(symbol) > 1) {
		printf("Please type only one symbol.\n");
		return 1;
	}
	//input rows
	printf("Enter rows you want: ");
	if (scanf("%d", &rows) != 1 || rows < 0) {
		printf("Invalid input, please try again.\n");
		return 1;
	}
	while (getchar() != '\n');

	//input columns
	printf("Enter columns you want: ");
	if (scanf("%d", &columns) != 1 || columns < 0) {
		printf("Invalid input, please try again.\n");
		return 1;
	}
	while (getchar() != '\n');

	//The main process
	for (int i = rows; i > 0; i--) {
		for (int j = columns; j > 0; j--) {
			printf("%s", symbol);
		}
		printf("\n");
	}
	return 0;
}