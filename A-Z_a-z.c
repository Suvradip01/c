#include <stdio.h>

int main() {
    char letter;

    // Print uppercase letters
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c ", letter);
    }

    printf("\n");

    // Print lowercase letters
    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c ", letter);
    }

    printf("\n");
    return 0;
}
