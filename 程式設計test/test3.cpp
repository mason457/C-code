#include <stdio.h>
#include <stdlib.h>
main()
{
	int name[9];
	float age;

	printf("What is your name? >");
	scanf("%s", &name);
	printf("How old are you? >");
	scanf("%f", &age);
	printf("\nHello, %s ", name);
	printf("\nYou are %f years old.", age);
    system("pause");
}
