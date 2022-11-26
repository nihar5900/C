#include <stdio.h>

int fib_recursive(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return fib_recursive(a - 1) + fib_recursive(a - 2);
    }
}
int fib_itrative(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
   return a; 
}
int main()
{

    int num;
    printf("Enter the number you want Fibonachi series ");
    scanf("%d", &num);
    printf("The itrative form for number %d is %d\n", num,fib_itrative(num) );
    printf("the recursive form for number %d is %d\n", num, fib_recursive(num));
    return 0;
}
