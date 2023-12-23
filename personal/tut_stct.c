#include <stdio.h>

typedef struct
{
    int length;
    int width;
} rectangle;

int main()
{
    rectangle myrectangle = { 5, 10};
    printf("The length is: %d and width is %d\n", myrectangle.length, myrectangle.width);

    return 0;
}