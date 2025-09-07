#include <stdio.h>

int countchar(char string[], char targetChar);
void checkchar(char string[], char checkChar);

int main() {
    char targetChar;
    char checkChar;
    char string[200];

    printf("Enter string = "); // Prompt for string input
    fgets(string, 200, stdin); // Read string with fgets (safer)

    printf("Enter character to count: "); // Prompt for character to count
    scanf("%c", &targetChar); // Read single character with scanf

    printf("Character count = %d\n", countchar(string, targetChar)); // Call countchar and print result

    printf("Enter character to check presence: "); // Prompt for character to check
    scanf(" %c", &checkChar); // Read single character with scanf

    checkchar(string, checkChar); // Call checkchar

    return 0;
}

int countchar(char string[], char targetChar) {
    int count = 0;
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == targetChar) {
            count++;
        }
    }
    return count;
}

void checkchar(char string[], char checkChar) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == checkChar) {
            printf("%c character is present\n", checkChar);
            return; // Exit the function early if found
        }
    }
    printf("%c character is absent\n", checkChar);
}
