#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = -9999;
    second = -9999;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }

    if(second == -9999)
        printf("Second Largest Element Not Found");
    else
        printf("Second Largest Element = %d", second);

    return 0;
}