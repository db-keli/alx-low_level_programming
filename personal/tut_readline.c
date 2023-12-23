#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char text[100];
    printf("Type a line of text: ");
    // scanf("%[^\n]s", text);
    // printf("\n You typed: %s", text);
    fgets(text, 100, stdin);
    text[strlen(text)-1] = '\0';

    for (int i = 0; i < strlen(text); i++)
    {
        printf("%d ", text[i]);
    }
    printf("\n");

    printf("\n You typed: %s", text);
    return 0;
}