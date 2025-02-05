#include<stdio.h>
int main(){
  int i,n;
  printf("\n  Enter the no of elements:");
  scanf("%d",&n);
  int num[n];
  for(i=0;i<n;i++){
    printf("\n  Enter the next element");
    scanf("%d",&num[i]);
  }
  int max=num[0];
  int min=num[0];
  for(i=0;i<n;i++){
    if(num[i]>max){
        max=num[i];
    }
    if(num[i]<min){
        min=num[i];
    }
  }
  printf("Maximum number in the array is:%d\n",max);
  printf("Minimum number in the array is:%d\n",min);
  return 0;
}
