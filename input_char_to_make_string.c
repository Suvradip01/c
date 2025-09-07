#include <stdio.h> 

int main() {
    char str[50];  // Declare a character array (string) to store input
    char ch;       // Declare a character variable to hold input character
    int i = 0;     // Initialize an index variable to track array position

    printf("Enter characters: "); // Prompt the user for input

    // Loop to read characters until a newline is encountered
    while (ch != '\n') {   // Keep reading until newline(\n) character
        scanf("%c", &ch);  // Read a single character from standard input
        str[i] = ch;       // Store the character in the string at index i
        i++;               // Increment index to point to the next position
    }

    str[i] = '\0';  // Null-terminate the string to mark its end

    puts(str);  // Output the entire string, including newline character
    return 0;   
}
