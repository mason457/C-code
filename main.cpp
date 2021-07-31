#include<stdio.h>

int add(int a, int b,int c);
void star();

void main()
{
	star();
	printf("hello!!\n");
	star();
	
	add(5,6,9);
	add(6,7,11);
	add(10,12,18);
	int x = 15;
	int y = 20;
	int z = 30;
	add(x,y,z);
	add(18,x,y);
	
	
	int j = add(5,8,9);
	printf("The sum is %d\n",j);
	printf("The sum is %d\n",add(8,11,7));
}

int add(int a, int b,int c)
{
	int d = a + b + c;
	return d;
}

void star()
{
	printf("**********\n");
}