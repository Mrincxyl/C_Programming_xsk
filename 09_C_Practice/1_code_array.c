#include<stdio.h>


int main()
{
    int A[5];

    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    printf("Size of A[5] is: %zu\n",sizeof(A));

    printf("Size of A[5] is: %zu\n",sizeof(A[1]));



    int B[] = {12,11,15,14,10,14,30};

    printf("Size of B[] is: %zu\n",sizeof(B));


    int C[10] = {12,11,15,14,10,14,30};

    printf("Size of C[] is: %zu\n",sizeof(C));

    printf("%d , %d\n",C[6],C[9]);



    int n;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

   // int Arr[n] = {15,12}; //->variable "Arr" may not be initialized

    int Arr[n];

    Arr[0] = 0;

    printf("%d , %d",Arr[0] , Arr[2]);


    

    return 0;
}