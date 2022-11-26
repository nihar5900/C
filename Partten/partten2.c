#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    for (int row = 1; row < num+1; row++)
    {
        for (int space = num; space<row; space++)
        {
            printf(" ");
        }
        
        for (int col = 1;col<=row ; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}