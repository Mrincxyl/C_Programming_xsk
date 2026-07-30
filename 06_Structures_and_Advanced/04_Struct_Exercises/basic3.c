#include<stdio.h>
int main()
{
    struct pokemon
    { int hp;
    int speed;
    int attack;
    char tier; // 'S', 'A', 'B', 'C'

    } pikachu, charizard;
   
   
    
    printf("\nEnter attack of pikachu:");
    scanf("%d",&pikachu.attack);
    printf("\nEnter tier of charizard:");
    scanf(" %c",&charizard.tier); // space before %c to neglect error

//pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    
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