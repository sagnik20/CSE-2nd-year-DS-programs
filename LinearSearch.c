// To implement Linear Search
#include<stdio.h>

void LSEARCH(int*,int,int,int*);

void main()
{
	int A[10],N,I,ITEM,LOC;
	printf("Enter N : ");
	scanf("%d",&N);
	printf("Enter array elements :\n");
	for(I=0;I<N;++I)
		scanf("%d",A+I);//end of loop
	printf("Enter ITEM : ");
	scanf("%d",&ITEM);
	LSEARCH(A,N,ITEM,&LOC);
	if(LOC==N)
		printf("ITEM not found.\n");
	else
		printf("ITEM found at %d.\n",LOC+1);
}//end of main

void LSEARCH(int *A, int N, int ITEM, int* LOC)
{
	A[N]=ITEM;
	for(*LOC=0;;++(*LOC))
		if(A[*LOC]==ITEM)
			return;//end of if //end of loop
	//end of loop
}//end of function
