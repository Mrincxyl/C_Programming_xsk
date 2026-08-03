#include<stdio.h>

void modify(const int arr[], int size) {
   // arr[0] = 100;   // does this compile?
}

void func(int arr[][3]) { }     // valid
//void func1(int arr[][]) { }      // NOT valid — why?

int main()
{
    int arr[5] = {1,2,3,4,5};


     //
    modify(arr, 5);

    printf("%d\n",3[arr]);

    //Out-of-bounds access — what actually happens
    int arr1[3] = {1, 2, 3};
    printf("%d\n", arr1[5]);


    //
    int arr2[5] = {1, 2};
    printf("%d %d %d\n", arr2[2], arr2[3], arr2[4]);

    //2D

    int arrn[2][3]= {{1,2,3},
                     {4,5,6}};

    func(arrn);                 



   
}