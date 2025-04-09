//write a c program to to read a file and count the number of words and lines and characters in it//
#include<stdio.h>
int main(){
  FILE*fp;
  int wordcount=0;
  fp=fopen("sample.txt","r");
  char ch;
  while(fscanf(fp,"%c",&ch)==1){
    if(ch==' '|| ch=='-'){
      wordcount++;
    }  
  }    
  printf("Word Count=%d",wordcount);
  fclose(fp);
  return 0;
}
