#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

  free(arr);

  return 0;

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

    printf("The average of the array is %.2f",getMean(arr,n));

    printf("The minimum element in the array is %d",getMin(arr,n));

    printf("The Minimum value is placed at index %d",getIndexOfMin(arr,n));

    printf("The Maximum value  %d",getMax(arr,n));

    printf("The Maximum value is placed at index %d",getIndexOfMax(arr,n));


// thrreshold;

    int threeshold;
    printf("Enter value for threshold");
    scanf("%d",&threeshold);

    int resultSize;

    int *ptr = filterThreshold( *arr,n,threeshold,&resultSize);

    printf("result size of the array is %d and elments that are greater than or equal to %d are",resultSize,threeshold);


  for(int i = 0 ; i <= resultSize ; i++)
  {
      printf("%d",ptr[i]);
  }

    printf("\n\n");


  int n = 3;
  int m = 5;

  int **d_ptr = createMultiplicationTable(n,m);

  for (int i = 0; i < 3; i++){
printf("[ ");
for(int j=0;j<5;j++){

printf(" %d ",d_ptr[i][j]);

}
printf(" ]\n");
}










}
