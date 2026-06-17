#include <stdio.h>

int main()
{
    int a[100], n, i, j, count;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Duplicate Elements: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                count = 1;
                break;
            }
        }

        if(count == 1)
            continue;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}