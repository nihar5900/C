#include<stdio.h>
int main()
{
    int num,rev,digit,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if (temp==rev)
    {
        printf("%d is palindrom",rev);
    }
    
    else
    {
        printf("%d is not palindrom",rev);
    }
    
    return 0;
}