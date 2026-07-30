#include <stdio.h>

struct pokemon {
    // they are called attributes e.g : hp, name, attack............
    int hp;  
    int speed;
    int attack;
    char tier; // 'S', 'A', 'B', 'C'
};

int main() {
    struct pokemon pikachu;
    struct pokemon charizard;

    // Input for Pikachu
    printf("Enter attack of Pikachu: ");
    scanf("%d", &pikachu.attack);

    pikachu.hp = 50; // Accessing using dot operator e.g: pikachu.hp // in other way accessing 
    // is that user_define_datatype_name.attributes
    
    pikachu.speed = 100;
    pikachu.tier = 'A';

    // Input for Charizard
    // Use a space before %c to consume any leftover newline character
    printf("Enter tier of Charizard (S, A, B, C): ");
    scanf(" %c", &charizard.tier);  // Added space before %c to ignore any whitespace
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;

    // Output the details of both Pokémon
    printf("\n--- Pokemon Details ---\n");
    printf("Pikachu:\n");
    printf("Attack: %d\n", pikachu.attack);
    printf("HP: %d\n", pikachu.hp);
    printf("Speed: %d\n", pikachu.speed);
    printf("Tier: %c\n", pikachu.tier);

    printf("\nCharizard:\n");
    printf("Attack: %d\n", charizard.attack);
    printf("HP: %d\n", charizard.hp);
    printf("Speed: %d\n", charizard.speed);
    printf("Tier: %c\n", charizard.tier);

    return 0;
}
