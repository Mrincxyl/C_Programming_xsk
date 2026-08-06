#include<stdio.h>

union Data{
    int i;
    float j;
    char ar[20];
};

union Mixed{
    int i;

    char c[4];

};

int main()
{
    union Data d;

    d.i = 10;
    printf("d.i = %d\n",d.i);


    d.j = 12.33;

    printf("%f\n",d.j);


    union Mixed v;
    v.i = 5;

    printf("%d\n",v.c[0]);

}