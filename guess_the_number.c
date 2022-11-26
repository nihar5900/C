#include<stdio.h>

int main()
{
    int number,guess,nguess;
    srand(time(0));
    number=rand()%100+1;
    do
    {
        printf("Enter the number:");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Try lower\n");
        }
        else if (guess<number)
        {
            printf("Try higher\n");
        }
        else
        {
            printf("You sucsessfully found the number in %d guesses",nguess);
        }
        nguess++;
        
    } while (guess!=number);
    
    return 0;
}