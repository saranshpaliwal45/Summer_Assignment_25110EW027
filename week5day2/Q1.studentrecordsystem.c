#include <stdio.h>

int main()
{
    int roll[3], i;
    char name[3][20];

    for(i = 0; i < 3; i++)
    {
        printf("Enter Roll No and Name: ");
        scanf("%d%s", &roll[i], name[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %s\n", roll[i], name[i]);
    }

    return 0;
}