#include <stdio.h> 
int main() { 

    char name[100]; //It can hold up to 99 characters plus a null terminator.

    printf("Enter Full Name :"); 

    fgets(name, 100, stdin); // Read up to 99 characters from standard input (user input), including the newline character.
                             

    puts(name); // Print the entered name, followed by a newline. 'puts' automatically adds a newline at the end of the output.

    return 0; 

} 
