#include<stdio.h>
#include<stdlib.h>

void blackjack();

int main(){

    //print welcome message.
    printf("WELCOME TO BLACKJACK!\n");
    printf("Press x to stop the game.\n\n");

    blackjack(); // Start game.

    return 0;
}

void blackjack(){
    char card[3]; // cards have the form value:suite.

    int val = 0; // initialize the card value to 0.

    int count = 0; // initialize count.


    do{
        // Prompt the user for their card;
        printf("Enter your card:\t");
        scanf("%2s", card);

        switch(card[0]){
            case 'A': // If card chosen is an ace:
                do{
                    printf("1 or 11?\t");
                    scanf("%d", &val);
                }while(val != 1 && val != 11);

                break;

            // fall through on Joker, King, and Queen.
            case 'J':
            case 'K':
            case 'Q':

                val = 10; // set val for any other face card to 10.

                break;    // break from switch.

            default:
                // input validation, reprompt the user for a valid card.
                if(atoi(card) < 1 || atoi(card) > 10){

                    continue;
                }
                val = atoi(card); // set val to the value of the card.
        }

        count += val;   // add the value to the count.

        // if the user accumulates over 21, stop game, they lose.
        if(count <= 21){
            printf("Your count is %d, continue?\n", count);
        }
        else{
            printf("You lose.\n");

            card[0] = 'x';  // set exit automatically.
        }

    }while(card[0] != 'x' && card[0] != 'X');

    // If the user stops at exactly 21, they win.
    if(count == 21){
        printf("BLACKJACK!!!\n");
        printf("YOU WIN!!!\n");
    }

    return;
}
