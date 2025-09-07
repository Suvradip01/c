
//---------dont run it-----------//

//----notes material For better Understanding----// 


//  strlen Function in string -------------------------------------------------->to get full codde with output watch File name(strlen_lengthCounting_stringFn)

#include <stdio.h>
#include <string.h>

int main() {
    // Declaring a string as a character array
    char name[] = "Suvradip Ghosh";
    
    // Getting the length of the string using strlen
    int length = strlen(name);

    // Printing the length of the string
    printf("Length = %d\n", length);

    return 0;
}





//strcpy Function in String------------------------------------------->to get full codde with output watch File name(strcpy_exchangeValue_stringFn)

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





//strcat Function in String------------------------------------------------->to get full codde with output watch File name(strcat_join_twoString_stringFn)


#include <stdio.h>   
#include <string.h>  
int main() { 
    char firstString[100] = "Suvradip ";  // Initialize a character array (string) with "Suvradip " (with a space at the end)
    char SecondString[] = "Ghosh";  // Initialize another character array (string) with "Ghosh"

    strcat(firstString, SecondString);  // Concatenate/join 'SecondString' to 'firstString'

    puts(firstString);  // Output the concatenated result to the console
    
    return 0;
}






//strcmp Function in String------------------------------------------>to get full codde with output watch File name(strcmp_compare_String_stringFn)



#include <stdio.h>   
#include <string.h>  

int main() {  
    char string1[] = "Apple";  
    char string2[] = "Hello";  
    char string3[] = "Apple";  
    char string4[] = "Apple";  
    char string5[] = "Banana"; 
    char string6[] = "Apple"; 
    
    // Use strcmp to compare strings
    // strcmp(string1, string2): Compares "Apple" and "Hello"
    // strcmp(string3, string4): Compares "Apple" and "Apple"
    // strcmp(string5, string6): Compares "Banana" and "Apple"

    // Print the results of string comparisons using printf with tabs (\t) to separate the outputs.
    //the operation depends on the ASCII values of the characters used in the string.
    printf("%d\t%d\t%d\t", 
        strcmp(string1, string2),  // Returns -1 indicating the comparison result between "Apple" and "Hello bec Apple<Hello"
        strcmp(string3, string4),  // Returns 0 value indicating the comparison result between "Apple" and "Apple bec Apple = Apple"
        strcmp(string5, string6)   // Returns 1 value indicating the comparison result between "Banana" and "Apple bec Banana>Apple"
    );

    return 0; 
}
