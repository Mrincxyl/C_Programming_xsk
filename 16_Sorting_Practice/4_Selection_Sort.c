#include<stdio.h>
#include<stdbool.h>

void Selection(int arr[], int n)
{
    int k = 0,j;
    if(n<=1) return ;
    for(int i=0; i<n-1; i++)
    {
        int x = arr[i];
        bool v = false;
        for(j=i+1; j<n; j++)
        {

            if(arr[j]<x)
            {
                v = true;
                x = arr[j];
                k = j;

            }
            
        }
        if(v==true)
        {int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;}

    }

}


int main() 
{
    int arr[] = {3,-1,0,-5,2,-10};

    int n = 6;

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    Selection(arr,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
     
   

   


    return 0;
}