#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get(int p);
void delete(int p);
void insert(int p);

int str[20];
static int size=0;
int main()
{
        int choice,n=0;
        printf("Enter the size :\n");
        scanf("%d",&size);
        for(int i=0;i<size;i++)
        {
        printf("Enter the data %d :\n",i+1);
        scanf("%d",&str[i]);
        }

        printf("Enter the choice\n1.insert element\n2.delete element\n3.get element\n.4.print element\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        printf("enter the position to insert the data :\n");
                        scanf("%d",&n);
                        insert(n);
                        break;
                case 2:
                        printf("enter the position to dalete the data :\n");
                        scanf("%d",&n);
                        delete(n);
                        break;
                case 3:
                        printf("enter the position to get the data :\n");
                        scanf("%d",&n);
                        get(n);
                        break;
                default:
                        printf("invalid choice :\n");
        }
return 0;
}

void insert(int p)
{
        int d,i;
        printf("Enter the data to insert :\n");
        scanf("%d",&d);
        if(p>size)
        printf("invalid position\n");
        else
        {
        size++;
        for(i=size-1;i >= p-1;i--)
        str[i]=str[i-1];
        }

        str[p-1]=d;
        for(i=0;i<size;i++)
        printf("%d\t",str[i]);
}

void delete(int p)
{
        int i,j;
        p--;
        for(i=0;i<size;i++)
        {
                if(i==p)
                {
                        for(j=i;j<(size-1);j++)
                        str[j]=str[j+1];
                        break;
                }
        }
        str[j]='\0';
        for(i=0;i<size-1;i++)
        printf("%d\t",str[i]);
}

void get(int p)
{
        p--;
        printf("given position data is : %d",str[p]);
}

