#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

void QUICKSORT(int*,int,int);
void PARTITION(int*,int,int,int*);
void swap(int*,int*);

main()
{
	int A[SIZE],n,i;
	printf("Enter n : ");
	scanf("%d",&n);

	printf("Enter array elements :\n");
	for(i=0;i<n;++i)
		scanf("%d",A+i);//end of loop

	QUICKSORT(A,0,n-1);

	printf("Sorted array : ");
	for(i=0;i<n;++i)
		printf("%d ",A[i]);//end of loop
	printf("\n");
}//end of main

void QUICKSORT(int *A,int BEG,int END)
{
	int LOC;
	if(BEG>=END)
		return;
	PARTITION(A,BEG,END,&LOC);
	QUICKSORT(A,BEG,LOC);
	QUICKSORT(A,LOC+1,END);
}//end of function

void PARTITION(int *A,int BEG,int END,int *LOC)
{
	int L=BEG+1,R=END,T=A[BEG],Temp;
	*LOC=BEG;

while(1){

	while(A[L]<T)
		++L;//end of loop

	while(A[R]>T)
		--R;//end of loop

	if(L<R)
	{
		swap(&A[L],&A[R]);
		//Temp=A[L];
		//A[L]=A[R];
		//A[R]=Temp;

		continue;
	}
	break;
}//end of loop

	if(L==R)
		--R;

	swap(&A[*LOC],&A[R]);
	//Temp=A[*LOC];
	//A[*LOC]=A[R];
	//A[R]=Temp;

	*LOC=R;
}//end of function

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
