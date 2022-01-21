#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *str){
    int len = strlen(str);
    char *rev = str+len-1;

    while(rev >= str){
        printf("%c", *rev);

        rev--;
    }
    printf("\n");

    return;
}

int main(){

    char *abc = "abc";
    printf("%s\n", abc);

    reverse(abc);

    return 0;
}
