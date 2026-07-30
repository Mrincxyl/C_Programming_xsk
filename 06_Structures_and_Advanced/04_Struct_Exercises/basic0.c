#include<stdio.h>
int main()
{
    struct pokemon // structure declaration
    { int hp; // member variable declaration
    int speed; // member variable declaration
    int attack; // member variable declaration
    char tier; // 'S', 'A', 'B', 'C' // member variable declaration

    };
    struct pokemon pikachu; // structure variable declaration
   
    
    printf("\nEnter attack of pikachu:");
    scanf("%d",&pikachu.attack);
    //pikachu.attack = 60;
    pikachu.hp = 50; // assigning value to member variable
    pikachu.speed = 100;
    pikachu.tier = 'A';
    
     struct pokemon charizard; // structure variable declaration
    printf("\nEnter tier of charizard:");
    scanf("%c",&charizard.tier);
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    
    //charizard.tier='S';

    printf("\n%d",charizard.attack);
    printf("\n%c",charizard.tier);
    printf("\n%d",pikachu.attack);
    printf("\n%c",pikachu.tier);



return 0 ;
}