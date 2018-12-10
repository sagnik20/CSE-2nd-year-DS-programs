//Implement the opertions of Stack using Array

#include<stdio.h>
#include<stdlib.h>
#define MAX 5


void push(int);
void pop(int*);
void peak(int*);
void display();

struct STACK
{
	int s[MAX];
	int top;
}stk;

void main()
{
	int i,a;
	stk.top=-1;
	while(1)
	{
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.pop");
		printf("\n 4.Display");
		printf("\n 5.Exit");
		printf("\n Enter your choice between 1 to 5");
		scanf("%d",&i);
		switch(i)
		{
			case 1: printf("Enter the item to push\n");
				scanf("%d",&a);
				push(a);break;
			case 2: pop(&a);
				printf("%d is popped out\n",a);
				break;
			case 3: peak(&a);if(a==-9999)
					printf("stack is empty");
				else
					printf("%d is at peak\n",a);
				break;
			case 4: display();break;
			case 5: exit(0);
			default:printf("Please enter a choice in between 1 to 5");
		}
	}
}


void push(int a)
{
	if(stk.top==MAX-1)
	{
		printf("Stack overflow");
		return;
	}
	stk.top+=1;
	stk.s[stk.top]=a;
	return;
}


void pop(int *a)
{
	if(stk.top==-1)
	{
		printf("Stack is Underflown");
		return;
	}
	*a=stk.s[stk.top];
	stk.top-=1;
}


void peak(int *a)
{
	if(stk.top==-1)
		*a=-9999;
	else
	*a=stk.s[stk.top];
	return;
}


void display()
{
	int i;
	if(stk.top!=-1)
	for(i=0;i<=stk.top;i++)
		printf("%d\t",stk.s[i]);
	printf("\n");
	return;
}
