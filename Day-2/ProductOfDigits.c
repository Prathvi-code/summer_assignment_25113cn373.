#include  <stdio.h>
int main ()
{
    int prod=1,n,ld;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0)
    {
        ld = n % 10;
        prod = prod*ld;
        n = n/10;
    }
    printf("The product of the digits is: %d",prod);
    return 0;
}