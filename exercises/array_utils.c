#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  int randomArr[size];
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
    arr[i] = 0;
  }
  return total;
}

void freeTable(int **table, int n) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}

double getMean(const int *arr, int size) {
  int i,sum=0;

  for(i=0;i<size;i++, arr++)
  {
    sum = *arr+sum;
  }


  return (double)sum/size;

}

int getMin(const int *arr_1, int size_1) {
  //TODO: implement
  int i;
  int min = arr_1[0];
  for(i=0;i<size_1;i++)
  {
    if(arr_1<min)
    {
      min = arr_1[i];
    }
  }
  return min;
}

int getIndexOfMin(const int *arr_2, int size_2) {
  //TODO: implement

  int i;
  int min_index = 0;
  for( i=0;i<=size_2;i++,arr_2++)
  {
    if(arr_2[i] < arr_2[min_index])
    {
      min_index = i;
    }
  }
  return min_index;
}

int getMax(const int *arr_3, int k) 
 { int i;
  int max = arr_3[0]; 

  for(i=0;i<k;i++)
  {
      if(arr_3[i]>max)
      {
         max = arr_3[i]; 
      }
  }
  return max;
}

int getIndexOfMax(const int *arr_4, int size_4) {
  //TODO: implement

  int max_index = arr_4[0];
  int i;
  for(i=0;i<size_4;i++)
  {
    if(arr_4[0] >max_index)
    {
      max_index = arr_4[i];
    }

  }
  return max_index;


}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  //TODO: implement
  
  int count;

  for(int i = 0 ; i<size ;i++)
  {
      if(arr[i]>=threshold)
      {
        count++;
      }

  }
  int *dyn_arr = (int*) malloc(4*count); 

*resultSize = count;

int index=0;

if(dyn_arr==NULL){

  printf("\nMemory Allocation Error\n");
  exit(1);

}

for (int i = 0; i < size; i++)
{
  if(arr[i] >= threshold) {

dyn_arr[index]=arr[i];

index++;

  }

}
return dyn_arr;  
}

  





int **createMultiplicationTable(int n, int m) {
  //TODO: implement
}
