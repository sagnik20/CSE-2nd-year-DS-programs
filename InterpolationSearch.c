// To implement the concept of Interpolation Search

#include<stdio.h>

int ISEARCH(int*,int,int);


void main()
{
	int A[10],I,ITEM,N,LOC;
	printf("Enter N : ");
	scanf("%d",&N);
	printf("Enter array elements :\n");
	for(I=0;I<N;++I)
		scanf("%d",A+I);//end of loop
	printf("Enter ITEM : ");
	scanf("%d",&ITEM);
	LOC=ISEARCH(A,N,ITEM);
	if(LOC==-1)
		printf("ITEM not found.\n");
	else
		printf("ITEM found at %d position.\n",++LOC);
}//end of main


int ISEARCH(int *A,int N,int ITEM)
{
	int I=0,J=N-1,MID;
	while(I<=J)
	{
		MID=I+(ITEM-A[I])*(J-I)/(A[J]-A[I]);
		if(ITEM<A[MID])
			J=MID-1;
		else if(ITEM>A[MID])
		        I=MID+I;
        else 
			return MID;
	}//end of loop
	return -1;
}//end of function
