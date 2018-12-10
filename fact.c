#include<stdio.h>
int fact(int,int);
void main()
{
	int n;
	printf("Enter a Number to find Factorial :  ");
	scanf("%d",&n);
	printf("The factorial is %d \n",fact(n,1));
}
int fact(int x, int f)
{
	if(x>1)
		return fact(x-1,f*x);
	else
		return f;
}
