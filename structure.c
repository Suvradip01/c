#include<stdio.h>
#include<string.h>

//defined by user.
//declaration.
struct student
{
int roll;
float cgpa;
char name[100];
};                           //statement terminator.(must)



//initialisation

int main(){
    struct student s1;            // Declare a variable `s1` of type `student`

    // Assign values to the fields of the `s1` structure

    s1.roll = 20;
    s1.cgpa = 8.22;
    strcpy(s1.name,"rohit");
    printf("Student name = %s\n\nStudent roll no = %d\n\nStudent cgpa = %f",s1.name,s1.roll,s1.cgpa);
    return 0;
}