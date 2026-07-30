// A record contains name of the cricketer, his age, number of test matches that he had played and 
// the average runs that he had scored in each test match. Creat an array of structure to hold
// records of 20 such cricketer and then WAP to read these records
#include<stdio.h>
typedef struct cricketers
{
char name[20];
int age;
int matches;
float avg;
}players;
int main()
{ players arr[20];

printf("\n__________Enter Players Details__________");
for(int i=0; i<2; i++)
{
printf("\nEnter name:");
scanf(" %[^\n]",&arr[i].name);
printf("\nEnter age:");
scanf("%d",&arr[i].age);
printf("\nEnter matches:");
scanf("%d",&arr[i].matches);
printf("\nEnter avg score:");
scanf("%f",&arr[i].avg);
printf("\n");

}
printf("\n__________Displayed Players Details__________");
for(int i=0; i<2; i++)
{
printf("\nname: %s",arr[i].name);
printf("\nage: %d",arr[i].age);
printf("\nmatches: %d",arr[i].matches);
printf("\navg score: %f",arr[i].avg);
printf("\n");

}


    return 0;
}