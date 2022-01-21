/*
 * DISCLAIMER: This is a dangerous program.
 * Buffer overflows can cause unpredictable behaviour of programs. Protections
 * are implemented by the compiles (i.e. stack smashing) but they can be
 * circumvented.
 * */
#include<stdio.h>
/*#include<stdlib.h>*/

int main(){

    // Create a buffer on the stack.
    char buf[30];

    printf("Enter a string:\t");
    scanf("%s", buf);           // improperly escaped (?) scanf() can lead
                                // to stack based buffer overflows and lead to
                                // exploits.

    printf("%s\n", buf);

    printf("Enter a string:\t");
    scanf("%29s", buf);         // properly escaped scanf() which restircts
                                // input to 30 chars (29 from stdin and \0).

    printf("%s\n", buf);

    char food[20];

    printf("Enter your favourite food:\t");
    fgets(food, 5, stdin);

    return 0;
}
