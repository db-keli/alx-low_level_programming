#include <stdio.h>

int main(void)
{
    int n, pos, val;
    int array[5] = {0, 1, 2, 3, 4};
    n = 5;
    pos = 3;
    val = 5;
    int i = n;
    
    for(i = n - 1; i >= pos; i--)
        array[i + 1] = array[i];
    array[pos] = val;
    n = n + 1;
    for (int j = 0; j < n; j++)
        printf("%d ", array[j]);

    return 0;
}