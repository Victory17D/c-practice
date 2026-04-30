#include <stdio.h>
#include <string.h>
#define MAX_ITEM_LEN 100
int main(void) {

	// Declaring Variables
	char item[MAX_ITEM_LEN] = "";
	int quantity = 0;
	float price = 0.0f;
	float total = 0.0f;

	// Entering inputs
	printf("Enter item name: ");
	fgets(item, sizeof(item), stdin);

	// Removing the newline character if it exists
	size_t len = strlen(item);
	if (len > 0 && item[len - 1] == '\n') {
		item[len - 1] = '\0';
	}

	// Checking if the length of name is too long or not
	if (strlen(item) > MAX_ITEM_LEN - 1) {
		printf("Length of item name is too long!\n");
		return 1;
	}

	// Checking if user typed something or not
	else if (strlen(item) == 0) {
		printf("Item name is missed.\n");
		return 1;
	}

	// Entering data for quantity and price (also input validation check)
	printf("Enter quantity: ");
	if (scanf(" %d", &quantity) != 1 || quantity < 0) {
		printf("Invalid input, please try again!\n");
		return 1;
	}
	while (getchar() != '\n');
	

	printf("Enter price: ");
	if (scanf(" %f", &price) != 1 || price < 0) {
		printf("Invalid input, please try again!\n");
		return 1;
	}
	while (getchar() != '\n');

	// Calculating total
	total = quantity * price;

	// Printing the receipt
	printf("====== Receipt ======\n");
	if (quantity > 1) {
		printf("Item: %ss\n", item);
	}
	else {
		printf("Item: %s\n", item);
	}
	printf("Quantity: %d\n", quantity);
	printf("Price for each: $%.2f\n", price);
	printf("Total is $%.2f\n", total);
	return 0;
}