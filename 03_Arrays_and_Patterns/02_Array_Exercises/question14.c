//WAP to copy elements of one array to another array in the reverse order.
#include<stdio.h>
int main()
{
    int arr2[5];
    int arr[5]= {1,2,3,4,5};
    //copy element in reverse 
    for (int i=0; i<5; i++)
    {
        arr2[i]=arr[5-(1+i)];
        printf("arr2[%d]=%d",i,arr2[i]);
        printf("\n");
    }
return 0;
}