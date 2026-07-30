// Swaping element in ascending order using bubble sort
#include<stdio.h>
#include<stdbool.h>
int main()
{

    int arr[5]={3,4,5,1,2};
    int n=5;
    printf("\nDisplay arrays element before swaping");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }

// bubble sort

for(int i=0;i<=n-1;i++) // This outer loop runs n-1 times, where n is the size of the array.
// Each iteration of this loop represents a pass through the array
{  bool flag=true; 
    for(int j=0;j<=n-1-i;j++) // This inner loop runs n-2 times because n-1 cover by j+1. 
    //It compares each element with the next element. // n-2 = n-1-i
    {
        if(arr[j]>arr[j+1]) //Checks if the current element is greater than the next element.
        {
            //If the condition is true, it swaps the two elements using a temporary variable temp.
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag = false; 
        }
    
    }

    if(flag ==true) break; // sorted 
}


printf("\nDisplay arrays element After swaping");
 for(int i=0;i<n;i++)

    {

      printf("\n%d",arr[i]);

    }

    return 0;
}