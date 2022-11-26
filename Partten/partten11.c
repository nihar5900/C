#include<stdio.h>
int main()
{
    int num,temp=0;
    int col=1;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    temp=num-1;
    for (int row = 1; row <= num-1; row++)
    {
       
        for (int sp = row; sp > 0; sp--)
        {
            printf(" ");
        }
        for (int col=temp; col >0; col--)
        {
            printf("%c",col+96);   
        }
        for (int index = temp; index > 1; index--)
        {
            printf("%c",index+96);
        }
        temp--;
        printf("\n");
    }
    
    return 0;
}