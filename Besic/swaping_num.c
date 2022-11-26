#include<stdio.h>
int main()
{
    int no1,no2,temp1;
    printf("Enter two numbers:");
    scanf("%d%d",&no1,&no2);
    printf("Before swap no1=%d and no2=%d\n",no1,no2);
    temp1=no2;
    no2=no1;
    no1=temp1;
    printf("After swap no1=%d and no2=%d\n",no1,no2);
    return 0;
}