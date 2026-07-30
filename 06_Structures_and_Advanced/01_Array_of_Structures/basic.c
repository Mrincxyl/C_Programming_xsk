#include<stdio.h>
#include<string.h>
typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    // 4 attributes or objests of a pokemon

}Pokemon;

int main()
{
   // Pokemon Pikachu;
   // Pokemon Charizard;
    //
    //
    //
   // Pokemon Mewto;
    // Instead of doing this we can make a Pokemon type array that stores different pokemons 
    // and every pokemon includes 4 attributes or objects in between them
    
    Pokemon arr[3];
    // it's mean we have declared a array of 3 pokemons 
    // and the first pokemon can be detect using arr[0] and this single pokemon includes  4 attributes
    // similarly the last pokemon can be detect using arr[3]

// 1st pokemon  
    strcpy(arr[0].name,"Pikachu");
    arr[0].attack=90;
    arr[0].hp = 96;
    arr[0].speed =160;
    arr[0].tier = 'A';


// 2nd pokemon
    strcpy(arr[1].name,"Charizard");
    arr[1].attack=90;
    arr[1].hp = 100;
    arr[1].speed =180;
    arr[1].tier = 'S';

// 3rd pokemon
    strcpy(arr[2].name,"mewto");  
    arr[2].attack=80;
    arr[2].hp = 80;
    arr[2].speed =120;
    arr[2].tier = 'A';

printf("\n--------Pokemon's---------");
for(int i=0; i<3; i++)
{   
    printf("\nName: %s",arr[i].name);
    printf("\nAttack: %d",arr[i].attack);
    printf("\nHP: %d",arr[i].hp);
    printf("\nSpeed: %d",arr[i].speed);
    printf("\nType: %c",arr[i].tier);
    printf("\n");
}
    return 0;
}