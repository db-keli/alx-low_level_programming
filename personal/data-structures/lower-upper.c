#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    char str[12] = "hello world";
    char upperstr[12];
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            upperstr[i] = str[i] - 32;
        else
            upperstr[i] = str[i];
        
        i += 1;
    }
    
    upperstr[i] = '\0';
    // for(i = 0; i < 12; i++)
    //     printf("%c", upperstr[i]);
    puts(upperstr);
    return 0;
}