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

// 1st function
/*void fun(pokemon p)
{
    printf("\n%d",p.attack);

    return ;
}*/

// 2nd function
void change(pokemon p)
{
    p.attack=100;
    return ; 
}

int main()
{   
    // Structure are passed by value

    pokemon pikachu;
    pikachu.attack=150;
    change(pikachu);
    printf("\n%d",pikachu.attack);
    //fun(pikachu);

    return 0;
}