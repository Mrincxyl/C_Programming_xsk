// Create a structure 'Date' that contains three member namely date, month, year
// Create 2 structure variable with different dates and now compare the two. 
// If the dates are equal then display message as "Equal" otherwise "Unequal".
#include<stdio.h>
#include<stdbool.h>
typedef struct Date
{  int day;
int month;
int year;
}date;
int main()
{
   date a,b; 
a.day = 18;
a.month = 11;
a.year=2004;
b.day = 18;
b.month = 11;
b.year = 2004;

if(a.day==b.day)
{
    if(a.month==b.month)
    {
        if(a.year==b.year)
        {
            printf("\nThe dates are same");
        }
        else
        printf("\nThe dates are different.");
    }
    else
        printf("\nThe dates are different.");
}
else
        printf("\nThe dates are different.");

    return 0;
}

