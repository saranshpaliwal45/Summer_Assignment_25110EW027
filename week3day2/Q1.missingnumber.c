#include<stdio.h>

int main()
{
    int a[100], n, i;
    int sum=0, total, missing;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n-1);

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    total = n*(n+1)/2;
    missing = total - sum;

    printf("Missing number = %d",missing);

    return 0;
}