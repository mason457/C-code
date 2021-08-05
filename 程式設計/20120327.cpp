#include<stdio.h>

void swap2(int *a, int *b);

void main()
{
	int a = 5;
	int b = 6;
	swap2(&a, &b);
	printf("a = %d ,b = %d",a,b);
}

void swap2(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(int a,int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

#include<stdio.h>

void getRectInfo(int W, int H, int *a, int *p);

void main()
{
	int a;
	int p;
	getRectInfo(5, 6, &a, &p);
	printf("­±¿n = %d\n", a);
	printf("©Pªø = %d\n", p);
}

void getRectInfo(int W, int H, int *a, int *p)
{
	int tmp = *a;
	*a = W * H;
	*p = 2 * (W + H);
}

#include<stdio.h>

int findmax(int b[], int size);

void main()
{
	int a[] = {1,2,3,4,5};
	int c[] = {15,14,12,11,10,8};
	findmax(a, 5);
	findmax(c, 5);
}

int findmax(int b[], int size)
{
	int max = b[0];
	int min = b[0];
	for(int i = 0; i < size; i++)
	{
		if(b[i] > max)
			max = b[i];
		if(b[i] < min)
			min = b[i];
	}
	printf("%d %d\n", max, min);
	return max;
}
