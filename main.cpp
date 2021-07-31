#include<stdio.h>
#include<stdlib.h>

int add(int a, int b,int c);
void star();

void main()
{
	int *i;
	printf("請輸入符號:");
	scanf("%d",&i);
	printf("%c%c%c%c%c\n",i,i,i,i,i);
	printf(" %c%c%c \n",i,i,i);
	printf("  %c  \n",i);
	printf(" %c%c%c \n",i,i,i);
	printf("%c%c%c%c%c\n",i,i,i,i,i);
}

void star()
{
	printf("**********\n");
}