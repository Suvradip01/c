#include<stdio.h>
#include<string.h>

int main() {
    char name[100];
    printf("Enter name : ");
    fgets(name, 100, stdin);
    puts(name);
    
    int length = strlen(name);
    
    // Subtracting 1 to exclude the newline character from the length
    printf("Length is = %d", length - 1);
    
    return 0; 
}
