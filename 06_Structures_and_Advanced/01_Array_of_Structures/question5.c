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
    
    return 0;
}