#include <stdio.h>
//#include <string.h>

typedef struct Pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    // 4 attributes or objects of a Pokemon
} Pokemon;

int main() {
    Pokemon arr[3]; // Array to hold 3 Pokemon

    printf("\n*****Enter Pokemons Details*****");
    for (int i = 0; i < 3; i++) {
        printf("\nEnter Name: ");
        scanf(" %[^\n]", arr[i].name); // Note the space before % to consume any whitespace
        printf("Enter HP: ");
        scanf("%d", &arr[i].hp);
        printf("Enter Speed: ");
        scanf("%d", &arr[i].speed);
        printf("Enter Attack: ");
        scanf("%d", &arr[i].attack);
        printf("Enter Tier (Single Character): ");
        scanf(" %c", &arr[i].tier); // Note the space before % to skip any newline
        printf("\n");
    }

    printf("\n--------Pokemon's---------");
    for (int i = 0; i < 3; i++) {
        printf("\nName: %s", arr[i].name);
        printf("\nAttack: %d", arr[i].attack);
        printf("\nHP: %d", arr[i].hp);
        printf("\nSpeed: %d", arr[i].speed);
        printf("\nType: %c", arr[i].tier);
        printf("\n");
    }

    return 0;
}
