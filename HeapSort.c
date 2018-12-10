//To implement operation of Heap Sorting Technique

#include<stdio.h>
#include<stdlib.h>

void run();
void ins(int **, int *);
void disp(int *, int);
void heap_sort(int **, int);
void shift_down(int **, int, int);
void swap(int *, int *);

void ins(int **Arr, int *length){
	printf("Enter length: ");
	scanf("%d", length);
	*Arr = (int *)malloc((*length) * sizeof(int));
	printf("Enter array elements: ");
	int i;
	for(i = 0; i < *length; ++i)
		scanf("%d", Arr[0] + i);//end of loop
}//end of function

void disp(int *Arr, int length){
	int i;
	for(i = 0; i < length; ++i)
		printf("%d ", Arr[i]);//end of loop
	printf("\n");
}//end of function

void heap_sort(int **Arr, int length){
	if(length > 1){
		int ITEM_POS = length / 2 - 1;
		printf("PING\n");
		disp(*Arr, 5);
		shift_down(Arr, length, ITEM_POS);
		swap(*Arr, &(Arr[0][--length]));
		heap_sort(Arr, length);
	}//end of if
}//end of function

void shift_down(int **Arr, int length, int ITEM_POS){
	if(ITEM_POS == length - 1)
		return;//end of if
	disp(*Arr, length);
	int ref = (ITEM_POS + 1) * 2 - 1;
	//LEFT_ID = ref
	//RIGHT_ID = ref + 1
	int max = Arr[0][ITEM_POS];
	int max_child = Arr[0][ref];
	int CHILD_ID = ref;
	if(max_child < Arr[0][ref + 1]){
		max_child = Arr[0][ref + 1];
		CHILD_ID = ref + 1;
	}//end of if
	if(max < max_child){
		swap(Arr[0], &(Arr[0][CHILD_ID]));
		shift_down(Arr, length, CHILD_ID);
	}//end of if
	else
		return;//end of else
}//end of function

void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}//end of function

void run(){
	int i, *Arr, length;
	ins(&Arr, &length);
	printf("Original array: ");
	disp(Arr, length);
	heap_sort(&Arr, length);
	printf("Sorted array : ");
	disp(Arr, length);
	free(Arr);
}//end of function

int main(){
	run();
	return 0;
}//end of main
