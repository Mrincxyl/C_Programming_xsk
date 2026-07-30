// Creat a structure type 'person' with name , salary and age as its attributes. 
//Declare and initialize 2 variable for this. print the name of the first person and age of the other.
#include<stdio.h>
#include<string.h>
struct Person
{
char name[50];
int age;
int salary;
};

int main()
{ struct Person Tohid;
struct Person Rehan;

strcpy(Tohid.name,"MrSK");
printf("\nName of the first person is:");
printf("\n%s",Tohid.name);

Rehan.age = 19;
printf("\nAge of the second person is:");
printf("\n%d",Rehan.age);

    return 0;
}