#include <stdio.h>

int mean(int size, int arr[size]);

int main(int argc, int argv) {
    int i, n;
    printf("Enter the number of elements for the array\n");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++){
        printf("Enter array number: %d ", i);
        scanf("%d", &arr[i]);
    }

    // printf("\n The array elements are: \n");
    // for (i=0; i<n; i++){
    //     printf("\t arr[%d]: %d", i, arr[i]);
    // }

    int means;
    means = mean(n, arr);
    printf("\n%d\n", means);
    return 0;
}

int mean(int size, int arr[size]){
    int i, sum, mean;
    sum = 0;
    for (i=0; i<size; i++){
        sum += arr[i];
    }

    mean = sum / size;
    return mean;

}