#include<stdio.h>
#include<stdlib.h>

const int SIZE = 10;

int main(){

    char *word = malloc(SIZE*sizeof(char));

    int i = 0;
    while(scanf("%9s", word) == 1){
        i++;

        if(i%2){
            fprintf(stdout, "%s\n", word);
        }
        else{
             fprintf(stderr, "%s\n", word);
        }
    }


    free(word);
    return 0;
}
