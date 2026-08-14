#include<stdio.h>

void Insertion(int arr[],int n)
{
    if(n<=1) return ;
    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0  && arr[j]<arr[j-1]; j--)
        {
            
                int temp= arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            

        }
    }


}


int main() 
{
    int arr[] = {3,-1,0,-5,2};

    int n = 5;

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
     
    Insertion(arr,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

   


    return 0;
}