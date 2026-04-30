#include <stdio.h>
#include <string.h>
int main() {
	char str1[100] = "";
	char str2[100] = "";
	printf("Enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	size_t len1 = strlen(str1);
	if (len1 > 0 && str1[len1 - 1] == '\n') {
		str1[len1 - 1] = '\0';
	}
	printf("Enter second string: ");
	fgets(str2, sizeof(str2), stdin);
	size_t len2 = strlen(str2);
	if (len2 > 0 && str2[len2 - 1] == '\n') {
		str2[len2 - 1] = '\0';
	}
	if (strlen(str1) < strlen(str2)) {
		printf("Str2 is longer than Str1!\n");
	}
	else if (strlen(str1) > strlen(str2)) {
		printf("Str1 is longer than Str2!\n");
	}
	else {
		printf("Str1 and Str2 are equally long!\n");
	}
	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
	return 0;
}