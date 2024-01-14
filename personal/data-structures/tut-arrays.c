#include <stdio.h>

int main(void){
    int marks[5] = {1, 4, 2, 4, 5};

    // int marks2[10];

    // for (int i = 0; i < 10; i++)
    //     scanf("%d",&marks[i]);
    
    // for (int j = 0; j < 10; j++)
    //     printf("%d", marks[j]);

    // Operations on Arrays

        //traversing the data
    
    int k = marks[0];

    while (k <= marks[5])
    {
        printf("\n Welcome to learning about arrays!\n");
        printf("%d", marks[k]);
        k = k + 1;
    }
    
    return 0;
}