#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
1.Declare a file pointer
2.Open a file using fopen function
3.Process the file using the suitable function
4.Closing the file using fclose function
*/

int main(){
    FILE *file;
    file = fopen("file.txt", "w");
    //Processing of the file
        fprintf(file, "%s", "Hello World!");
    fclose(file);
    return 0;
}