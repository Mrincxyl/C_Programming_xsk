#include<stdio.h>

void insert(int arr[],int a,int n)
{
    int i=0;

    for(i; i<n; i++)
    {
        if(a<arr[i])
        {
           int j = n-1;

           while(j>=i)
           {
            arr[j+1] = arr[j];
            j--;
           }
           break;

        
        }
    }

    arr[i] = a;

}

int main() 
{
    int arr[10] = {2,6,10,15,20,25,30};

    int n = 7;

    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }

    int x = 12;

    insert(arr,x,n);


     for(int i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }


    
   
    
    return 0;
}