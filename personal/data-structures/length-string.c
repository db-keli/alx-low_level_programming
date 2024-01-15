#include <stdalign.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[12]= "Hello world";
    while (str[i] != '\0')
        i += 1;
    int length = i;

    printf("%d\n", i);
    return 0;
}