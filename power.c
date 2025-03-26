#include<stdio.h>
int power(int num,int p){
if (p==0){
return 1;
}else{
return num*power(num,p-1);
}
}
int main(){
int num,p;
printf("\nEnter the number");
scanf("%d",&num);
printf("\nEnter the power");
scanf("%d",&p);
int result=power(num,p);
printf("%d",result);
return 0;
}

