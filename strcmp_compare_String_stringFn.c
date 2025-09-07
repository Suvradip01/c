#include <stdio.h>   
#include <string.h>  

int main() {  
    char string1[] = "Apple";  
    char string2[] = "Hello";  
    char string3[] = "Apple";  
    char string4[] = "Apple";  
    char string5[] = "Banana"; 
    char string6[] = "Apple"; 
    
    // Use strcmp to compare strings
    // strcmp(string1, string2): Compares "Apple" and "Hello"
    // strcmp(string3, string4): Compares "Apple" and "Apple"
    // strcmp(string5, string6): Compares "Banana" and "Apple"

    // Print the results of string comparisons using printf with tabs (\t) to separate the outputs.
    //the operation depends on the ASCII values of the characters used in the string.
    printf("%d\t%d\t%d\t", 
        strcmp(string1, string2),  // Returns -1 indicating the comparison result between "Apple" and "Hello bec Apple<Hello"
        strcmp(string3, string4),  // Returns 0 value indicating the comparison result between "Apple" and "Apple bec Apple = Apple"
        strcmp(string5, string6)   // Returns 1 value indicating the comparison result between "Banana" and "Apple bec Banana>Apple"
    );

    return 0; 
}
