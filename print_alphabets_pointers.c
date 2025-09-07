#include<stdio.h>

int main() {
    char *i; // Declare a pointer to char named i

    // Loop through uppercase letters from 'A' to 'Z'
    for(*i = 'A'; *i <='Z'; (*i)++) {
        printf("%c\t", *i); // Print the current character pointed to by i
    }printf("\n\n");

       for(*i = 'Z'; *i >='A'; (*i)--) {
        printf("%c\t", *i); // Print the current character pointed to by i(reverse)
    }printf("\n\n");

    // Loop through lowercase letters from 'a' to 'z'
    for(*i = 'a'; *i <='z'; (*i)++) {
        printf("%c\t", *i); // Print the current character pointed to by i
    }printf("\n\n");

        for(*i = 'z'; *i >='a'; (*i)--) {
        printf("%c\t", *i); // Print the current character pointed to by i(reverse)
    }printf("\n\n");

    return 0;
}
