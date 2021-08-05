簡易型計算機
#include
#include
void main()
{
	int a, b;
	char op;
	char exp[100];
	gets(exp);
	sscanf(exp, "%d %c %d", &a, &op, &b);
	switch(op)
	{
	case '+':
		printf("%d %c %d = %d\n", a, op, b, a+b);
		break;
	case '-':
		printf("%d %c %d = %d\n", a, op, b, a-b);
		break;
	case '*':
		printf("%d %c %d = %d\n", a, op, b, a*b);
		break;
	case '/':
		printf("%d %c %d = %d\n", a, op, b, a/b);
		break;
	default:
		printf("Error!!\n");
	}
}


取得當月份的最後一天
#include
#include
void main()
{
	int numDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int y, m, d;
	char strDate[100];
	gets(strDate);
	sscanf(strDate, "%d/%d/%d", &y, &m, &d);
	printf("%d/%d/%d", y, m, numDays[m-1]);
}


判斷是否為回文
#include
#include
void reverseStr(char dest[], char source[]);
void main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	reverseStr(str2, str1);
	int flag = 1;
	for(int i = 0; i < strlen(str1); i++)
	{
		if(str1[i] != str2[i])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		printf("yes\n");
	else
		printf("no\n");

}

void reverseStr(char dest[], char source[])
{
	int index = 0;
	for(int i = strlen(source) - 1; i >= 0; i--)
	{
		dest[index] = source[i];
		index++;
	}
	dest[index] = '\0';
}



