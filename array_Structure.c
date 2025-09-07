#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
    char dept[100];
    float marks;
};

int main(){
struct student ece[100];
ece[0].roll = 1;
ece[0].cgpa = 9.5;
strcpy(ece[0].name,"Sradha Khapra");
strcpy(ece[0].dept,"ECE");
ece[0].marks = 425; 
printf("Student name = %s\nStudent Roll number = %d\nTotal Marks = %f out of 500\nCGPA = %f\nDepartment = %s",ece[0].name,ece[0].roll,ece[0].marks,ece[0].cgpa,ece[0].dept);
return 0;
}