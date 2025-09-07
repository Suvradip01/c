#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1,8.5,"Sneha Dutta"}; //initialising structure.

    struct student*ptr = &s1;  // pointer declaration here student *ptr stores the value of student s1 data addressed by &s1.

    printf("Student roll number = %d\n",(*ptr).roll); //printing format

    //arrow operator

    printf("Student roll number = %d\n",ptr->roll ); //arrow operator format.
}
