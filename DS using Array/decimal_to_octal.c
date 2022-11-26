#include<stdio.h>
int stack[30],top=-1;
void push(int);
int pop();
int main()
{
    int num,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%8;
        push(digit);
        num=num/8;
    }
    printf("The octal number is:");
    while(top!=-1)
    {
        printf("%d",pop());
        top--;
    }   
    return 0;
}
void push(int octalDigit)
{
    top++;
    stack[top]=octalDigit;
}
int pop()
{
    return stack[top];
}