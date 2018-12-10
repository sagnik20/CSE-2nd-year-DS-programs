// To delete dublicate elements of an Array

#include<stdio.h>

void del(int[],int*,int*);


void main()
{
	int a[100],i,j,n,k;	
	printf("Enter the length of array :");
	scanf("%d",&n);
	printf("Enter the array: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				del(a,&j,&n);
			}
	printf("The fresh array is:\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
}

void del(int a[],int *j,int *n)
{
	int k=*j;
	while(k!=*n-1)
	{
		a[k]=a[k+1];
		k++;
	}
	(*n)--;
	(*j)--;
}
