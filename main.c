#include <stdio.h>
#include <stdlib.h>


int main () {
    FILE *file = fopen("input.txt", "r");
    char current = fgetc(file);
    while(current != EOF) {
        printf("%c", current);
        current = fgetc(file);
    }
}
