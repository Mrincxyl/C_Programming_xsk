#include<stdio.h>
#include<string.h>
typedef struct Book  // defining a structure named Book
{
    char name[50];
    int pages;
    float price;

}PW;

int main()
{ 
  PW a;
  PW b;
  PW c;

strcpy(a.name,"Math");
printf("\n%s",a.name);

a.pages = 200;
printf("\n%d",a.pages);

b.price=198.30;
printf("\n%f",b.price);
    
return 0;
}