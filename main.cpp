
#include<stdio.h>

void swap(int a, int b);

void main()
{
	int a = 5;
	int b = 6;
	swap(a , b);
	
}

void swap(int a,int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	printf("a = %d\nb = %d",a,b);
}