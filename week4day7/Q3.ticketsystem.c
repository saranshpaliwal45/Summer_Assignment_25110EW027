#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float amount;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    amount = tickets * 200;

    printf("\nBooking Successful\n");
    printf("Total Amount = %.2f\n", amount);

    return 0;
}