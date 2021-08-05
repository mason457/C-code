#include<stdio.h>

void foo();
int c = 10;

void main()
{
	int a = 9;
	printf("a : %d\n", a);
	foo();
	printf("%d\n", c);
}
void foo()
{
	int a = 7;
	printf("a : %d\n", a);
	printf("%d\n", c);
}

#include<stdio.h>

void main()
{
	int x = 10;
	int *p = &x;//int *p;
	            //p = &x;

	printf("%d\n", x);
	printf("%d\n", &x);
	printf("%d\n", p);
	printf("%d\n", *p);

	x = x + 1; //x++; x+=1;
	printf("%d\n", x);
	*p = *p + 1;
	printf("%d\n", *p);
}

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
}