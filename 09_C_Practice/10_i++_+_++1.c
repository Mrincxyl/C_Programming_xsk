#include<stdio.h>
int main()
{
    int i=1;
    i = i++ + ++i;

    printf("%d \n",i);

    int x = 5;
    int y = (x++,x);
    printf("%d\n",y);

    int k = (10,15); //->"The comma operator always evaluates left-to-right, but the value of the whole expression is only the rightmost one — everything else is evaluated (for side effects) and then discarded."
    printf("%d \n",k);
}