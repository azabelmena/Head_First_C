struct pos{
    int x;
    int y;
};

/* These functions take move your ship through latitude and longitudes an
return your distance from your initial position. These are declared in
anticlockwise fashion in terms of the directions on the compass. They take the
current position as an argument and store them
*/
struct pos go_north(struct pos);
struct pos go_north_west(struct pos);
struct pos go_west(struct pos);
struct pos go_south_west(struct pos);
struct pos go_south(struct pos);
struct pos go_south_east(struct pos);
struct pos go_east(struct pos);
struct pos go_north_east(struct pos);

// Returns the compass direction given the position.
char *get_direction(struct pos);


int eat_rat();
void die_of_scurvy();
void aqcuire_facial_hair();
void make_one_sequel_too_many();
