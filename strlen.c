#include <stdio.h>
#include <string.h>
int main() {
	char str1[100] = "";
	char str2[100] = "";
	printf("Enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = '\0';
	printf("Enter second string: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';
	if (strlen(str1) < strlen(str2)) {
		printf("Str2 is longer than Str1!\n");
	}
	else if (strlen(str1) > strlen(str2)) {
		printf("Str1 is longer than str2!\n");
	}
	else {
		printf("Str1 and Str2 are equally long!\n");
	}
	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
}