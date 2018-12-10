#include<stdio.h>
int comb(int,int);
void main()
{
	int n,k;
	printf("Enter the numbers :");
	scanf("%d%d",&n,&k);
	printf("The combinatiom is %d \n",comb(n,k));
}
int comb(int n, int k)
{
	if(k==0||n==k)
		return 1;
	else
		return(comb(n-1,k)+comb(n-1,k-1));
}
