#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    char str1[12] = "hello world";
    char str2[12];
    i = 0;
    j = 0;

    while (str1[i] != '\0')
    {
        for (i = 0; i < 12; i++)
        {
            str2[i] = str1[j];
            j++;
        }
    }

    str2[i] = '\0'; 
    puts(str1);
    puts(str2);

    return 0;

}