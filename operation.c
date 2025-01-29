#include<stdio.h>
int main(){
   int num1,num2,result;
   char operator;
   
   printf("Enter the operator(+,-,*,/,%%):");
   scanf("%c",&operator);
   
   printf("Enter two numbers");
   scanf("%d %d",&num1,&num2);
   
   switch(operator){
   case '+':
          result=num1+num2;
          printf("%d",result);
          break;
   case '-':
          result=num1-num2;
          printf("%d",result);
          break;
   case '*':
          result=num1*num2;
          printf("%d",result);
          break;
   case '/':
          result=num1/num2;
          printf("%d",result);
          break;
   case '%':
          result=num1%num2;
          printf("%d",result);
          break;
   default:
           printf("Invalid operator");
           break;
   }
   return 0;
}
