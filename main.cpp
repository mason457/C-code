#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void foo(int a[][3], int row, int col);
void bar(int *p, int row, int col);

void main()
{
	int a[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int b[][4] = {{1,2,3,4}, {5,6,7,8}};

	bar(&a[0][0], 3, 3);
	printf("====================\n");
	bar(&b[0][0], 2, 4);
}

void bar(int *p, int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d", *(p + row * i + j));
		}
		printf("\n");
	}
}

void foo(int a[][3], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}