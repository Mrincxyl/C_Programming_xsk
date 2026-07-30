#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter the sides of a triangle:\n");
    scanf("%d%d%d", &x, &y, &z );
    if((x+y)>z && (y+z)>x && (z+x)>y){
        printf("x, y, z are the sides of a triangle");
    } 
    else{
        printf("invalid triangle");
    }

    return 0;
}