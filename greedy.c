#include <stdio.h>
#include<cs50.h>
int main (void)
{
    float n;
    float m;
    int q;
    int p;
    int r;
    int s;
    int t;
    int u;
    int v;
    do
    {
        printf("Enter the amount owed: ");
        n=get_float();
    }
    while(n<0);
    m=n*100;
    int a = (int) m;
    q=a/25; p=a%25;
    r=p/10; s=p%10;
    t=s/5; u=s%5;
    v=u/1;
    printf("The minimum number of coins to be given is: %i\n",q+r+t+v);
    
}
