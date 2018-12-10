	//Shell Sort
	
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#define SIZE 200
	
	void printArray(int arr[], int len) {
		int i;
	  for ( i = 0; i < len; i++)
	    printf("%d ", arr[i]);
	
	  printf("\n");
	}
	
	void shellsort(int arr[], int N) {
	  int h = N / 3;
	  int pass = 1,i,temp,j;
	
	  while(h > 0) {
	    for( i = h; i < N; i++) {
	       temp = arr[i];
	
	      for(j = i; j >= h && arr[j - h] > temp; j -= h) {
	        arr[j] = arr[j - h];
	      }
	
	      arr[j] = temp;
	    }
	
	    printf("After pass %d  : ", pass);
	    printArray(arr, N);
	    pass++;
	    h /= 2;
	  }
	}

	void main() 
	{
	  int arr[SIZE],n,i ;//= {10, 7, 3, 1, 9, 7, 4, 3};
	  printf("Enter the length:  ");
	  scanf("%d",&n);
	  printf("Enter the array:\n");
	  for(i=0;i<n;i++)
		scanf("%d",arr+i);		
	  //int len = sizeof(arr) / sizeof(int);
	  printf("Initial Array : ");
	  printArray(arr, n);
	  shellsort(arr, n);
	  //return 0;
	}
