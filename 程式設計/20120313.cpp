#include<stdio.h>

int abs(int input);
int iTriple(int input);

void main()
{
	printf("%d\n",iTriple(-6));
	printf("%d\n",iTriple(6));
	int w = -33;
	printf("%d\n",iTriple(w));
}

int iTriple(int input)
{
	int value = abs(input);
	return value* value *value;
}

int abs(int input)
{
	if(input < 0)
		return -1* input;
	else
		return input;
}

#include<stdio.h>     //遞迴的階層

int fracX(int input);

void main()
{
	printf("%d\n",fracX(5));
}

int fracX(int n)
{
	if(n == 1)         //終止條件
		return 1;
	else
		return n * fracX(n - 1);
}

#include<stdio.h>  X的N次方

int power(int x,int n);

void main()
{
	printf("%d\n",power(5,3));
}

int power(int x, int n)
{
	if(n == 0)         //終止條件
		return 1;
	else
		return x * power(x,n-1);
}

#include<stdio.h>  //費伯納數列

int fib(int n);

void main()
{
	printf("%d\n",fib(10));
}

int fib(int n)
{
	if(n == 1 || n==2)         //終止條件
		return 1;
	else
		return fib(n -1)+fib(n - 2);
}