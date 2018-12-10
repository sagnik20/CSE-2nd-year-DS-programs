//To implement the concept of Tower of Hanoi
#include<stdio.h>

void tower(int, char,char,char);


void main()
{
	int n;
	printf("Enter the number of rings: ");
	scanf("%d",&n);
	tower(n,'A','B','C');
}


void tower(int n,char str,char des,char temp)
{
	if(n>0)
	{
		tower(n-1,str,temp,des);
		printf("Move the %d disc from %c to %c \n",n,str,des);
		tower(n-1,temp,des,str);
	}
}
