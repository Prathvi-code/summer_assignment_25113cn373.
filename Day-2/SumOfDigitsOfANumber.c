#include <stdio.h>
int main ()
{
    int sum=0,n,ld;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n/10;
    }
    printf("Sum of digits of the given number is: %d", sum);
    return 0;
}