#include<stdio.h>
void multiply(int num1,int num2);
int main(){
int num1,num2;
printf("\nEnter the number 1:");
scanf("%d",&num1);
printf("\nEnter the number 2:");
scanf("%d",&num2);
multiply(num1,num2);
return 0;
}
void multiply(int num1,int num2){
int num3;
num3=num1*num2;
printf("%d*%d=%d",num1,num2,num3);
}




