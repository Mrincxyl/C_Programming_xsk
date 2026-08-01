#include<stdio.h>

struct Student{
    int roll;
    char grade;
    float marks;
};

int main()
{
    struct Student xol;
    xol.roll = 3;
    xol.grade = 'A';
    xol.marks = 86.2548;

    printf("Roll: %d\nGrade: %c\nMarks: %.2f\n",xol.roll,xol.grade,xol.marks);


}