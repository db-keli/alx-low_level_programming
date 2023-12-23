#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int c = fgetc(stdin);
    printf("printed char: %c\n", c);

    return 0;
}