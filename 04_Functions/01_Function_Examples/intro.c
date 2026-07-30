#include<stdio.h>
void greet(){ // its another fn. 
    printf("hello\n");
    printf("how are you?\n");

    return; // khatam finish
}
int main(){ // sabse pahle main fn run karta hai
   
    greet(); //call greet
     greet();
      greet();

    return 0;
}