#include<stdio.h>
void BSEARCH(int*,int,int,int*);
main()
{
	int A[10],I,ITEM,N,LOC;
	printf("Enter N : ");
	scanf("%d",&N);
	printf("Enter array elements :\n");
	for(I=0;I<N;++I)
		scanf("%d",A+I);//end of loop
	printf("Enter ITEM : ");
	scanf("%d",&ITEM);
	BSEARCH(A,N,ITEM,&LOC);
	if(LOC==-1)
		printf("ITEM not found.\n");
	else
		printf("ITEM found at %d position.\n",++LOC);
}//end of main
void BSEARCH(int *A,int N,int ITEM,int *LOC)
{
	int I=0,J=N-1,MID=(int)((I+J)/2);
	while(I<=J && A[MID]!=ITEM)
	{
		if(ITEM<A[MID])
			J=MID-1;
		else
			I=MID+I;
		MID=(int)((I+J)/2);
	}//end of loop
	if(A[MID]==ITEM)
		*LOC=MID;
	else
		*LOC=-1;
}//end of function
