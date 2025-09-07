//both codes are correct last one is simple
 
/*
#include<stdio.h>
#include<string.h>

void slice(char string[],int n,int m);
int main(){
    char string[200];
    printf("Enter string : ");
    fgets(string,100,stdin);
    slice(string,3,6);
}
void slice(char string[],int n,int m){
char newstring[200];
int j = 0;
for(int i=n;i<=m;i++,j++){
    newstring[j] = string[i];
}
newstring[j]='\0';
puts(newstring);
}
*/

#include <stdio.h> 
#include<string.h>

int main() { 
    char string[200]; // Declare an array of characters to store the input string
    char newstring[100]; // Declare an array to store a substring extracted from the input string
    int i, j = 0; 
    int n, m; // Declare variables to hold the indices for substring extraction
    
    printf("Enter string : "); 
    fgets(string, 100, stdin); 
    
    printf("Enter n & m = "); 
    scanf("%d%d", &n, &m); 
    
    // Loop from 'n' to 'm', and extract the corresponding characters from 'string' to 'newstring'
    for (i = n; i <= m; i++, j++) { 
        newstring[j] = string[i]; // Assign the character from 'string[i]' to 'newstring[j]'(copy)
    }
    
    newstring[j] = '\0'; // Null-terminate 'newstring' to make it a proper C-style string
    
    puts(newstring); // Output the 'newstring' to standard output (displays the extracted substring)
    
    return 0; 
}

