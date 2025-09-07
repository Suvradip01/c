
#include<stdio.h>

typedef struct studentdetails{  //declare the structure first
        
        char name[50];
        long long id;
        char dept[50];
        float cgpa;

        }sd;

int main(){
    FILE*fptr;
    fptr = fopen("StudentDetails.txt","w");
    if(fptr == NULL){
        printf("File doesn't exist");
        return 1;
    }else{

        //student details 1.
        sd s1 = {"Suvradip Ghosh",211001102052LL,"BCA",8.88};         //defining values in structure

        //printing values in file      (using fprintf to print details on the studentdetails.txt file)                                            

        fprintf(fptr,   "Student Name   : %s\n",s1.name);
        fprintf(fptr,   "Student ID     : %lld\n",s1.id);
        fprintf(fptr,   "Department     : %s\n",s1.dept);
        fprintf(fptr,   "CGPA           : %f\n\n\n",s1.cgpa);
        

        //student details 2.
        sd s2 = {"Tanish Roy",211001102053LL,"BCA",8.44};         //defining values in structure

        //printing values in file 

        fprintf(fptr,   "Student Name   : %s\n",s2.name);
        fprintf(fptr,   "Student ID     : %lld\n",s2.id);
        fprintf(fptr,   "Department     : %s\n",s2.dept);
        fprintf(fptr,   "CGPA           : %f\n\n\n",s2.cgpa);
        


        //student details 3.
        sd s3 = {"Mainak Roy",211001102054LL,"BCA",8.01};         //defining values in structure

        //printing values in file 

        fprintf(fptr,   "Student Name   : %s\n",s3.name);
        fprintf(fptr,   "Student ID     : %lld\n",s3.id);
        fprintf(fptr,   "Department     : %s\n",s3.dept);
        fprintf(fptr,   "CGPA           : %f\n\n\n",s3.cgpa);
        


        //studnt details 4.
        sd s4 = {"Arti Sukla",211001102055LL,"BCA",7.55};         //defining values in structure

        //printing values in file 

        fprintf(fptr,   "Student Name   : %s\n",s4.name);
        fprintf(fptr,   "Student ID     : %lld\n",s4.id);
        fprintf(fptr,   "Department     : %s\n",s4.dept);
        fprintf(fptr,   "CGPA           : %f\n\n\n",s4.cgpa);
        


        //student details 5.
        sd s5 = {"Rahul Bose",211001102056LL,"BCA",8.47};         //defining values in structure

        //printing values in file 

        fprintf(fptr,"Student Name : %s\n",s5.name);
        fprintf(fptr,"Student ID : %lld\n",s5.id);
        fprintf(fptr,"Department : %s\n",s5.dept);
        fprintf(fptr,"CGPA : %f\n\n\n",s5.cgpa);
        

        
        fclose(fptr);
    }
        
          
     return 0;

}
 
