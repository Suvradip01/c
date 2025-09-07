/* salting --

here any organisastion(google,microsoft....) place a random string in any random position in our given password
for example - i entered  a pass - suvra ,then the organisation will place their own string like - 123 in anyy random place
like (suv123ra,suvra123,123suvra) to prevent security issues.*/  

#include<stdio.h>
#include<string.h>

#include <stdio.h>
#include <string.h> 

void salting(char password[]);

int main() {
    char password[100]; 
    printf("Enter Password = ");
    scanf("%s", password); 
    salting(password);
    return 0;
}


void salting(char password[]) {
    // Declare an array to represent the salt that will be appended to the password
    char salting[] = "123"; 

    // Declare an array to hold the concatenated result of the password and salt
    char newPass[50]; 

    // Copy the original password into 'newPass'
    strcpy(newPass, password); // Copies 'password' into 'newPass'

    // Append the predefined salt to 'newPass'
    strcat(newPass, salting); // Concatenates 'salting' to the end of 'newPass'

    // Display the newly salted password
    puts(newPass); // Output the concatenated result to the console
}

//simple version

/*
    int main(){
    char password[100];
    char salting[] = "12345";
    printf("Enter Password = ");
    scanf("%s",password);
    strcat(password,salting);
    printf("Salting = %s",password);
    return 0;
}
*/