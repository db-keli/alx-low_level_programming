#include <stdio.h>

int main(void)
{
    int i, sum, n, arr[50];
    float mean;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    mean = sum / n;

    printf("Mean: %f\n", mean);

    return 0;
}