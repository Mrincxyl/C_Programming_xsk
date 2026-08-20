#include<stdio.h>
#define MAX 20


void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

int partition(int arr[MAX],int l,int h)
{
     int pivot = arr[l];
    int i = l+1, j = h;

    while(1)
    {
        while(i<=h && arr[i]<=pivot) i++;

        while(arr[j]>pivot) j--;

        if(i<j) swap(&arr[i],&arr[j]);
        else break;
 
    }
    swap(&arr[l],&arr[j]);

    return j;
}

int partitioning2(int arr[MAX],int l, int h)
{
    int pivot = arr[h];

    int i = l-1;

    for(int j=0; j<h; j++)
    {

    }

    swap(&arr[i+1],&arr[h]);

    return 
}



void quicksort(int arr[MAX],int l,int h)
{
    if(l<h)
    {
        int p = partition(arr, l, h);

        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }

}

int main()
{
    int arr[MAX] =  {50,70,60,90,40,80,10};

    int l=0,size=7, h=size-1;

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    quicksort(arr,l,h);

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");



} 