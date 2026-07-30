#include<stdio.h>
int main(){ // find maximum number
    int n,i, max, min;
    printf("enter n\n");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<=n-1; i++){
        printf("enter %dth value \n", i);
        scanf("%d", &a[i]);
    }
//for(i=0; i<=n-1; i++){
//if(max<a[i])
//max=a[i];
//}
//printf("max of all them=%d", max);
max=a[0];
for(i=1; i<n; i++){
    if(max<a[i])
    max=a[i];
}
printf("maximum element=%d\n", max);

min=a[0];
for(i=1; i<n; i++){
    if(min>a[i])
    min=a[i];
}
printf("min=%d", min);

    return 0;
} 