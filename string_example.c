#include<stdio.h> 

void PrintString(char arr[]); 

int main() { 
    char FirstName[] = "Suvradip"; // Declare and initialize an array of characters (string) with the value "Suvradip"
    char LastName[] = "Ghosh"; // Declare and initialize another array of characters (string) with the value "Ghosh"
    PrintString(FirstName); // Call the PrintString function with FirstName as the argument
    PrintString(LastName); // Call the PrintString function with LastName as the argument
    return 0;
}

void PrintString(char arr[]) { 
    for (int i = 0; arr[i] != '\0'; i++) { // Loop through the array until a null-terminator ('\0') is encountered
        printf("%c", arr[i]); // Print each character in the array
    }
    printf("\t"); // Print a tab character after the string
}
