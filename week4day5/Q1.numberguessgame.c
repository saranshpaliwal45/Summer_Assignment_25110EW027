#include <stdio.h>

int main()
{
    int secret = 25, guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Correct Guess!");
    else
        printf("Wrong Guess! Number was %d", secret);

    return 0;
}