// To implement the concept of Circular LinkList
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int INFO;
	struct Node *LINK;
}*start = NULL;

void run();

void enl();
void ins();
void del();
void disp();
void search();

int main()
{
	run();
	return 0;
}//end of main

void run()
{
	int choice;
	printf("\n");
	while(1)
	{
		printf("Options-\n\n");
		printf("1) Insert\n");
		printf("2) Delete\n");
		printf("3) Display\n");
		printf("4) Search\n");
		printf("5) Exit\n");

		printf("\nEnter choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				ins();
				disp();
				enl();
				break;

			case 2:
				del();
				disp();
				enl();
				break;

			case 3:
				disp();
				enl();
				break;

			case 4:
				search();
				break;

			case 5:
				disp();
				printf("\nEnd of program.\n");
				enl();
				exit(0);

			default:
				printf("\nWrong choice. Try again!\n");
				enl();

		}//end of switch-case
	}//end of loop
}//end of function

void enl()
{
	printf("\n");
	int i;
	for(i = 1; i <= 106; ++i)
		printf("*");//end of loop
	printf("\n\n");
}//end of function

void ins()
{
	struct Node *NEW = (struct Node *)malloc(sizeof(struct Node *));

	if(NEW == NULL)
	{
		printf("\nNo memory space available.\n");
		return;
	}//end of if

	printf("\nEnter ITEM: ");
	int ITEM;
	scanf("%d", &ITEM);
	NEW -> INFO = ITEM;

	if(start == NULL)
		start = NEW;//end of if

	else
	{
		struct Node *P = start;
		while(P -> LINK != start)
			P = P -> LINK;//end of loop
		P -> LINK = NEW;
	}//end of else

	NEW -> LINK = start;

}//end of function

void del()
{
	if(start == NULL)
	{
		printf("\nUnderflow.\n");
		return;
	}//end of if

	if(start -> LINK == start)
	{
		printf("\nITEM deleted: %d\n", start -> INFO);
		start = NULL;
		return;
	}//end of if

	struct Node *P = start;

	while(P -> LINK -> LINK != start)
		P = P -> LINK;//end of loop

	struct Node *DEL = P -> LINK;
	int ITEM = DEL -> INFO;

	P -> LINK = start;

	free(DEL);

	printf("\nITEM deleted: %d\n", ITEM);

}//end of function

void disp()
{
	struct Node *P = start;
	printf("\nList- ");

	if(P == NULL)
	{
		printf("\n");
		return;
	}//end of if

	while(P -> LINK != start)
	{
		printf("%d ", P -> INFO);
		P = P -> LINK;
	}//end of loop

	printf("%d\n", P -> INFO);

}//end of function

void search()
{
	struct Node *P = start;
	if(P == NULL)
	{
		printf("\nList is empty.\n\n");
		return;
	}//end of if

	int ITEM, POS = 1;
	printf("\nEnter ITEM: ");
	scanf("%d", &ITEM);
	while(P -> LINK != start)
	{
		if(P -> INFO == ITEM)
		{
			printf("\nITEM found at position %d.\n\n", POS);
			return;
		}//end of if
		P = P -> LINK;
		++POS;
	}//end of loop

	printf("\nITEM not found.\n\n");

}//end of function
