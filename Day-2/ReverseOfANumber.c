#include <stdio.h>
int main ()
{
    int rev=0,n,a,ld;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        ld = n % 10;
        rev = rev*10 + ld;
        n = n/10;
    }
    printf("Reverse of the given number is: %d",rev);
    return 0;
}