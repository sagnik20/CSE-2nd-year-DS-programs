// To print fibonacci series using recursive technique

#include<stdio.h>

int fibo(int);

void main()
{
	int i,n;
	printf("Enter the length : ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		printf("%d  ",fibo(i));
	}
	printf("\n");
}

int fibo(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return (fibo(x-2)+fibo(x-1));
}
