
//writing in file

#include <stdio.h> 

int main() {
    // Declare a pointer to a file
    FILE *fptr;

    // Open (or create if it doesn't exist) a file named "hello.txt" in append mode
    // "a" mode ensures that data will be appended at the end of the file if it exists

    fptr = fopen("hello.txt", "a");//if we put "w" then it wil not save previous data and update it to new data.

    // Check if the file was successfully opened
    if (fptr == NULL) {  // If fptr is NULL, it means file opening failed
        printf("Error opening file!\n");
        return 1;  // Exit with a non-zero status to indicate an error
    }

    // Append characters to the file to form the word "APPLE"
    fprintf(fptr, "%c", 'A');  // change character   a ='A' to the file
    fprintf(fptr, "%c", 'P');  // Append character   p = 'P' to the file
    fprintf(fptr, "%c", 'P');  // Append another     p ='P' to the file
    fprintf(fptr, "%c", 'L');  // Append character   l = 'L' to the file
    fprintf(fptr, "%c", 'E');  // Append charactere  e = 'E' to the file

    // Close the file to ensure data is written and resources are released
    fclose(fptr);


    return 0;
}
