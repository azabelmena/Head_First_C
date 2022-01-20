#include<stdio.h>
#include<stdlib.h>

void count_cards();

int main(){

    /*int input;*/
    /*printf("Enter an number:\t");*/
    /*scanf("%d", input);*/

    count_cards();

    return 0;
}

void count_cards(){
    // strings should be allocated according to length, plus the null byte \0.
    char card[3]; // cards have the form value:suite.

    int val = 0; // initialize the card value to 0.

    int count = 0; // initialize count.


    do{
        // Prompt the user for their card;
        printf("Enter your card:\t");
        scanf("%2s", card);

        switch(card[0]){
            case 'A':
                /*do{*/
                    /*printf("1 or 11?\t");*/
                    /*scanf("%i", val);*/
                /*}while(val != 1 && val != 11);*/

                val = 1;

                break;

            case 'J':
            case 'K':
            case 'Q':

                val = 10;

                break;

            default:
                val = atoi(card);
        }

        printf("The value of our card is %d\n", val);

        if(val >= 3 && val <= 6){
            count++;
        }
        else if(val == 10){
            count--;
        }

        printf("Your count is %d.\n", count);

        printf("Do you wish to continue?\n");
        printf("Enter x to stop, any other key to continue:\t");
        scanf("%2s", card);
    }while(card[0] != 'x' && card[0] != 'X');

    return;
}
