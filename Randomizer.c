//Create a randomizer using simple math functions. from 1 to 50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    //seed the random number generator
    srand(time(0));
    //generate a random number between 1 and 50
    int random_number = rand() % 50 + 1;
    //display the random number
    printf("The random number between 1 and 50 is: %d\n", random_number);
    //done
    return 0;
}