#include <stdio.h>
#include <stdlib.h>


typedef struct stuff{
    int arr[5];
} stuff;

int main()
{
    int arr[9] = {};
    stuff list = {arr};

    Insert(list.arr, 0, 5);
    return 0;
}

void Insert(int *arr, int index, int value){
    arr[index] = value;
}

void  Remove(int *arr, int index){
    arr[index] = NULL;
}

void Sort(int *arr){
    int i, j, temp;
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


