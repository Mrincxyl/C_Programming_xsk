//Given an array of integers number that is already sorted in non-decreasing order, 
//find the two numbers such that they add upto a specific target number
#include<stdio.h>
int main()
{
    int target = 8;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0, j=9;
    while(i<j)
    {
        if(arr[i]+arr[j]==target)
        {
            printf("\nFind");
        
            break;
        }
        else if (arr[i]+arr[j]>target)
        {
            j--;
        }
        else i--;
        
    }

    return 0;
}