#include<stdio.h>
#include<stdlib.h>
int main()
{

int a = sizeof(int); // an integer variable take 4 bytes size 0471010106116,
printf("\n%d",a);

int b = sizeof(float); // an float variable take 4 bytes size 
printf("\n%d",b);

int c = sizeof(char); // an character variable take 1 bytes size 
printf("\n%d",c);

int *ptr =(int*) malloc(10*4); // malloc is built in function of stdlib header file
// so we have to include  #include<stdlib.h>
printf("%d",*ptr);

    return 0;
}