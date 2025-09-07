#include<stdio.h>
#include<string.h>

typedef struct bacheloreofcomputerapplicationstudent{

    long long roll; //long long is used to store big values which cant be stored as int or float or  which can cause overflow.
    float cgpa;
    char name[100];
    
}bca;

int main(){
bca s1;
s1.roll = 211001102052ll;
s1.cgpa = 8.37;
strcpy(s1.name,"Suvradip Ghosh");
printf("Student name = %s\n",s1.name);
printf("Student roll number = %lld\n",s1.roll); //format for long long.
printf("CGPA = %f\n",s1.cgpa);
return 0;
}
