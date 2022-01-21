#include<stdio.h>
#include<stdlib.h>

void skip(char* message){
    printf("%s\n", message+6);
}

int main(){

    char *message = "Don't call me!";

    skip(message);

    return 0;
}
