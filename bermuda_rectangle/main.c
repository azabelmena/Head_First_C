#include"bermuda_rectangle.h"
#include<stdio.h>
#include<stdlib.h>


int main(){

    struct pos Pos = {0,0};

    printf("We are at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos = go_north(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_north_west(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_west(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_south_west(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_south(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_south_east(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_east(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    Pos = go_north_east(Pos);
    printf("We are now at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    Pos.x = 0;
    Pos.y = 0;

    printf("We are back at %d latitiude, %d longitude arrr!\n", Pos.x, Pos.y);
    printf("%s\n", get_direction(Pos));

    return 0;
}
