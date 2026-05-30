#include <stdio.h>
int main ()
{
    int n,a,rev=0,ld;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        ld = n % 10;
        rev = rev*10 + ld;
        n = n / 10;
    }
    
    if(a==rev)
    printf("The given number is palindrome");
    else
    printf("The given number is not palindrome");
    return 0;
}