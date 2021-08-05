輸出字串
#include<stdio.h>
void main()
{
	char str[] = {'H','e','l','l','o','\0'};
	char str2[] = "Hello";
	char str3[100];
	printf("%s\n",str);
	printf("%s\n",str2);
	//scanf("%s\n",str3);
	gets(str3);
	puts(str3);
	//printf("%s\n",str3);
}


走訪字串
#include<stdio.h>
void main()
{
	char str[] = "hi";
	int i = 0;
	while(str[i] != '\0')
	{
		printf("%c\n",str[i]);
		i++;
	}
	for(int j = 0; str[j] != '\0'; j++)
	{
		printf("%c\n",str[j]);
	}
}


多幾個字元字數
#include<stdio.h>  
void main()
{
	char str[] = "hi";
	int i = 0;
	while(str[i] != '\0')
	{
		printf("%c\n",str[i]);
		i++;
	}
	printf("%d\n",i);

	for(int j = 0; str[j] != '\0'; j++)
	{
		printf("%c\n",str[j]);
	}
}

有幾個母音字元
#include<stdio.h>
void main()
{
	char str[] = "hi, how are you";
	int i = 0;
	int count = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
		{
			count++;
		}
		i++;
	}
	printf("%d\n",count);
	printf("%d\n",i);
}


#include<stdio.h>
void main()
{
	char str[200];
	gets(str);
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	printf("字串字數 = %d\n",i);
	for(int j = i - 1 ; j >= 0 ;j--)
	{
		printf("%c\n",str[j]);
	}
}

OR
#include<stdio.h>
void main()
{
	char str[200];
	gets(str);
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	printf("字元字數 = %d\n",i);
	for(i = i - 1 ; i >= 0 ;i--)
	{
		printf("%c\n",str[i]);
	}
}


每個字元變大寫
#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "hello";
	printf("%d\n",strlen(str));
}

strcpy() 字串拷貝
strcmp() 字串比對


字串拷貝
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char str[] = "hello";
	char str2[100];
	//copy str to str2
	strcpy(str2, str);
	printf("%d\n",strlen(str));
	for(int i = 0; str[i] != '\0'; i++)
		str[i] = toupper(str[i]);

	puts(str);
	puts(str2);
}


字串比對
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char id[] = "PETER";
	char input[100];
	gets(input);
	if(strcmp(id, input) == 0)
		printf("Pass!\n");
	else
		printf("Error\n");
}
