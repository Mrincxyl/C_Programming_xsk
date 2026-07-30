#include<stdio.h>
#include<string.h>
struct book{
    char name[50];
    int pages;
    float price;


}Math, Physics, Chemestry;
int main()
{   
    strcpy(Math.name,"TWOdxMATH"); // copying the values of Math struct to the respective variables
    Math.pages = 450;
    Math.price = 180.67;

    strcpy(Chemestry.name,"TwodxCheme");  
    Chemestry.pages = 250;
    Chemestry.price = 160.30;

    strcpy(Physics.name,"TwodxPhy");  
    Physics.pages = 560;
    Physics.price = 250;


    printf("\n------Math Details------");
    printf("\n%d",Math.pages);
    printf("\n%f",Math.price);
    printf("\n%s",Math.name);

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