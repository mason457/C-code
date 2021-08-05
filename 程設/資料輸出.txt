#include<stdio.h>
void main()
{
FILE *fp = fopen("d:\\test1.txt", "r");
if(fp == NULL)
{
printf("Cannot open the file\n");
}
else
{
printf("Success\n");
}


}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\test1.txt", "r");
if(fp == NULL)
{
printf("Error\n");
}
else
{
char c = getc(fp);
printf("%c\n", c);
fclose(fp);
}
}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\test1.txt", "r");
if(fp == NULL)
{
printf("Error\n");
}
else
{
char ch;
int charCount = 0;
while((ch = getc(fp))!=EOF)
{
printf("%d %c\n", charCount, ch);
charCount++;
}
fclose(fp);
}
}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\test2.txt", "a");
if(fp == NULL)
printf("Error\n");
else
{
putc('e', fp);
putc('a', fp);
fclose(fp);
}
}


#include<stdio.h>
void main()
{
FILE* fsource = fopen("d:\\test1.txt", "r");
FILE* fdest = fopen("d:\\test3.txt", "w");
if(fsource == NULL || fdest == NULL)
{
printf("Error\n");
}
else
{
char ch;
while((ch = getc(fsource)) != EOF)
{
putc(ch, fdest);
}
fclose(fsource);
fclose(fdest);
}
}


#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\test2.txt", "w");
if(fp == NULL)
printf("Error\n");
else
{
fputs("How are you\n", fp);
fprintf(fp, "%s\n", "Fine, thanks");
fclose(fp);
}
}



#include<stdio.h>
void main()
{
FILE* fp = fopen("d:\\test2.txt", "r");
if(fp == NULL)
printf("Error\n");
else
{
char buf[1000];
while(fgets(buf, 999, fp) != NULL)
{
printf("%s", buf);

}
fclose(fp);
}
}


