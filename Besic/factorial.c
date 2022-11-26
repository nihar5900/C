#include<stdio.h>
int main()
{
    int num,i=1,factorial=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("The factorial is %d",factorial);
    return 0;
}