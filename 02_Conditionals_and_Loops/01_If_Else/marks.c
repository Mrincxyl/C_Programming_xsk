
   #include<stdio.h>
int main()
{
    float n;
    printf("enter the percentage:\n");
    scanf("%f", &n);
    if (n > 80)
    {
        printf("Excellent");
    }
    else if (n > 70)
    {
        printf("Very good");
    }
    else if (n > 60)
    {
        printf("Good");
    }
    else if (n > 50){
        printf("can do better");
} 
    else if (n > 40){
        printf("average");
    
    return 0;
    }