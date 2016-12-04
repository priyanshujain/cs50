#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do{
    printf("enter a height between 0 to 23:") ;   
     n = get_int();
    for(int i=0;i<n;i++){
        for(int j=0;j<n+2;j++){
            if(j<n-i){
                printf("*");
            }
        for(int k=0; k<n+1;k--){
            printf(" ");
        }
        }
        printf("\n");
    }
        
    }
    while (n<0 || n>=23);
    
}


