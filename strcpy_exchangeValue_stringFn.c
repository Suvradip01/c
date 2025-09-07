#include <stdio.h>
#include <string.h> 

int main() {
    
    char oldString[] = "Suvra";
    char newString[] = "pro";

    // Copy the contents of 'newString' into 'oldString'
    // This operation replaces the content of 'oldString' with 'newString'
    strcpy(oldString, newString);

    // Output the modified 'oldString' to the console
    puts(oldString);

    return 0;
}