#include<stdio.h>
int main()
{
    int num,temp=1;
    char ch;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    for (int row = num; row > 0; row--)
    {
        for (int col = 1; col < row; col++)
        {
            printf(" ");
        }
        
        for (int col = 1; col <= temp; col++)
        {
            printf("%c",ch+97);
            ch++;
        }
        printf("\n");
        temp++;
    }
    return 0;
}