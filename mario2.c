#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    int i;
    int j;
     do{
        printf("enter the height of the half pyramid(between the range 0 to 23): \n");
        n = get_int();
        for ( i=0;i<n+1;i++)
        {
            for (j=0; j<n+1;j++)
            {
                if(j>=n-i){
                    printf("*");
                    }else
                    {
                        printf(" ");
                        
                    }
            }
            if(j=n+1;j=n+2){
            printf (" ");}printf("\n");
            for (j=n+3;j<n+n+3;j++)
            {if (j<=n+3+i){
                printf("*");
            }
        }
        }
        }while (n<0 || n>23);
}
