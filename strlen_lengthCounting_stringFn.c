#include <stdio.h>
#include <string.h>

int main() {
    // Declaring a string as a character array
    char name[] = "Suvradip Ghosh";
    
    // Getting the length of the string using strlen
    int length = strlen(name);

    // Printing the length of the string
    printf("Length = %d\n", length);

    return 0;
}