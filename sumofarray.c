#include<stdio.h>
int sumofarrays(int arr[], int size) {
 int sum = 0;
 for (int i = 0; i < size; i++) {
  sum += arr[i];
 }
 return sum;
}
 int main() {
  int size;
  printf("enter the limit");
 scanf("%d",&size);
 int array[size];
 printf("enter %d elements",size);
 for(int i=0;i<size;i++){
 scanf("%d",&array[i]);
}
  int total_sum =sumofarrays(array, size);
  printf("The sum of the array elements is: %d\n",total_sum);
  return 0;
}


