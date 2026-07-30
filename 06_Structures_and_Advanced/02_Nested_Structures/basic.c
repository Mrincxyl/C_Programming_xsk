#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

typedef struct legendarypokemon
{   
    pokemon normal;
    char ability[10];

}lgpokemon;

int main()
{   
    lgpokemon mewto;
    mewto.normal.attack = 150;
    mewto.normal.hp=180;
    mewto.normal.speed=100;
    mewto.normal.tier = 'A';
    strcpy(mewto.normal.name,"MEWTO");
    strcpy(mewto.ability,"Heal");

    printf("\n%d",mewto.normal.attack);
    printf("\n%d",mewto.normal.hp);
    printf("\n%d",mewto.normal.speed);
    printf("\n%c",mewto.normal.tier);
    printf("\n%s",mewto.normal.name);
    printf("\n%s",mewto.ability);


    return 0;
}