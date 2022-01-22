#include<stdio.h>
#include<stdlib.h>

const int SIZE = 80;

int main(){

    double latitude;
    double longitude;
    char *info = malloc(SIZE*sizeof(char));

    int start = 0;

    printf("data = [\n");

    while(scanf("%lf %lf %79[^\n]s", &latitude, &longitude, info) == 3){
        if(start){
            printf(",\n");
        }
        else{
            start = 1;
        }

        if(latitude < -90 || latitude > 90){
            fprintf(stderr, "Error reading data.\n");
            printf("Missing data.\n");
        }

        if(longitude < -180 || longitude > 180){
            fprintf(stderr, "Error reading data.\n");
            printf("Missing data.\n");
        }

        printf("latitude: %lf, longitude: %lf, info: '%s'", latitude, longitude, info);
    }

    printf("\n]\n");


    free(info);
    return 0;
}
