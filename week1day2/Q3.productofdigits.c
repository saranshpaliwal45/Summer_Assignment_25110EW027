#include<stdio.h>

int main()
{
    int n,p=1,r;

    printf("Enter number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }

    printf("Product of digits = %d",p);

    return 0;
}