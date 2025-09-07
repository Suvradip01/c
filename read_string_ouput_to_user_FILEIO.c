#include<stdio.h>
int main(){
    FILE*fptr;

    fptr = fopen("readstring.txt","r");
    if(fptr == NULL){
        printf("File doesn't exist");
        return 1;
    }else{
        char str[200]; // Create a buffer to store the read data, with a size of 200 characters.

        // Use fgets to read one line from the file into the buffer.
        // If successful (i.e., not NULL), print the line to the console.
        if (fgets(str, sizeof(str), fptr) != NULL) { 
            printf("Read from file: %s", str); // Output the read line, including any newline character.
        } else { // If fgets returns NULL, it means the file is empty or an error occurred during reading.
            printf("File is empty or an error occurred.\n"); // Output an appropriate message.
        } 

        fclose(fptr);

    }
    return 0;
}