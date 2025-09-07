#include <stdio.h> 

// Declare a file pointer globally
FILE *fptr;

int main() {
    char ch; // Character variable to hold each character read from the file

    // Open the file "functions.txt" in read-only mode ("r")
    fptr = fopen("functions.txt", "r");

    
    if (fptr == NULL) { 
        printf("File Doesn't Exist"); 
        return 1; // Exit the program with a non-zero status to indicate an error
    } else {
        // File opened successfully, so start reading characters
        ch = fgetc(fptr); // Read the first character from the file
        // Loop until we reach the end of the file (EOF)
        while (ch != EOF) {
            printf("%c", ch); // Print the character to the console
            ch = fgetc(fptr); // Read the next character from the file
        }
    }

    // Close the file to release resources
    fclose(fptr);

    return 0; // Return 0 to indicate successful execution
}
