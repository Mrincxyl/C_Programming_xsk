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

typedef struct Godpokemon
{   
    lgpokemon obs;
    char special_ability[20];

}Godpokemon;


int main()
{   
    lgpokemon mewto;
    mewto.normal.attack = 150;
    mewto.normal.hp=180;
    mewto.normal.speed=100;
    mewto.normal.tier = 'A';
    strcpy(mewto.normal.name,"MEWTO");
    strcpy(mewto.ability,"Heal");

    printf("\n****pokemon1****");
    printf("\n%d",mewto.normal.attack);
    printf("\n%d",mewto.normal.hp);
    printf("\n%d",mewto.normal.speed);
    printf("\n%c",mewto.normal.tier);
    printf("\n%s",mewto.normal.name);
    printf("\n%s",mewto.ability);

    // God Pokemon
    Godpokemon arceus;
    arceus.obs.normal.attack = 300;
    arceus.obs.normal.hp=180;
    arceus.obs.normal.speed=180;
    arceus.obs.normal.tier = 'A';
    strcpy(arceus.special_ability,"Dizzy");
    strcpy(arceus.obs.normal.name,"ARCEUS");
    strcpy(arceus.obs.ability,"DUALITY");

    printf("\n****pokemon2****");
    printf("\n%d",arceus.obs.normal.attack);
    printf("\n%d",arceus.obs.normal.hp);
    printf("\n%d",arceus.obs.normal.speed);
    printf("\n%c",arceus.obs.normal.tier);
    printf("\n%s",arceus.obs.normal.name);
    printf("\n%s",arceus.obs.ability);
    printf("\n%s",arceus.special_ability);



    return 0;
}