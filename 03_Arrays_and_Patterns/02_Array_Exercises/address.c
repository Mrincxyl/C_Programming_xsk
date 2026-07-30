#include<stdio.h>
int main(){ //address
int a[4]={2,5,6,4};
for(int i=0; i<=4; i++){
    printf("%p\n", &a[i]);//p for address
}

    return 0 ;
}
 