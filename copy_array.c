#include<stdio.h>    

void copy_fun(char s[],char s1[],int n);

int main()
{    
   int n;
   printf("Enter the size :\n");
   scanf("%d",&n);
   char str[10],str1[10];
   printf("Enter the data :\n");
   scanf("%s",str);
   copy_fun(str,str1,n);
   printf("original string is :\n");
   printf("%s",str);
   
   printf("\nduplicate string is :\n");
   printf("%s",str1);
 }    
 
 void copy_fun(char s[],char s1[],int n)
 {    
    int i=0;
    for(i=0;i<n;i++)
    s1[i]=s[i];
}    
