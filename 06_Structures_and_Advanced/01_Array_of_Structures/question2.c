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
Pokemon a,b;
  
// 1st pokemon  
strcpy(a.name,"Pikachu");
a.attack=90;
a.hp = 96;
a.speed =160;
a.tier = 'A';

b=a; // deep copy
b.attack = 120;
printf("\n%d",a.attack);
printf("\n%d",b.attack);
printf("\n%d",a.hp);
printf("\n%d",b.hp);





    return 0;
}