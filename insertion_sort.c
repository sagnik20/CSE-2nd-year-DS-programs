// To implement the operations of Insertion Sort

#include<stdio.h>
#include<limits.h>

void insert(int[],int);

void main()
{
	int a[100],n,i;
	a[0]=INT_MIN;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=1;i<n+1;i++)
		scanf("%d",&a[i]);
	printf("The array entered is:\n");
	for(i=1;i<n+1;i++)
		printf("%d\t",a[i]);
	printf("\n");
	insert(a,n);
	printf("The array after insertion is:\n");
	for(i=1;i<n+1;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

void insert(int a[],int n)
{
	int k,p,t;
	for(k=2;k<=n;k++)
	{
		t=a[k];p=k-1;
		while(t<a[p])
		{
			a[p+1]=a[p];
			p--;
		}
		a[p+1]=t;
	}
}

