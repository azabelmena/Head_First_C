#include<stdio.h>


int main(){

    int count = 11;     // init count to 11.
    if(count > 10){     // if count is greater than 1o
                        // Print the messege below.
        puts("The deck is hot, increase bet.");
    }


    int c = 10;         // init c to 10.
    while(c > 0){       // while c greter than 0.
                        // print the below messege.
        puts("I mustt not write code in classe.");

        c = c-1;        // decrement c.
    }

    char ex[20];        // init string of 20 chars (including \0).
    puts("Enter your boyfriend's name:");
    scanf("%19s", ex);  // get user input.
    printf("Dear %s, \n\n\t You're history.\n", ex); // break up with bf.

    char suit = 'H';    // Initialize char to H, "draw a heart."
    switch(suit){       // output conditionally on suit.
        case 'C':
            puts("Clubs"); // if C, print clubs.

            break;

        case 'D':
            puts("Diamonds."); // if D, print diamonds.

            break;

        case 'H':
            puts("Hearts."); // if H, print hearts (this will print).

            break;

        default:
            puts("Spades."); // else, print spades.
    }

    return 0;
}
