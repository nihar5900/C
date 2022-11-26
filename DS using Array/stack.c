#include <stdio.h>
#include <stdlib.h>
int stack[30], top = -1, size, item;
void push(int);
void display();
int pop();
int main()
{
    int choise;
    printf("Enter the size of stack:");
    scanf("%d", &size);
    while (1)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
void push(int item)
{
    if (top == size - 1)
    {
        printf("Stack over flow\n");
    }
    else
    {
        printf("Enter the number:");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}
int pop()
{
    printf("Popped item is:%d\n", stack[top]);
    top--;
}
void display()
{
    printf("\nStack items\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }
}