#include<stdio.h>
int main()
{
	int n,i,flg=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			flg=1;
			break;	
	}
	if(n<=1)
	{
		printf("not prime\n");
	}
	else if(n==2)
	{
		printf("prime number\n");
	}
	else
	{
		if(flg==0)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime");
		}
	}
}

