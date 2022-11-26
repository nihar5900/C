#include<stdio.h>
int main()
{
    int num,temp=1;
    int col=1;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    for (int row = num; row > 0; row--)
    {
       
        for (int col = 1; col <= row-1; col++)
        {
            printf(" ");
        }
        for (int i=1; i <= temp; i++)
        {
            printf("%c",i+96);
            
        }
        temp++;
        printf("\n");
    }
    
    return 0;
}