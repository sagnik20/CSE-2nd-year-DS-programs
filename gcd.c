//Recursive implementation to find Greatest Common Divisor of two numbers

#include<stdio.h>

int gcd(int,int);

void main()
{
	int x1,x2;
	printf("Enter two numbers : ");
	scanf("%d%d",&x1,&x2);
	if(x1>x2)
	printf("The Greatest Common Divisor of %d & %d is : %d \n",x1,x2,gcd(x1,x2));
	else
	printf("The Greatest Common Divisor of %d & %d is : %d \n",x1,x2,gcd(x2,x1));
}

int gcd(int max,int min)
{
	if(min!=0)
		return gcd(min,max%min);
	return max;
}

