#include "stdlib.h"
#include "stdio.h"

typedef struct student
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
} student;

typedef struct
{
    int x;
    int y;
}POINT;

void display(POINT);

int main()
{
    // student stud1;
    // printf("Enter your name: ");
    // scanf("%s", stud1.name);
    // printf("Enter Your row number: ");
    // scanf("%d", &stud1.r_no);
    // printf("Enter your course: ");
    // scanf("%s", stud1.course);
    // printf("Enter your fees: ");
    // scanf("%f", stud1.fees);

    POINT p1 = {2, 3};
    display(p1);


    return 0;
}

void display(POINT p){
    printf("The coordinates of the point are: %d %d", p.x , p.y);
}