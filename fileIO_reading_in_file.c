//reading in file     

#include <stdio.h>  

int main() {
    char ch;  

    // Declare a pointer to a file
    FILE *fptr;

    // Open the file "hello.txt" in read mode
    // If the file doesn't exist or can't be opened, fptr will be NULL
    fptr = fopen("hello.txt", "r");

    // Check file exist or not
    if (fptr == NULL) {  // If fptr is NULL, then it means file doenot exist
        printf("file doesn't exist!\n");  // Display error message
        return 1;  // Exit with a non-zero status indicating failure
    }else{

    // Read a single character from the file and store it in 'ch'
    fscanf(fptr, "%c", &ch);  // Reads one character from the file into 'ch'
    

    // Print the character to the console
    printf("Character = %c\n", ch);  // Outputs "Character = <read character>"

    // Close the file to free resources
    fclose(fptr);
    }
    return 0;  // Indicate successful program completion
}
