#include<stdio.h>
#include<string.h>
typedef struct Pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
    // 4 attributes or objests of a pokemon

}Pokemon;

int main()
{ Pokemon pikachu;
pikachu.hp = 150;
pikachu.attack=120;
pikachu.speed=100;
pikachu.tier='A';
strcpy(pikachu.name,"PIKACHU");

// int* x -> store address of interger value
Pokemon* x = &pikachu; //
printf("\n%p",x);

printf("\n%p",&pikachu.hp);
printf("\n%p",&pikachu.attack);
printf("\n%p",&pikachu.speed);
printf("\n%p",&pikachu.tier);
printf("\n%p",pikachu.name);

return 0;
}    