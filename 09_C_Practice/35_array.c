#include<stdio.h>
int main()
{
    int arr[] = {5,20,0,0,0,1,0}; //-> 5,3,2,0,0 This will be answer , We have to solve this without using any extra/auxalary array

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    int i=0, j=0;

    while(j<n)
    {
        while(arr[i]!=0)
        {
            i++;
        }
        j = i+1;
        while(arr[j]==0)
        {
            j++;
        }
        if(j<n)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        else{
            break;
        }
        i++;
        j++;

    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    } 


    return 0;
}