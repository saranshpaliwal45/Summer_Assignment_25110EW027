#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\nTotal = %d", total);
    printf("\nPercentage = %.2f", percentage);

    return 0;
}