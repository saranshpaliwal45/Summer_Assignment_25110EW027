#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 5 + 5 = ?\n");
    printf("1.8 2.10 3.12\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie 2.James Gosling 3.Guido\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Total Score = %d/3", score);

    return 0;
}