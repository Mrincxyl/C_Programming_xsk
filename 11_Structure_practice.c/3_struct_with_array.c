#include<stdio.h>

struct Student{
    char name[20];
    int marks[3];

};



void printStudent(struct Student s)
{
    printf("%s\n",s.name);

    for(int i=0; i<3;i++)
    {
        printf("%d ",s.marks[i]);
    }
}


void printStudent2(struct Student *s)
{
    printf("%s\n",s->name);

    for(int i=0; i<3;i++)
    {
        printf("%d ",s->marks[i]);
    }
}

int main()
{
    struct Student s1 = {"Alice",{80,90,85}};

    printStudent(s1);

    printStudent2(&s1);


    
}