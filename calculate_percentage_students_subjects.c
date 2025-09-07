
#include<stdio.h>

// Function prototypes
float Percentage(float marks, float totalMarks);

int main(){
    int sub;
    float totalMarks = 0; // Variable to store total marks
    printf("Enter total subjects: ");
    scanf("%d", &sub); // Taking input for the total number of subjects

    // Loop to input marks for each subject
    for(int i = 1; i <= sub; i++){
        float marks;
        printf("Enter marks for subject %d: ",i);
        scanf("%f", &marks);
        totalMarks = totalMarks+ marks; // Adding marks to totalMarks() //totalMarks += marks
    }

    printf("Total marks = %f \n", totalMarks);
    printf("Percentage = %f\n", Percentage(totalMarks, sub * 100)); // Calculating percentage
    return 0;
}


// Function to calculate percentage
float Percentage(float marks, float totalMarks){
    return (marks / totalMarks) * 100; // Returning the calculated percentage
}
