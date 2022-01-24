#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    char *delivery = "";
    char ch;

    int thick = 0;

    while((ch = getopt(argc, argv, "d:t")) != EOF){
        switch(ch){
            case 'd':
                delivery = optarg;
                break;

            case 't':
                thick  = 1;
                break;

            default:
                fprintf(stderr, "Unknown option:%s\n", optarg);

                return 2;
        }

    }

    argc -= optind;
    argv += optind;


    if(thick){
        printf("Thick Crust.\n");
    }

    if(delivery[0]){
        printf("Tone delivered: %s\n", delivery);
    }

    printf("Ingredients: ");
    for(int i = 0; i < argc ; i++){
        printf("%s\t", argv[i]);
    }
    printf("\n");

    return 0;
}
