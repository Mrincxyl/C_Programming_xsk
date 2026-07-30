 #include<stdio.h>
 int main(){
    int r, c,  n;
    
    printf("enter n\n");
    scanf("%d", &n);
    for(r=1; r<=n; r++){
       int a=1;
        for(c=1; c<=r; c++){
printf("%d ", a);
a=a+2;
        }
        printf("\n");

    }

    return 0;
 }