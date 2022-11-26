//to impliment quee using two stack
#include<stdio.h>
#include<stdlib.h>
int stack1[30],stack2[30],top2=-1,top1=-1,size,poped=0;
void push();
void pop1();
void pop2();
void display();
void insert();
void delete();
int main()
{
    int choise;
    printf("Enter the size of quee:");
    scanf("%d", &size);
    while (1)
    {
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
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
void insert()
{
    int item;
    if(top1==size-1)
    {
        printf("Quee overflow\n");
    }
    else
    {
        printf("Enter item:");
        scanf("%d",&item);
        top1++;
        stack1[top1]=item;
    }
}
void delete()
{
    if(top1==-1)
    {
        printf("Quee under flow");
    }
    else
    {
        while (top1!=-1)
        {
            top2++;
            pop1();
            stack2[top2]=poped;
            top1--;
        }
        pop2();
        while (top2!=-1)
        {
            top1++;
            pop2();
            stack1[top1]=poped;
            top2--;
        }
    }
}
void display()
{
    if(top1==-1)
    {
        printf("Quee under flow\n");
    }
    else
    {
        printf("\nElement of Quee\n");
        for (int i = 0; i <= top1; i++)
        {
            printf("%d\n",stack1[i]);
        }
        
    }
}
void pop1()
{
    poped=stack1[top1];
    top1--;
}
void pop2()
{
    printf("The popped item is %d\n",stack2[top2]);
    top2--;
}