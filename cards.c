#include<stdio.h>
#include<stdlib.h>

int main(){

    // strings should be allocated according to length, plus the null byte \0.
    char card[3]; // cards have the form value:suite.


    // Prompt the user for their card;
    printf("Enter your card:\t");
    scanf("%2s", card);

    int val = 0; // initialize the card value to 0.

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

    int count = 0; // initialize count.
    if(val >= 3 && val <= 6){
        count++;
    }
    else if(val == 10){
        count--;
    }

    printf("Your count is %d.\n", count);

    return 0;
}
