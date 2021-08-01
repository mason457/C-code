#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fun(int n);
int *count;
void main()
{
	/*printf("%d\n",10);
	printf("%3d\n",10);
	printf("%.3d\n",10);
	printf("%0.3d\n",10);
	printf("%3.3d\n",10);
	printf("%3.5d\n",10);
	system ("PAUSE");*/
	/*int a = 0;
	int sum = 0;
	for(int i = 0;i <=10;i++)
	{
		sum +=i;
	}
	scanf("%d",&a);
	printf("%d\n",a);
	printf("%d\n",sum);*/
	struct list
	{
		char name[10];
		int age;
		char add[50];
	}stu;
	printf("輸入名稱:");
	scanf("%s",&stu.name);
	printf("輸入年齡:");
	scanf("%d",&stu.age);
	printf("輸入位置:");
	scanf("%s",&stu.add);
	printf("名稱:%s\n",stu.name);
	printf("年齡:%d\n",stu.age);
	printf("位置:%s\n",stu.add);
	system ("PAUSE");
	
	/*int sum = 0;
	for(int i = 1;i<= 9;i++)
	{
		for(int j = 1;j<= 9;j++)
		{
			printf("%3d",i*j);
			count++;
		}
		printf("\n");
	}*/
	//printf("count:%d\n",count);
	system ("PAUSE");
	/*int a = 0;
	printf("f:");
	scanf("%d",&a);
	printf("%d\n",fun(a));
	printf("%d\n",count);
	system ("PAUSE");*/
}
int fun(int n)
{
	if(n == 0)
		return 0;
	if(n == 2 ||n == 1)
		return 1;
	if(n > 2)
		return fun(n-1)+fun(n-2);
}
