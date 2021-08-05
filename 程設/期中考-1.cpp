#include<stdio.h>(¥¼§¹¦¨)
int findmax(int stat(),int size);
void main()
{
	int a[] = {1,2,3,4,5,7,7,7,9};
	findmax();
}

void findmax(int stat(),int size)
{
	for(int i = 0 , i<size i++)
	{
		stat[0];

	}
}



#include<stdio.h>
void replaceArray(int a[],int size, int num);
void main()
{
	int arr[10] = {1,2,3,4,0,6,7,8,0,0};
	replaceArray(arr,10,0);
}

void replaceArray(int a[],int size, int num)
{
	for(int i = 0;i < size;i++)
		if(a[i]==num)
			a[i] = -1;
	for(int i = 0; i<size;i++)
		printf("%d\n",a[i]);
}


#include<stdio.h>
void replaceArray(int a[],int size, int num);
void main()
{
	int arr[10] = {1,2,3,4,0,6,7,8,0,0};
	replaceArray(arr,10,0);
}

void replaceArray(int a[],int size, int num)
{
	for(int i = 0;i < size;i++)
		if(a[i]==num)
			a[i] = -1;
	for(int i = 0; i<size;i++)
		printf("%d\n",a[i]);
}


¨ú³Ì¤p¤½­¿¼Æ
#include<stdio.h>
void findlcm(int a,int b);
void main()
{
	findlcm(5,3);
}

void findlcm(int a,int b)
{
	int v=1;
	while(1)
	{
		if(v % a == 0 && v % b == 0)
		{
			printf("%d\n",v);
			break;
		}
		else
		v = v + 1;
	}
}



