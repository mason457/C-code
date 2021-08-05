#include<stdio.h>
void main()
{
	int a = 5;
	int *p;
	int **pp;

	p = &a;
	pp = &p;

	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	printf("a = %d\n",**pp);
}



#include<stdio.h>
void getmax(int a[],int size, int *pmax);
void main()
{
	int a[] = {1,2,3,4,5};
	int max;
	getmax(a,5,&max);
	printf("max = %d\n",max);
}

void getmax(int a[],int size, int *pmax)
{
	int vmax = a[0];
	for(int i = 1;i < size; i++)
	{
		if(a[i]>vmax)
			vmax = a[i];
	}
	*pmax = vmax;
}





#include<stdio.h>
void getmax(int a[],int size, int *pmax);
void getmaxp(int a[],int size, int **pmax);
void main()
{
	int a[] = {1,2,7,4,5};
	int *p = NULL;
	getmaxp(a,5,&p);
	printf("max = %d\n",*p);
}

void getmaxp(int a[],int size, int **pmax)
{
	int vmax = a[0];
	int index = 0;
	for(int i = 1; i<size;i++)
	{
		if(a[i]>vmax)
		{
			vmax = a[i];
			index= i;
		}
	}
	*pmax= &a[index];
}

void getmax(int a[],int size, int *pmax)
{
	int vmax = a[0];
	for(int i = 1;i < size; i++)
	{
		if(a[i]>vmax)
			vmax = a[i];
	}
	*pmax = vmax;
}



