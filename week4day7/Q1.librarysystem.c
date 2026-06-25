#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("\nBook Issued Successfully\n");
    printf("Book ID: %d\n", bookId);
    printf("Book Name: %s\n", bookName);

    return 0;
}