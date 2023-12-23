#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {   arr[i]++;
        printf("%d ", arr[i]);
    }
}

int main()
{
    int slicesofMeal[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printArray(slicesofMeal, 9);
    
}
