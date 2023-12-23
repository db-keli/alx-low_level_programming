#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Creation
//Opening
//Closing
//Writing data
//Closing

//1. Declare file pointer
//2. Open file using fopen method
//3. Process the file using the suitable function
//4. Close file with fclose function

// fopen fclose getc putc getw putw fprintf fscanf fgets, fputs, feof

int main()
{
    FILE *file;
    char text[1024];
    file = fopen("names.txt", "w");
    fgets(text, 100, stdin);
    //processing of the file
        fprintf(file, "%s", text);
    //
    fclose(file);

    file = fopen("names.txt", "r");
    char ch[100];
    printf("%s", fgets(ch, 100, file));
    fclose(file);

    return 0;
}
