#include <stdio.h>
#include <string.h>
int main(void) {
	char Answer = '\0';
	char Questions[][100] = { { "What is the cube of 2?" },
							{ "What is 1+1?" },
							{ "Who is the president of People's Republic of China?" },
							{ "What is the population of Earth?" } };
	char Options[][100] = { { "A.2\nB.4\nC.6\nD.8" },
						  { "A.1\nB.2\nC.3\nD.4" },
						  { "A.M.Jordan\nB.B.Obama!\nC.Putin\nD.Xi JinPing" },
						  { "A.Around 7 billion\nB.Around 6.5 billion\nC.Around 8 billion\nD.What?" } };
	char Answers[] = { 'D','B','D','C' };
	printf("*** QUIZ GAME ***\n");
	for (int i = 0; i < 4; i++) {
		printf("\n%s", Questions[i]);
		printf("\n%s\n", Options[i]);
		printf("Answer: ");
		scanf("%c", &Answer);
		while (getchar() != '\n');
		if (Answer == Answers[i]) {
			printf("And that is correct answer!\n");
		}
		else {
			printf("Wrong! Answer was %c option\n", Answers[i]);
		}
	}
}