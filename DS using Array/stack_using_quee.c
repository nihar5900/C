#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top;
int isEmpt(int s[])
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(int s[])
{
    if (top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void create()
{
    top=-1;
}
void push(int s[],int ele)
{
    if (isFull(s))
    {
        printf("Stack overflow");
    }
    else
    {
        printf("%d",s);
        top=top++;
        s[top]=ele;
    }
}
void pop(int s[])
{
    int x,y;
    y=isEmpt(s);
    if(y)
    {
        printf("Stack underflow");
    }
    else
    {
        x=s[top];
        top--;
        printf("%d is Popped",x);
    } 
}

void Top(int s[])
{
    int x;
    x=s[top];
    printf("The Top value is %d",x);
}
int main()
{
    int s[MAX],ele,choice;
    s[0]=3;s[1]=5;s[2]=1;
    create();
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Top\n4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element:");
            scanf("%d",ele);
            push(s,ele);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            Top(s);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You entered wrong choice");
            break;
        }
    }
    
    return 0;
}