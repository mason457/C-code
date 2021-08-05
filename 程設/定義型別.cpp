#include<stdio.h>
struct Student
{
int SID;
int height;
int hp;
};
void main()
{
//Student John;
struct Student John;
John.SID = 1234;
John.height = 178;
John.hp = 100;	
//...
John.hp-=80;
printf("The HP of John is: %d\n", John.hp);
}


#include<stdio.h>
#include<string.h>
struct Student
{
int SID;
int height;
int hp;
char name[100];
};
void main()
{
//Initial the member of John
struct Student John = {15, 173, 100, "John M. Keven"};
//Initial the member of Mary
struct Student Mary = {18, 165, 100, "Mary C. Eve"};

John.hp-=80;
Mary.hp += 70;
printf("The HP of John is: %d\n", John.hp);
printf("The HP of Mary is: %d\n", Mary.hp);
printf("The name of Mary is:%s\n", Mary.name);
strcpy(Mary.name, "Mary C. M. Eve");
printf(
