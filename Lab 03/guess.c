#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "input_functions.h"

char * check(int actual, int guess){
    if (guess < actual)
        return "smaller";
    else if (guess > actual)
        return "bigger";
    else
    return "equal";
}

int main() {
    do {
        srand(time(NULL));
        int actual = rand() % 101;
        printf("Cheat: %d\n", actual);
        bool is_correct = false;

        do {
            int guess = read_integer("Guess a number? \n");

            char *result = check(actual, guess);

            if (strcmp(result, "smaller") == 0) {
                printf("Pick a bigger number\n");
            } else if (strcmp(result, "bigger") == 0) {
                printf("Pick a smaller number\n");
            } else {
                printf("Correct guess!\n");
                is_correct = true; //change this boolean flag to true to exit the do/while loop
            }
        } while (is_correct == false); //repeat until correct guess

    } while (read_boolean("New Game? \n"));
    return 0;
}