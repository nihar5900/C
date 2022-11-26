#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, total;
    printf("Enter the total size:");
    scanf("%d", &total);
    ptr = (int *)malloc(total * sizeof(int));
    if (ptr == NULL)
    {
        printf("There is no value\n");
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            printf("Enter value:");
            scanf("%d", ptr + i);
        }

        for (int i = 0; i < total; i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    return 0;
}