²Ä¤TÃD
#include<stdio.h>
int fact(int n);
int comb(int n,int a);
int rcomb(int n,int a);
void main()
{
	printf("%d\n",comb(5,3));
}

int comb(int n,int a)
{
	int factn = fact(n);
	int facta = fact(a);
	int factn_a = fact (n-a);
	return factn/(facta*factn_a);
}

int fact(int n)
{
	int result = 1;
	for(int i = 1;i <= n;i++)
	{
		result = result * 1;
	}
	return result;
}
