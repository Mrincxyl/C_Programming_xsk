#include<stdio.h>




void BubbleSort(int arr[], int n)
{

    for(int i=1; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<=n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                count++;

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
        if(count == 0)
        {
            break;
        }

    }


}



int main()
{
    int arr[] = {1,2,3,4,5};

    int n = 5;

    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }

    BubbleSort(arr,n);
    printf("After Bubble sort\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
   
    
    return 0;
}