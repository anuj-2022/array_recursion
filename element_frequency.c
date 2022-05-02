#include<stdio.h>

void check_freq(int a[],int f[],int s);
int main()
{
	int arr[20],freq[20];
	int size,i;
	printf("Enter the size :\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter the data %d :\n",i+1);
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	
	check_freq(arr,freq,size);
	printf("\nfrequency of all element is :\n");
	for(i=0;i<size;i++)
	{
	if(freq[i] != 0)
		printf("%d occur %d times\n",arr[i],freq[i]);
	}
	return 0;
}

void check_freq(int a[],int f[],int s)
{
	int i,j,count=0;
	for(i=0;i<s;i++)
	{
		count=1;
		for(j=i+1;j<s;j++)
		{	
			if(a[i]==a[j])//duplicate element found
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		f[i]=count;//store element frequency data
		
	}
	for(i=0;i<s;i++)
        {
        if(f[i] != 0)
                printf("%d occur %d times\n",a[i],f[i]);
        }

}
