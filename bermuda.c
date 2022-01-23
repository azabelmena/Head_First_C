#include<stdio.h>
#include<stdlib.h>

const int SIZE = 80;

int main(){

    double latitude;
    double longitude;
    char *info = malloc(SIZE*sizeof(char));

    while(scanf("%lf %f %79[^\n]s", &latitude, &longitude, info) == 3){
        if(latitude > 34 || latitude < 26){
            if(longitude > -76 || longitude < -64){
                printf("%lf\t%lf\t%s\n", latitude, longitude, info);
            }
        }
    }

    free(info);

    return 0;
}
