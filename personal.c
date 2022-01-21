#include<stdio.h>

int main(){

    int age;
    char first_name[30];
    char last_name[30];

    printf("Enter your first, and last name:\t");
    scanf("%29s %29s", first_name, last_name);

    printf("Enter your age:\t");
    scanf("%d", &age);

    printf("Your name is %s %s. ", first_name, last_name);
    printf("You are %d years old.\n", age);

    return 0;
}
