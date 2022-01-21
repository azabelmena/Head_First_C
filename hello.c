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

    char s[] = "How big is it?";
    char *t = s;

    printf("%d\n", sizeof(s));
    printf("%d\n", sizeof(t));
    printf("%x\n", &s);
    printf("%x\n", &t);

    int doses[] = {1, 2, 3, 1000};
    printf("Issue dose %d\n", 0[doses]);
    printf("Issue dose %d\n", 1[doses]);
    printf("Issue dose %d\n", 2[doses]);
    printf("Issue dose %d\n", 3[doses]);
    printf("Issue dose %d\n", 4[doses]);

    printf("Issue dose %d\n", *(doses));
    printf("Issue dose %d\n", *(doses+1));
    printf("Issue dose %d\n", *(doses+2));
    printf("Issue dose %d\n", *(doses+3));
    printf("Issue dose %d\n", *(doses+4));

    printf("%d\n", doses[3] == 3[doses]);

    return 0;
}
