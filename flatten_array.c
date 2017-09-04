#include <stdio.h>
#include<string.h>


int main()
{
    char in[100];
    scanf("%s",in);
    int len = strlen(in);
   int i,j,res[100];
   i=j=0;
    char arr_ref;
   for(;i<len;i++){
       
       if(in[i]=='[' || in[i]==']' || in[i] == ',' || in[i]=='{' || in[i]=='}' ){
           continue;
       }
       
       res[j++]= (int) in[i] - 48;
   }
   printf("%c",in[0]);
   for(i=0;i<j;i++){
       printf("%d,",res[i]);
   }
   printf("\b%c",in[len-1]);
    return 0;
}

