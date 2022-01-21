#include<stdio.h>

int main(){

    /*const char *cards = "JQK";*/
    char cards[] = "JQK";
    char card_a = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = card_a;

    printf("%s\n", cards);

    return 0;
}
