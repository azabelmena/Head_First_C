#include<stdio.h>
#include<stdlib.h>

int main(){

    // strings should be allocated according to length, plus the null byte \0.
    char card[3]; // cards have the form value:suite.


    // Prompt the user for their card;
    printf("Enter your card:\t");
    scanf("%2s", card);

    int val = 0; // initialize the card value to 0.

    /*if(card[0] == 'J'){ // If Joker, King, or Queen, set val to 10.*/
        /*val = 10;*/
    /*}*/
    /*else if(card[0] == 'K'){*/
        /*val = 10;*/
    /*}*/
    /*else if(card[0] == 'Q'){*/
        /*val = 10;*/
    /*}*/
    /*else if(card[0] == 'A'){ // else if Ace, set value to 1 (or 11).*/
        /*val = 1;*/
    /*}*/
    /*else{*/
        /*val = atoi(card); //else, return the card value.*/
    /*}*/

    /*
     * One line conditionals of the form:
     * if(condition)
     *     statement;
     *
     * are valid and can be used without braces, however its much cleaner using
     * if statements with braces all the time.
     * */

    // Alternatively:

    // Switch statements are neat but should be avoided unless the it is obvious
    // the program would benefit from it (such as this one). Switch statements
    // can always be brought into if/else statements.
    switch(card[0]){
        case 'A':
            val = 1;

            break;

        // Cases without breaks will "fall thorugh" to the next case, be wary.
        // empty cases just get passed over (unless there is a break).
        case 'J':

        case 'K':

        case 'Q':
            val = 10;

            break;

        default:
            val = atoi(card);
    }

    printf("The value of our card is %d\n", val);

    return 0;
}
