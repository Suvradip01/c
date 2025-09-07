#include<stdio.h>

int main(){
    int arr[10];
    int i,x;
    int count = 0; // Variable to store the count of occurrences

    // Taking input from the user to fill the array
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // Storing the input in the array
    }

    // Taking input from the user for the number to count its appearance
    printf("Enter number to count its appearance : ");
    scanf("%d", &x);

    // Looping through the array to count occurrences of the input number
    for (i = 0; i < 10; i++) {
        if (x == arr[i]) {
            count = count + 1; // Incrementing count if the number is found
        }
    }
    printf("Total count of %d is : %d",x,count);
  return 0;
   
}

