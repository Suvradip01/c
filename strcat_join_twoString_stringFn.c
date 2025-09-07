#include <stdio.h>   
#include <string.h>  
int main() { 
    char firstString[100] = "Suvradip ";  // Initialize a character array (string) with "Suvradip " (with a space at the end)
    char SecondString[] = "Ghosh";  // Initialize another character array (string) with "Ghosh"

    strcat(firstString, SecondString);  // Concatenate/join 'SecondString' to 'firstString'

    puts(firstString);  // Output the concatenated result to the console
    
    return 0;
}
