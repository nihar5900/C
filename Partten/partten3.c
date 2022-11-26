#include<stdio.h>
int main()
{
    int num;
    char ch;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    for (int row = 1; row < num+1; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c",ch+97);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}