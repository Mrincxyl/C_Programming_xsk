//Given an array and an integer k where k <= size of array
//,We need to return the kth smallest element of the array.
#include<stdio.h>
#include<limits.h>
int main()
{
int arr[6]={5,8,6,7,2,3};
int k;
printf("\nEnter K's value: ");
scanf("%d",&k);
// Selection Sort
for(int i=0; i<6;i++)
{
    int min = INT_MAX;
    int min_indx = -1;
    for(int j=i;j<6;j++)
    {
        if(min>arr[j])
        {
            min = arr[j];
            min_indx=j;
        }
    }
    int temp = arr[min_indx];
    arr[min_indx]=arr[i];
    arr[i]=temp;
}
for(int i=0; i<6;i++)
{
    printf("\n%d",arr[i]);
}
printf("\nThe %dth smallest element is %d.",k,arr[k-1]);

   return 0; 
}