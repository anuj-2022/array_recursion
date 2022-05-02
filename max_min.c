#include<stdio.h>
#include<stdlib.h>


int check_max(int a[],int n);
int check_min(int a[],int n);

int main()
{
	int i,max=0,min=0,n;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the data %d :\n",i+1);
		scanf("%d",&arr[i]);
	}
	max=check_max(arr,n);
	min=check_min(arr,n);
	printf("data is :\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	
	printf("\nmax element is : %d\n",max);
	printf("min element is : %d\n",min);
	
	return 0;
}

int check_max(int a[],int n)
{
	int i,m;
	m=a[0];
	for(i=0;i<n;i++)
	{
		if(m < a[i])
		m=a[i];
	}
	return m;
}

int check_min(int a[],int n)
{
	int i,mi;
	mi=a[0];
	for(i=0;i<n;i++)
	{
		if(mi>a[i])
		mi=a[i];
	}
	return mi;
}

