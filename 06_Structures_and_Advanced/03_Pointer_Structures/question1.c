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

int main()
{ Pokemon pikachu;

/*pikachu.hp = 150;
pikachu.attack=120;
pikachu.speed=100;
pikachu.tier='A';
strcpy(pikachu.name,"PIKACHU");*/

// int* x -> store address of interger value
Pokemon* p = &pikachu; //

printf("\n%p",p);


(*p).hp=120;
(*p).attack=160;
(*p).tier='A';
strcpy((*p).name,"Pikachu");
printf("\n%d",pikachu.hp);
printf("\n%d",pikachu.attack);
printf("\n%c",pikachu.tier);
printf("\n%s",pikachu.name);


return 0;
}    
