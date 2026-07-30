#include <stdio.h>
void england() // came to this line
{
    printf("You are in England\n"); // 6 print
    return;                         // 7 khatham eng.
}
void australia() // compiler came to this line for calling aust.
{
    printf("You are in Australia\n"); // 4 print 
    england();                        // 5 call eng.
    return;                           // 8 from back to eng finish aust.
}
int main()
{void india();
    india();  // 1 calling india
    return 0; // 10 at the end main fn terminated after every command
}
void india() // compiler came to this line ckz calling india
{
    printf("You are in India\n"); // 2  print
    australia();                  // 3 call australia
    return;                       // 9 after finish aust. finish india
} 