#include<stdio.h>
int main(){
char str[50],temp;
printf("Enter the string:");
gets(str);
int i,length,j;
for(i=0;str[i]!='\0';i++);
length=i-1;
for(j=0;j<=length;j++){
temp=str[length];
str[length]=str[j];
str[j]=temp;
length--;
}
printf("\n Reversed string is: ");
puts(str);
return 0;
}


