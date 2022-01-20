#include<stdio.h>
#include<stdlib.h>

int main(){

    puts("Hello, world!");
    printf("Hello, world!\n");

    int n = atoi("Hello World!\n");


    printf("%d\n", n);

    // see man 3 atoi.
    n = atoi(" 11 Hello 1 World!\n");

    printf("%d\n", n);

    return 0;
}
