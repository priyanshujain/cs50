#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int n;
    int i;
    int j;
    do
    {
        printf("enter a value for height ranging between 0 to 23:");
        n=get_int();
    }while (n<0 || n>23);
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if (j>=n-i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=n+1;j<n+3;j++)
        {
            printf(" ");
        }
        for(j=n+3;j<n+n+3;j++)
        {
            if (j<n+3+i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }
}
