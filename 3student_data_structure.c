#include<stdio.h>
#include<string.h>

struct student
{

int roll;
float cgpa;
char name[200];

};


int main(){
struct student s1;
s1.roll = 1;
s1.cgpa = 9.28;
strcpy(s1.name,"Suvradip Ghosh");
printf("Student name = %s\n",s1.name);
printf("Student Roll number = %d\n",s1.roll);
printf("CGPA = %f\n",s1.cgpa);

struct student s2;

s2.roll = 2;
s2.cgpa = 9.10;
strcpy(s2.name,"Rohit Paul");
printf("Student name = %s\n",s2.name);
printf("Student Roll number = %d\n",s2.roll);
printf("CGPA = %f\n",s2.cgpa);

struct student s3;
s3.roll = 3;
s3.cgpa = 9.00;
strcpy(s3.name,"Srijan Kundu");
printf("Student name = %s\n",s3.name);
printf("Student Roll number = %d\n",s3.roll);
printf("CGPA = %f\n",s3.cgpa);

struct student s4;
s4.roll = 4;
s4.cgpa = 8.99;
strcpy(s4.name,"Annesha Das");
printf("Student name = %s\n",s4.name);
printf("Student Roll number = %d\n",s4.roll);
printf("CGPA = %f\n",s4.cgpa);
return 0;
struct student s5;
s5.roll = 6;
s5.cgpa = 8.5;
strcpy(s5.name,"Akash sil");
printf("Student name = %s\n",s5.name);
printf("Student Roll number = %d\n",s5.name);
printf("CGPA = %f\n",s4.cgpa);

}