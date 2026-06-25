#include <stdio.h>

void display(char name[], int accno, float balance)
{
    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", accno);
    printf("Account Holder : %s\n", name);
    printf("Balance        : %.2f\n", balance);
}

int main()
{
    int accno;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accno);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Account Balance: ");
    scanf("%f", &balance);

    display(name, accno, balance);

    return 0;
}