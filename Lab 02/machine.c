#include <stdio.h>
#include <string.h>

int main() {
    int lowest = 38;

    do{
        int t;
        printf("Read temperature: ");
        scanf("%d", &t);

        if(t <lowest) {
            lowest = t;
        }

        char input [10];
        printf ("Backup power (On/Off)?: ");
        scanf("%s", input);
        
        if(t < 50){
            printf("Normal mode of operation.\n");
            continue; //code will stop here for this round of the loop
            // and start a new loop as long as the condition is true
        } else if (t <= 80 || strcasecmp(input, "On") == 0) {
            printf("Turn on the circulating fan. \n");
            continue;
        } else {
            printf("Turn off equipment. \n");
            break; //exit the loop completely even if the condition is true.
        }

    } while (1); //In C, 1 represents true, 0 represents false.

    printf("Lowest temperature recorded: %d \n", lowest);

    return 0;
}