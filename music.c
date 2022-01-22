#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZE_1 = 5;
const int SIZE_2 = 80;

// This takes a tracklist (string array) and a song (string). It searches for
// the song in the tracklist using strstr. If the song is found, it returns the
// song (and a value of true), else, it returns the null string, or just 0.
char *find_song(char *track[], char *song){
    for(int i = 0; i < SIZE_1 ; i++){
        if(strstr(track[i], song)){ // find song in track element i.
            return song; // if true, return song.
        }
    }

    return 0; // else return 0, (also the null string).
}

int main(){



    // allocate 80 bytes for user input.
    char *song = malloc(SIZE_2*sizeof(char));

    // The track list.
    char *tracklist[] = {"I Left My Heart in Harvard Med",
                             "Newark, Newark, A Wonderful Town",
                             "Dancing with A Dork",
                             "From Here to Maternity",
                             "The Girl from Iwo Jima"
                            };

    // Print the selection of songs the user has.
    printf("Selection:\n");
    for(int i = 0; i < SIZE_1 ; i++){
        printf("%s\n", tracklist[i]);
    }
    printf("\n");

    // Ask user input.
    printf("Which song would you like?\t");
    scanf("%79[^\n]s", song);

    // If the song is in the playlist, play it.
    // else, notify user of the song's absence.
    if(find_song(tracklist, song)){
        printf("Playing '%s'.\n", song);
    }
    else{
        printf("Song not in track.\n");
    }

    free(song); // free up the memory used by song.
    return 0;
}
