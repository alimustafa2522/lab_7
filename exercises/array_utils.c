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
  int *min = arr_1;
  for(i=0;i<=size_1;i++,arr_1++)
  {
    if(*arr_1<*min)
    {
      *min = *arr_1;
    }
  }
  return *min;
}

int getIndexOfMin(const int *arr_2, int size_2) {
  //TODO: implement

  int i;
  int min_index = 0;
  for( i=0;i<=size_2;i++,arr_2++)
  {
    if(arr_2 < (arr_2+1))
    {
      min_index = i;
    }
  }
  return min_index;
}

int getMax(const int *arr_3, int k) 
 { int i;
  int *max = arr_3; 

  for(i=0;i<k;i++)
  {
      if(*arr_3>*max)
      {
         *max = *arr_3; 
      }
  }
  return *max;
}

int getIndexOfMax(const int *arr_4, int size_4) {
  //TODO: implement

  int *max_index = arr_4;
  int i;
  for(i=0;i<size_4;i++)
  {
    if(*arr_4 >*max_index)
    {
      
    }
  }


}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  //TODO: implement
}

int **createMultiplicationTable(int n, int m) {
  //TODO: implement
}


int main()
{
      int n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    int arr[n];
    int i;

    printf("Enter Elements of array\n");

    for(i=0;i<n;i++)
    {
      scanf("%d\n",&arr[i]);
    }

    printf("The average of the array is %.2f",getMin(arr,n));


  // copy the inputs 
   int s;
    printf("Enter size of array\n");
    scanf("%d",&s);

    int arr_1[s];
    int i;

    printf("Enter Elements of array\n");

    for(i=0;i<s;i++)
    {
      scanf("%d\n",&arr[i]);
    }

    printf("The minimum element int the array is %d",getMin(arr_1,s));

    // i copy the inputs just;

     int a;
    printf("Enter size of array\n");
    scanf("%d",&a);

    int arr_2[a];
    int i;

    printf("Enter Elements of array\n");

    for(i=0;i<a;i++)
    {
      scanff("%d\n",&arr_2[i]);
    }

    printf("The Minimum value is placed at index %d",getIndexOfMin(arr_2,a));


    int k;
    printf("Enter size of array\n");
    scanf("%d",&k);

    int arr_3[k];
    int i;

    printf("Enter Elements of array\n");

    for(i=0;i<k;i++)
    {
      scanf("%d\n",&arr_2[i]);
    }

    printf("The Minimum value is placed at index %d",getIndexOfMin(arr_2,a));

    // cpy the same lines of code as inputs;
    
    int j;
    printf("Enter size of array\n");
    scanf("%d",&k);

    int arr_4[j];
    int i;

    printf("Enter Elements of array\n");

    for(i=0;i<j;i++)
    {
      scanf("%d\n",&arr_4[i]);
    }

    printf("The Maximum value is placed at index %d",getIndexOfMin(arr_4,j));


}
