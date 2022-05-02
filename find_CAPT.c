#include<stdio.h>
#include<string.h>

char find_cap(char *str1,int s);

int main()
{
        int n;
        char C;
        printf("Enter the size :\n");
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        C=find_cap(str,n);
        if(C==0)
                printf("Captial letter is not found\n");
        else
                printf("First Captial letter is %c\n",C);
//      for(i=0;i<n;i++)

return 0;
}

char find_cap(char *str1,int s)
{
        static int i=0;
        if(i < s)
        {
                if(str1[i] >= 'A' && str1[i] <= 'Z')
                return str1[i];
        else
        {
                i=i+1;
                return find_cap(str1,s);
        }
        }
        else
                return 0;
}

