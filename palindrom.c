#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrom(char str[]);

int main()
{
	int result=0;
	result=palindrom("ABBA");
	if(result == 1)
	printf("given string is palindrom\n");
	else
	printf("given string is NOT palindrom\n");
	return 0;
}

int palindrom(char str[])
{
	int l=0,flag=0;;
	int max = strlen(str) - 1;
	
	while(max>l)
	{
		if(str[l++]==str[max--])
		flag=1;
		else
		flag=0;
	}
	return flag;
}
