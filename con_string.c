#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void string_con(char s[],char s1[]);
int str_len(char b[]);
int main()
{

	
	char str[25]="THUNDERSOFT";
	char str1[10]="HYDERABAD";
	string_con(str,str1);
return 0;
}

void string_con(char s[],char s1[])
{
	int i,j,n=0;
	n=str_len(s);
//	printf("len %d\n",n);
	s[n++]= ' ';	
	for(i=0;s1[i] !='\0';i++)
	s[n+i]=s1[i];

	printf("%s\n",s);
	n=str_len(s);
        printf("len %d\n",n);

}

int str_len(char b[])
{
	int i,c=0;
	for(i=0;b[i] != '\0';i++)
		c++;
	return c;
}
