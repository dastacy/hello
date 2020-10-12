#include <stdio.h>

int main(void)
{
	char name[100];
	char color[100];
	int age;

	printf("What's your name? ");
	scanf("%s", name);

	printf("How old are you? ");
	scanf("%d", &age);

	printf("What's your favorite color? ");
	scanf("%s", color);

	printf("Hello, %s! You are %d years old, and your favorite color is %s.\n", name, age, color);

	return 0;
}
