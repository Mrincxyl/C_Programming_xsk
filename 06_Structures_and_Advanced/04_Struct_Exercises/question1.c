#include<stdio.h>
#include<string.h>
struct book{
    char name[50];
    int pages;
    float price;


}Math, Physics, Chemestry;
int main()
{   
    // Math.name = "TwodxMath"; error
    Math.name[0] = 'T';
    Math.name[1] = 'W';
    Math.name[2] = 'O';
    Math.name[3] = 'd';
    Math.name[4] = 'x';
    Math.name[5] = 'M';
    Math.name[6] = 'A';
    Math.name[7] = 'T';
    Math.name[8] = 'H';

    Math.pages = 450;
    Math.price = 180.67;

   // Chemestry.name = "TwodxCheme";  error
    Chemestry.name[0] = 'T';
    Chemestry.name[1] = 'W';
    Chemestry.name[2] = 'O';
    Chemestry.name[3] = 'd';
    Chemestry.name[4] = 'x';
    Chemestry.name[5] = 'C';
    Chemestry.name[6] = 'H';
    Chemestry.name[7] = 'E';
    Chemestry.name[8] = 'M';
    Chemestry.pages = 450;
    Chemestry.price = 160.30;

    // Physics.name = "TwodxPhy";  error
    Physics.pages = 450;
    Physics.price = 250;

    printf("\n------Math Details------");
    printf("\n%d",Math.pages);
    printf("\n%f",Math.price);
    printf("\n%s",Math.name); //    

    printf("\n------Chemestry Details------");
    printf("\n%d",Chemestry.pages);
    printf("\n%f",Chemestry.price);
    printf("\n%s",Chemestry.name);

    printf("\n------Physics Details------");
    printf("\n%d",Physics.pages);
    printf("\n%f",Physics.price);
    printf("\n%s",Physics.name);




    return 0;
}