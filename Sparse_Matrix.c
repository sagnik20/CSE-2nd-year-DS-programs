// Program to print a sparse matrix 

#include<stdio.h>

void sparse(int[][100],int,int,int[][3]);

void main()
{
	int a[100][100],b[100][3],i,j,m,n;
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("The entered array is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	sparse(a,m,n,b);
	printf("The three-tuple form array is:\n");
	for(i=0;i<b[0][2]+1;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
}

void sparse(int a[][100],int m,int n,int b[][3])
{
	int i,j,c=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=0)
			{
				b[c+1][0]=i;
				b[c+1][1]=j;
				b[c+1][2]=a[i][j];
				c++;
			}
	b[0][0]=m;
	b[0][1]=n;
	b[0][2]=c;
}
