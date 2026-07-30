// Given an integer array arr, move all 0's to the end of it while maintaining
//the relative order of the non-zero elements. using bubble sort
#include<stdio.h>
int main()
{
    int arr[9]={5,0,2,0,0,4,1,3,0};
    //Bubble sort c
    for(int i=0; i<9;i++)
    {
        for(int j=0; j<=9-1-i;j++)
        {
            if(arr[j]==0)
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<9;i++){
        printf("\n%d",arr[i]);
    }


    return 0;
}