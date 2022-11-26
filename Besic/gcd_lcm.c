#include <stdio.h>
int gcd(int n1, int n2)
{
    int index,gcd;
    if (n1 > n2)
    {
        for (index = 1; index < n1; index++)
        {
            if (n1%index==0 && n2%index==0)
            {
                gcd=index;
            }   
        }    
    }
    else
    {
        for (index = 1; index < n2; index++)
        {
            if (n1%index==0 && n2%index==0)
            {
                gcd=index;
            }   
        }    
    }
    return gcd;
}
int main()
{
    int n1, n2,lcm=1;
    printf("Enter the number you want gcd and lcm of:");
    scanf("%d%d", &n1, &n2);
    printf("The GCD is %d\n",gcd(n1,n2));
    
    //for lcm  
    lcm=(n1*n2)/gcd(n1,n2);
    printf("The LCM is %d\n",lcm);


    return 0;
}