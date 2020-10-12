#include <stdio.h>

int main(void)
{
	char name[50];
	int age;

	printf("What's your name? ");
	scanf("%s", name);

	printf("How old are you? ");
	scanf("%d", &age);

	printf("Hello, %s! You are %d years old\n", name, age);

	return 0;
}
