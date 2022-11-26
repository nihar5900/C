#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 2, b = 5;
    printf("The a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("Now a is %d and b is %d\n", a, b);
    return 0;
}