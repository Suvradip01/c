#include <stdio.h>

int countchar(char string[], char ch);
void checkchar(char string[], char character);

int main() {
    char ch;
    char character;
    char string[200];

    printf("Enter string = ");//to take a string from the user.
    fgets(string, 200, stdin); 

    printf("Enter character to count: ");//to take the character to be count.
    scanf("%c", &ch); 

    printf("Character count = %d\n", countchar(string,ch)); 

    printf("Enter character to check presence: "); //taking a character to check its presence in the string.
    scanf(" %c", &character);     //white space is important.to skip/avoid newline.to read the character which is entered by the user.

    checkchar(string, character); 
    return 0;
}

int countchar(char string[], char ch) {
    int count = 0;
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] ==ch){
            count++;
        }
    }
    return count;
}

void checkchar(char string[], char character) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == character) {
            printf("%c character is present\n", character);
            return; 
        }
    }
    printf("%c character is absent\n", character);
}
