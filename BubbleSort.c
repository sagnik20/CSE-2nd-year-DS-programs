//To implement Bubble Sort Technique

#include<stdio.h>
#define SIZE 10

void input(int *, int);
void BUBBLE(int *);
void swap(int *, int *);
int check(int *);
void print(int *);


void main()
{
	int arr[SIZE];
	printf("Enter array elements :\n");
	input(arr,0);
	BUBBLE(arr);
	print(arr);
}

void input(int *arr, int n)
{
	if(n<SIZE)
	{
		scanf("%d",arr+n]);
		input(arr,++n);
	}
}

void BUBBLE(int *arr)
{
	int i,j;
	for(i=0;i<SIZE-1 && check(arr);++i)
	{
		for(j=0;j<SIZE-1-i;++j)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

int check(int *arr)
{
	int i;
	for(i=0;i<SIZE-1;++i)
	{
		if(arr[i]>arr[i+1])
			return 1;
	}
	return 0;
}

void swap(int *p1, int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}

void print(int *arr)
{
	int i;
	printf("Array elements : ");
	for(i=0;i<SIZE;++i)
		printf("%d ",arr[i]);
	printf("\n");
}
