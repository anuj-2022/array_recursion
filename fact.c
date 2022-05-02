#include<stdio.h>  
  
long fact(int n); 
   
int main()  
{  
  int number;  
  long f;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  f = fact(number);  
  printf("Factorial of %d is %ld\n", number, f);  
  return 0;  
}  

long fact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1)); //recursation 
} 

