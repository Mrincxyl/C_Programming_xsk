#include <stdio.h>
int factorial(int x) // 5th- value of n store in x then pgrm run for step, //9th
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact; // 6th pgrm excuted with fact value //10th
}
int main() // 1st program starts from here
{
    int n; // 2nd
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", iCj);
        }
        printf("\n");
    }
    return 0;
}