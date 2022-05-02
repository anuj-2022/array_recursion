#include<stdio.h>


char* reverse(char* str);

void main()
{
    int i, j, k;
    char str[10]="hyderabad";
    char *rev;
    printf("The original string is: %s\n", str);
    rev = reverse(str);
    printf("The reversed string is: %s\n", rev);
   
}


char* reverse(char *str)//for each iteration new stack will create
{
    static int i = 0;
    static char r[10];
    if(*str)
    {
        reverse(str+1);//recursation fun call
        r[i++] = *str;
    }
    return r;
}
