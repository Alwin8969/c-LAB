#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1>num2){
       if(num1>num3){
         printf("\n The largest is num1:%d",num1);
       }
      }
      else if (num2>num1){
        if(num2>num3){
           printf("\n The largest number is num2:%d",num2);
        }
      }
      else{
        printf("\n The largest number is num3:%d",num3);
      }
      return 0;
}
    

