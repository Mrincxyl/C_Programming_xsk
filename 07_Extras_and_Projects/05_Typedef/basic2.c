#include<stdio.h>
#include<string.h>
typedef struct Book
{
    char name[50];
    int pages;
    float price;

}Book;

int main()
{ Book a;
  Book b;
  Book c;

strcpy(a.name,"Math");
printf("\n%s",a.name);

a.pages = 200;
printf("\n%d",a.pages);

b.price=198.30;
printf("\n%f",b.price);
    
return 0;
}