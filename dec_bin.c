#include<stdio.h>

int decimal_to_binary(int n);
 
void main()
{
   int n;
 
   printf("Enter a decimal number\n");
   scanf("%d",&n);
   int bin=decimal_to_binary(n);
   printf("Decimal=%d  Binary = %d\n",n,bin);
}

int decimal_to_binary(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%2)+10*decimal_to_binary(n/2));
}
