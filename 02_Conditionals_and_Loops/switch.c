#include <stdio.h>
int main()
{
    int n1, n2;
    char op;
    printf("enter number and operator:\n");
    scanf("%d%c%d", &n1, &op, &n2);
    switch (op)
    {
    case '+':
        printf("the sum is\n%d%c%d=%d", n1, op, n2, n1 + n2);
        break;
    case '-':
        printf("the subs. is\n%d%c%d=%d", n1, op, n2, n1 - n2);
        break;
    case '*':
        printf("the multiplication is\n%d%c%d=%d", n1, op, n2, n1 * n2);
        break;
    case '/':
        printf("the division is\n%d%c%d=%d", n1, op, n2, n1 / n2);
        break;
    }

    return 0;
}