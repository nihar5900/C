#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};
struct Node *start = NULL;
void create();
void delete ();
void travers();
int main()
{
    int choice;
    while (1)
    {
        printf("\n\n1.CREATE\n2.DISPLAY\n3.EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            travers();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
void create()
{
    int total, index, item;
    struct Node *temp, *ptr;
    printf("Enter the size you want:");
    scanf("%d", &total);
    for (index = 1; index <= total; index++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        if (temp == NULL)
        {
            printf("Memory not allocated\n");
        }
        else
        {
            printf("Enter value to store:");
            scanf("%d", &item);
            temp->info = item;
            temp->next = NULL;
            if (start == NULL)
            {
                start = temp;
            }
            else
            {
                ptr = start;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = temp;
            }
        }
    }
}
void travers()
{
    struct Node *temp;
    if (start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = start;
        printf("\nValue of list are\n");
        while (temp != NULL)
        {
            printf("%d\t", temp->info);
            temp = temp->next;
        }
    }
}
