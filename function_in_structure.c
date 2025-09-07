#include<stdio.h>

struct student{      //structure declaration.
    int roll;
    float cgpa;
    char name[100];
};

void studentInfo(struct student s1);  //function declaration(it should be declared after declaration of structure ) 

int main(){
    struct student s1={1,9.5,"Aman Das"}; //initialisation of structure student s1.

    studentInfo(s1);  //function calling and passing s1 values.
    return 0;
}

//Function defination

void studentInfo(struct student s1){    
    printf("Student Inforamation\n");
    printf("Student roll number = %d\n",s1.roll);
    printf("Student name = %s\n",s1.name);
    printf("Cgpa = %f\n",s1.cgpa);
}

