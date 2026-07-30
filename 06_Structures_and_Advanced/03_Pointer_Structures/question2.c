// Create a structure "Person" having  attributes as age
//and weight. Access its stucture variable using pointers.
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

void change(Pokemon* p)
{

(*p).hp=120;
(*p).attack=160;
(*p).speed=60;
(*p).tier='A';
strcpy((*p).name,"Raichu");

    return ;
}

int main()
{ Pokemon pikachu;

Pokemon* p = &pikachu; 


pikachu.hp = 150;
pikachu.attack=120;
pikachu.speed=100;
pikachu.tier='A';
strcpy(pikachu.name,"PIKACHU");

printf("\nBefore function calling");
printf("\n%d",pikachu.hp);
printf("\n%d",pikachu.attack);
printf("\n%d",pikachu.speed);
printf("\n%c",pikachu.tier);
printf("\n%s",pikachu.name);

printf("\nAfter Calling Function");
change(&pikachu);
printf("\n%d",pikachu.hp);
printf("\n%d",pikachu.attack);
printf("\n%d",pikachu.speed);
printf("\n%c",pikachu.tier);
printf("\n%s",pikachu.name);

return 0;
}    
