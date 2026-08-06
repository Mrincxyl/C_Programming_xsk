#include<stdio.h>
void counter()
{
    static int count = 0; // initialized ONCE, ever
    count++;
    printf("%d\n",count);
}
int main()
{
    counter();
    counter();
    counter();
}