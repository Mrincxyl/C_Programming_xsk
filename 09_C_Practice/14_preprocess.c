#include <stdio.h>
#define display( n ) printf( "a" #n " = %d", a##n )
int main()
{
   display(3);
}