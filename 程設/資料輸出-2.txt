#include<stdio.h>
#include<string.h>
void main()
{
FILE* fp = fopen("d:\\test1.txt", "r");
char s[100];
while(fscanf(fp, "%s", s)!=EOF)
{
printf("%s\n", s);

}	
fclose(fp);
}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb1.txt", "wb");
int a = 10;
if(fp == NULL)
{
printf("Error\n");
}
else
{
fwrite(&a, sizeof(int), 1, fp);
}
fclose(fp);
}



#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb.txt", "wb");
int a[5] = {1,2,3,4,5};
if(fp == NULL)
{
printf("Error\n");
}
else
{
fwrite(a, sizeof(int), 5, fp);
}
fclose(fp);
}



#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb1.txt", "rb");
int a;
if(fp == NULL)
{
printf("Error\n");
}
else
{
fread(&a, sizeof(int), 1, fp);
printf("%d\n", a);
}
fclose(fp);
}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb.txt", "rb");
int a[5];
if(fp == NULL)
{
printf("Error\n");
}
else
{
fread(a, sizeof(int), 5, fp);
for(int i = 0; i < 5; i++)
printf("%d\n", a[i]);
}
fclose(fp);
}



#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb.txt", "rb");
int a;
if(fp == NULL)
{
printf("Error\n");
}
else
{
fseek(fp, 2*sizeof(int), SEEK_SET);
fread(&a, sizeof(int), 1, fp);
printf("%d\n", a);
}
fclose(fp);
}



#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\testb.bin", "rb");
if(fp == NULL)
{
printf("Error\n");
}
else
{
int a;
fseek(fp, 3*sizeof(int), SEEK_SET);
fread(&a, sizeof(int), 1, fp);
printf("%d\n", a);
fread(&a, sizeof(int), 1, fp);
printf("%d\n", a);
rewind(fp);  //move the file pointer to the head of the file
fread(&a, sizeof(int), 1, fp);
printf("%d\n", a);
fclose(fp);
}
}
