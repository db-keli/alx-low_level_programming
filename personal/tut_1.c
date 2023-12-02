#include <stdio.h>
#include <cs50.h>


#define UPPER 300
#define LOWER 0
#define STEP 20

int main(void){
    float fahr, celcius;
    /*int lower, upper, step;*/

    printf("Fahr\tCelcius\n");
    fahr = LOWER;
    
    while (fahr <= UPPER) {
        celcius = (5.0/9.0)*(fahr-32.0);
        printf("%f\t%f\n", fahr, celcius);
        fahr = fahr + STEP;
    }

    printf("For Loop Shit\n");
    for (fahr = 0; fahr <=300; fahr = fahr + 20) {
        celcius = (5.0/9.0)*(fahr-32);
        printf("%f\t%f\n", fahr, celcius);
    }

}
