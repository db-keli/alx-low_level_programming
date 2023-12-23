#include <stdio.h>

int main()
{
    int myGrades[10] =  {70, 60, 80, 40, 79, 100};
    
    for (int i; i <= sizeof(myGrades); i++){
        printf("My Grade is: %d\n", myGrades[i]);
    }    

    return 0;

}