#include <stdio.h>
#define MAX 10

int find_smallest(int arr[], int n);

int main(void)
{   
    int n, arr[MAX];
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i );
        scanf("%d", &arr[i]);
    }
    int smallest = find_smallest(arr, n);

    printf("Smallest element is: %d", smallest);

    return 0;
}

int find_smallest(int arr[10], int n)
{
    int smallest = arr[0];
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    
    return smallest;
}
