#include<stdio.h>
#include<string.h>
struct student
{
int age;
int sid;
char name[11];
};
typedef struct student STUDENT;
void main()
{
struct student Peter = {17, 12345, "Peter"};
struct student PeterClone;
STUDENT Mary;//struct student Mary;
PeterClone = Peter;
printf("Name:%s\nAge:%d\n", PeterClone.name, PeterClone.age);
Mary = Peter;
printf("Name:%s\nAge:%d\n", Mary.name, Mary.age);
}



#include<stdio.h>
struct date
{
int Y;
int M;
int D;
};
typedef struct date DATE;
struct student
{
int sid;
char name[20];
DATE BDay;
};
typedef struct student STUDENT;
void main()
{
STUDENT Peter = {123, "Peter", {1990, 6, 18}};
printf("Name:%s\n", Peter.name);
printf("BDay:%d/%d/%d\n", Peter.BDay.Y, Peter.BDay.M, Peter.BDay.D);
}



#include<stdio.h>
#include<string.h>
struct student
{
int sid;
char name[20];
};
typedef struct student STUDENT;
void main()
{
STUDENT s[10];
s[0].sid = 123;
strcpy(s[0].name, "Peter");
printf("Name:%s, ID:%d\n", s[0].name, s[0].sid);
gets(s[1].name);
scanf("%d", &s[1].sid);
printf("Name:%s, ID:%d\n", s[1].name, s[1].sid);	

}



#include<stdio.h>
#include<string.h>
struct student
{
int sid;
char name[20];
};
typedef struct student STUDENT;
void main()
{
STUDENT Peter = {123, "Peter"};
STUDENT *ptr = &Peter;
ptr->sid = 456;
printf("Name:%s, ID:%d\n", ptr->name, ptr->sid);
printf("Name:%s, ID:%d\n", Peter.name, Peter.sid);
}


#include<stdio.h>
#include<string.h>
struct student
{
int sid;
char name[20];
};
typedef struct student STUDENT;
void display_value(STUDENT aStu);
void display_address(STUDENT* aStu);
void main()
{
STUDENT Peter = {123, "Peter"};
display_value(Peter);
printf("In Main(), Peter.sid = %d\n", Peter.sid);
display_address(&Peter);
printf("In Main(), Peter.sid = %d\n", Peter.sid);
}

void display_value(STUDENT aStu)
{
printf("Name is %s\n", aStu.name);
printf("ID is %d\n", aStu.sid);
aStu.sid = 456;
}
void display_address(STUDENT* aStu)
{
printf("Name is %s\n", aStu->name);
printf("ID is %d\n", aStu->sid);
aStu->sid = 789;
}




#include<stdio.h>
#include<stdlib.h>
void main()
{
int* ptr = (int*)malloc(sizeof(int));
*ptr = 15;
printf("The integer that I allocate is %d\n", *ptr);
free(ptr);
int size;
scanf("%d", &size);
int *ptrA = (int*)malloc(sizeof(int) * size);

for(int i = 0; i < size; i++)
{
ptrA[i] = i*2;
}
free(ptrA);

}


#include<stdio.h>
#include<stdlib.h>
void main()
{
int** arr;
arr = (int**)malloc(5*sizeof(int*));

for(int i=0; i<5; i++)
{
arr[i] = (int*)malloc(5*sizeof(int));
}

for(int i = 0; i < 5; i++)
{
for(int j = 0; j < 5; j++)
{
arr[i][j] = i * j;
}
}

for(int i = 0; i < 5; i++)
{
for(int j = 0; j < 5; j++)
{
printf("%d, ", arr[i][j]);
}
printf("\n");
}

for(int i = 0; i < 5; i++)
free(arr[i]);
free(arr);
}

