#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str[10];
    printf("Type something and lemmme say it back to you!\n");
    gets(str);
    printf("Okayyy\n");
    printf("%s\n", str);

    return 0;
}