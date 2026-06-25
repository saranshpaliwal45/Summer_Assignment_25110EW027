#include <stdio.h>

int main()
{
    int id, quantity;
    char item[50];

    printf("Enter Item ID: ");
    scanf("%d", &id);

    printf("Enter Item Name: ");
    scanf("%s", item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("\n--- Inventory Details ---\n");
    printf("ID = %d\n", id);
    printf("Item = %s\n", item);
    printf("Quantity = %d\n", quantity);

    return 0;
}