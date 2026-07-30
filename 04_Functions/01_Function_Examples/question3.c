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
    int nfact = factorial(n); //4th function call //7th fact value store in nfact
    int rfact = factorial(r); //8th call // 11th fact value store in rfact
    int nrfact = factorial(n - r);
    int nCr = nfact / (rfact * nrfact);
    printf("\n The factorial is :%d", nCr);
    return 0;
}