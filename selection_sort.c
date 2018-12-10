// Program to implement Selection Sort
#include<stdio.h>

void select(int[],int);
void min(int[],int*,int,int*);

void main()
{
	int a[100],n,i;
	printf("Enter the length of array");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The array entered is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	select(a,n);
	printf("\n");
	printf("The array after sorting is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}


void select(int a[],int n)
{
	int k,l,t;
	for(k=0;k<n-1;k++)
	{
		min(a,&k,n,&l);
		t=a[k];a[k]=a[l];a[l]=t;
	}
}


void min(int a[],int *k,int n,int *l)
{
	int j,min=a[*k];
	*l=*k;
	for(j=*k;j<n;j++)
		if(min<a[j])
		{
			min=a[j];
			*l=j;
		}
}
