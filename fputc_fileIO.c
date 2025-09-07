#include<stdio.h>

int main(){
    // Declare a FILE pointer variable 
    FILE*fptr;
    
    // Open/create a file named "functions.txt" for writing
    fptr = fopen("fgetc_fputc.txt","a");

    
    if(fptr==NULL){
        printf("File doesn't Exist"); 
        return 0; 
    } else{
        // Write characters to the file
        fputc('I',fptr); // Write 'I' to the file
        fputc('N',fptr); // Write 'N' to the file
        fputc('D',fptr); // Write 'D' to the file
        fputc('I',fptr); // Write 'I' to the file
        fputc('A',fptr); // Write 'A' to the file
    }
    fclose(fptr);
    
    return 0; // Return 0 to indicate successful termination
}
