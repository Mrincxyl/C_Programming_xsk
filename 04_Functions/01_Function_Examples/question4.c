#include <stdio.h>
int factorial(int x) //5th- value of n store in x then pgrm run for step, //9th
{ int fact=1;
    for (int i = 1; i <= x; i++)
    {
        fact=fact*i;
    }
    return fact; //6th pgrm excuted with fact value //10th
}
int main() // 1st program starts from here
{
    int n;//2nd
    printf("Enter n: ");
    scanf("%d", &n);
    int r;//3rd
    printf("Enter r: ");
    scanf("%d", &r);
    
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("\n The factorial is :%d", nCr);
    return 0;
}