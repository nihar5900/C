#include<stdio.h>
char stack[30],top=-1;
void push(char);
char pop();
int main()
{
    char name;
    int digit,flag=0;
    printf("Enter your name:");
//    for(digit=0;digit<30;digit++)
    // {
        scanf("%c",&name);
        push(name);
        // flag++;
    // } 
    printf("Reverse of name is ");
    pop();
   for(digit=0;digit<30;digit++)
    {
        pop();
    } 
    for (int i = 0; i <30; i++)
    {
        printf("%d",stack[i]);
    }
    
    return 0;
}
void push(char ch)
{
    top++;
    stack[top]=ch;
}
char pop()
{
    return stack[top];
}