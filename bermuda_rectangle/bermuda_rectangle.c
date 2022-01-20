#include"bermuda_rectangle.h"
#include<stdio.h>

void go_north(struct pos* position){
    position->y++;
}
void go_north_west(struct pos* position){
    position->x--;
    position->y++;
}


void go_west(struct pos* position){
    position->x--;
}
void go_south_west(struct pos* position){
    position->x--;
    position->y--;
}


void go_south(struct pos* position){
    position->y--;
}
void go_south_east(struct pos* position){
    position->x++;
    position->y--;
}


void go_east(struct pos* position){
    position->x++;

}
void go_north_east(struct pos* position){
    position->x++;
    position->y++;
}

// Returns the compass direction given the position.
char *get_direction(struct pos position){
    if(position.x == 0 && position.y == 0){
        return "Center";
    }
    else if(position.x == 0 && position.y > 0){
        return "North";
    }
    else if(position.x < 0 && position.y > 0){
        return "North-West";
    }
    else if(position.x < 0 && position.y == 0){
        return "West";
    }
    else if(position.x < 0 && position.y < 0){
        return "South-West";
    }
    else if(position.x == 0 && position.y < 0){
        return "South";
    }
    else if(position.x > 0 && position.y < 0){
        return "South-East";
    }
    else if(position.x > 0 && position.y == 0){
        return "East";
    }
    else if(position.x > 0 && position.y > 0){
        return "North-East";
    }
}

// Eat a rat and gain health (return value).
int eat_rat(){
    return 0;
}


// Die and trigger game over.
void die_of_scurvy(){
    return;
}

// Get facial hair.
void aqcuire_facial_hair(){
    return;
}

//??
void make_one_sequel_too_many(){
    return;
}
