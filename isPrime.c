#include<stdio.h>
int main()
{
    int isPrime=1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for (int i = 2; i*i < num; i++)
    {
        if (num%i==0)
        {
            isPrime=0;
        }        
    }
    if (isPrime)
    {
        printf("The number %d is prime\n",num);
    }
    else
    {
        printf("The number %d is composite\n",num);
    }
    return 0; 
}