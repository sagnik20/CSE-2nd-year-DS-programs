#include<stdio.h>
#define SIZE 20

void MERGESORT(int*,int,int);
void MERGE(int*,int,int,int);

main()
{
	int A[SIZE],n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	for(i=0;i<n;++i)
		scanf("%d",A+i);//end of loop
	MERGESORT(A,0,n-1);
	for(i=0;i<n;++i)
		printf("%d ",A[i]);//end of loop
	printf("\n");
}//end of main

void MERGESORT(int *A,int BEG,int END)
{
	int MID;
	if(BEG<END)
	{
		MID=(BEG+END)/2;
		MERGESORT(A,BEG,MID);
		MERGESORT(A,MID+1,END);
		MERGE(A,BEG,END,MID);
	}
}//end of function

void MERGE(int *A,int BEG,int END,int MID)
{
	int I=BEG,J=MID+1,K=BEG,C[20];
	while(I<=MID && J<=END)
	{
		if(A[I]<A[J])
		{
			C[K]=A[I];
			++I;
		}
		else
		{
			C[K]=A[J];
			++J;
		}
		++K;
	}//end of loop
	while(I<=MID)
	{
		C[K]=A[I];
		++I;
		++K;
	}//end of loop
	while(J<=END)
	{
		C[K]=A[J];
		++J;
		++K;
	}//end of loop
	for(I=BEG;I<K;++I)
		A[I]=C[I];//end of loop
}//end of function
