#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char words[20][20], temp[20];
    int i, j, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *p = strtok(str, " ");

    while(p != NULL)
    {
        strcpy(words[count], p);
        count++;
        p = strtok(NULL, " ");
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");

    for(i = 0; i < count; i++)
    {
        printf("%s ", words[i]);
    }

    return 0;
}