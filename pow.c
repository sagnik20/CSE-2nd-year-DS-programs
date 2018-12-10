#include<stdio.h>


int power(int,int);


void main()
{
	int n,x;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Enter the power : ");
	scanf("%d",&x);
	printf("The power is : %d \n",power(n,x));
}


int power(int n,int x)
{
	if(x==1)
		return n;
	else
	{
		if(x%2==1)
		return(n*power(n*n,x/2));
		else
		return(1*power(n*n,x/2));
	}
}
