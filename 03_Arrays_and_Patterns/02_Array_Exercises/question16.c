//WAP to reverse the array without using any extra array
#include<stdio.h>
void reverse(int arr[])
{
    for(int i=0,j=5;i<j; i++,j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
  return;
}
int main(){
    int arr[6]={5,8,9,2,3,1};
    reverse(arr);
    for(int i=0; i<6; i++){
        printf("\n%d", arr[i]);
    }
    return 0;
}