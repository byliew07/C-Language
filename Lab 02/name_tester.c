#include <stdio.h>
#include <string.h>

int main() {
    char name[30];

    printf("Please enter your name: \n");
    scanf("%s", name);

    if(strcmp(name, "Carmen") == 0) {
        printf("Carmen is an awesome name \n");
    } else {
        printf("%s is a ", name);

        int i = 0;
        while(i < 60) {
            printf("silly ");
            i += 1;
        }
        printf("name... \n");

        for (int i = 0; i < 60; i++) {
            printf("silly ");
        }
    }
    return 0;
}