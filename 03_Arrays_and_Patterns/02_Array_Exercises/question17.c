//WAP to reverse middle element of  the array without using any extra array
#include<stdio.h>
void reverse(int arr[])
{
    int i=3, j=7;
    while(i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
  return;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr);
    for(int i=0; i<9; i++){
        printf("\n%d", arr[i]);
    }
    return 0;
}