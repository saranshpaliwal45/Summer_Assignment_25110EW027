#include <stdio.h>

int main()
{
    char name[50];
    float balance, deposit;

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\nUpdated Balance = %.2f", balance);

    return 0;
}