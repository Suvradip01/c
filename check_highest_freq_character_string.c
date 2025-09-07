#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256  // Considering ASCII set of characters

char highest_frequency_char(const char *str) {
    int frequency[ASCII_SIZE] = {0};  // Array to count frequency of each ASCII character
    int max_count = 0;  // Variable to store the maximum frequency
    char max_char = '\0';  // Variable to store the character with maximum frequency

    // Loop through the string and count frequency of each character
    while (*str) {
        frequency[(unsigned char) *str]++;
        if (frequency[(unsigned char) *str] > max_count) {
            max_count = frequency[(unsigned char) *str];
            max_char = *str;
        }
        str++;
    }

    return max_char;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string from the user
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character at the end if exists

    char most_frequent = highest_frequency_char(str);
    printf("The character with the highest frequency is: '%c'\n", most_frequent);

    return 0;
}
