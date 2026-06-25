#include <stdio.h>

int main()
{
    int id;
    char name[50];

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("\nEmployee Details\n");
    printf("ID = %d\n", id);
    printf("Name = %s\n", name);

    return 0;
}