#include<stdio.h>

void check_word(char a[],int n);
int main()
{
	int n;
	printf("Enter the size :\n");
	scanf("%d",&n);
	char str[n];
	printf("Enter the data :\n");
	scanf("%s",str);
	check_word(str,n);
	return 0;
}

void check_word(char a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				printf("first occurance word is : %c and index is %d\n",a[i],i);
				return;
			}
		}
	}
}
