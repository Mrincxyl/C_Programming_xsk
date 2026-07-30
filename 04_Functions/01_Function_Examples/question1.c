#include <stdio.h>

int add(int a, int b) //5- value of a, b stored in this dabba (int tell us return type so we wrote return a+b;)
{
    return a + b; // 6th add fun will be finished with number 
}

 int main() // 1-program start from this line
{
     int a; // 2- a nam ka ak dabba 
    printf("enter first number: ");
    scanf("%d", &a);
    int b;//3-b nam ka dabba
    printf("enter second number: ");
    scanf("%d", &b);
    int sum = add(a,b);//4- sum nam ka dabba and a fun add() was created and add(a,b) means value of a, b was passed = pass by value, calling add fn
printf("%d", sum);//7th addition of a,b will be store in sum and then print


    return 0;
}