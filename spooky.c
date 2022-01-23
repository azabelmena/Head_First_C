#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int SIZE = 80;

int main(){

    // allocate 80 chars to the line buffer.
    char *line = malloc(SIZE*sizeof(char));

    // Open spooky.csv for read only.
    FILE *in = fopen("spooky.csv", "r");

    // Create (if not present) and open files for write only.
    FILE *file_1 = fopen("ufo.csv", "w");
    FILE *file_2 = fopen("disappearances.csv", "w");
    FILE *file_3 = fopen("other.csv", "w");

    // Scan each line of spooky.csv.
    while(fscanf(in, "%79[^\n]\n", line) == 1){
        if(strstr(line, "UFO")){// if ufo, print to ufo.csv
            fprintf(file_1, "%s\n", line);
        }
        else if(strstr(line, "Disappearance")){// If disappearence, print to
            fprintf(file_2, "%s\n", line);     // disappearences.csv
        }
        else{ // else, print to other csv.
            fprintf(file_3, "%s\n", line);
        }
    }


    // close all open files.
    fclose(in);
    fclose(file_1);
    fclose(file_2);
    fclose(file_3);

    // free the line buffer from memory.
    free(line);

    return 0;
}
