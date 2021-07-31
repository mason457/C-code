#include<stdio.h>

int findmax(int b[], int size);

void main()
{
	int a[] = {1,2,3,4,5};
	int c[] = {15,14,12,11,10,8};
	findmax(a, 5);
	findmax(c, 6);
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
