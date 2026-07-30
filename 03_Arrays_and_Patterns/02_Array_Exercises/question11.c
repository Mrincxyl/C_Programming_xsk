#include <stdio.h>
#include <limits.h> //limit.h header file determines max and min values
int main()
{ // find maximum number
    int i;
    // printf("enter n\n");
    // scanf("%d", &n);
    int a[5]={1,2,3,4,5};
    int max = INT_MIN; // int_min represents minimum integer value
    int smax = INT_MIN;
    
    for (i = 0; i <= 4; i++)
    {
       if(max<a[i])
       { smax= max;
       max=a[i];
       }
    }
   // for (i = 0; i <= 4; i++)
   // {
   //    if(a[i]!=max && smax <a[i])
    //   smax=a[i];
   // }
    printf("%d" , smax);
    return 0;
}