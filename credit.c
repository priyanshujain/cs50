#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main (void)
{
    
    int sum = 0;
    long long b = pow(10,13);
    long long c = pow(10,14);
    long long d = pow(10,12);
    long long e = pow(10,15);
    int q;
    int p;
    long long cc_number;
   
    do
    {
        printf("Enter your credit card number: ");
        cc_number = get_long_long();
    }while (cc_number <0);
    int a = (int)cc_number;
    printf("%i\n",a);
    for (long long i=100; i<=pow(10,17); i=i*100)
    {
        q=(cc_number%i)*10/i ;
        q=q*2;
        if (q>9)
        {
            q = (q/10)+(q%10);
        }
        
        sum = sum + q;
    }
    for(long long i=10; i<=pow(10,16); i=i*100)
    {
        p=(cc_number%i)*10/i;
        sum = sum + p;
    }
    if(sum%10 ==0)
    {
        if((cc_number/b)-(cc_number%b/b) ==34) 
        {
            printf("The card is an American Express' card\n");
        }
        else if((cc_number/b)-(cc_number%b/b)==37)
        {
             printf("The card is an American Express' card\n");
        }
       
        else if (cc_number/c==51)
        {
            printf("The card is a MasterCard's card\n");
        }
       
        else if (cc_number/c==52)
        {
            printf("The card is a MasterCard's card\n");
        }
       
        else if (cc_number/c==53)
        {
            printf("The card is a MasterCard's card\n");
        }
       
        else if (cc_number/c==54)
        {
            printf("The card is a MasterCard's card\n");
        }
       
        else if (cc_number/c==55)
        {
            printf("The card is a MasterCard's card\n");
        }
       
        else if (cc_number/e==4)
        {
            printf("The card is a Visa's card\n");
        }
       
         else if (cc_number/c==4)
        {
            printf("The card is a Visa's card\n");
        }
       
         else if (cc_number/b==4)
        {
            printf("The card is a Visa's card\n");
        }
       
         else if (cc_number/d==4)
        {
            printf("The card is a Visa's card\n");
        }
       
        else
        {
            printf("The card is fake...\n");
        }
    }
    
    else
    {
            printf("The card is invalid...\n");
    }
}
