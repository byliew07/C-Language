#include <stdio.h>
#include <string.h>

int main() {
    int year;
    char input[10];

    do{

        printf("Please enter a year: \n");
        scanf("%d", &year);

        int remainder4 = year % 4; //should be divisible by 4 (remainder4 == 0)
        int remainder100 = year % 100; //should not be divisible by 100 (remainder100 != 0)
        int remainder400 = year % 400; //or is divisible by 400 (remainder400 == 0)

        if (remainder4 == 0 && remainder100 != 0 || remainder400 == 0) {
            printf("This is a leap year \n");
        } else {
            printf("This is not a leap year \n");
        }

        printf("Repeat for another input? (Yes) \n");
        scanf("%s", input);

    }while(strcasecmp(input, "Yes") == 0 || strcasecmp(input, "Y") == 0);

    return 0;
}