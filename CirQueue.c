// to implement the operations of a Circular Queue using Array

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void enqueue(int);
void dqueue(int*);
void display();

struct QUEUE
{
	int s[MAX];
	int r,f,c;
}stk;

void main()
{
	int i,a;
	stk.r=stk.f=-1;
	stk.c=-1;
	while(1)
	{
		printf("\n 1.Enter");
		printf("\n 2.Delete");
		printf("\n 3.Display");
		printf("\n 4.Exit");
		printf("\n Enter your choice between 1 to 4:  ");
		scanf("%d",&i);
		switch(i)
		{
			case 1: printf("Enter the item to push in queue\n");
				scanf("%d",&a);
				enqueue(a);
				display();				
				break;
			case 2: dqueue(&a);
				if(a!=-999)
				printf("%d is Deleted\n",a);
				display();
				break;
			case 3: display();
				break;
			case 4: exit(0);
			default:printf("Please enter a choice in between 1 to 5");
		}
	}
}

void enqueue(int a)
{
	if(stk.c == MAX-1)
	{
		printf("Queue is full \n");
		return;
	}
	else
	{
		stk.r=(stk.r+1)%MAX;
		stk.s[stk.r]=a;
		stk.c+=1;//printf("%d ",stk.c);
		return;
	}
}

void dqueue(int *a)
{
	if(stk.c==-1)
	{
		//stk.f=stk.r=-1;
		printf("Queue is empty \n");
		*a=-999;
		return;
	}
	else
	{
		*a=stk.s[stk.f+1];
		stk.f=(stk.f+1)%MAX;
		stk.c-=1;
		return;
	}
}

void display()
{
	int i;
	if(stk.c==-1)
	{
		//stk.f=stk.r=-1;
		printf("Queue is empty \n");
		return;
	}
	if((stk.f+1)%MAX<=stk.r)
	{
		for(i=(stk.f+1)%MAX;i<=stk.r;i++)
			printf("%d  ",stk.s[i]);//end of loop
	}
	else
	{
		for(i=(stk.f+1)%MAX;i<MAX;i++)
			printf("%d  ",stk.s[i]);
		for(i=0;i<=stk.r;i++)
			printf("%d  ",stk.s[i]);
	}
}

