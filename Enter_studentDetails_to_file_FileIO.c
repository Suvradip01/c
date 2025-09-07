
#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("Studentdetails.txt","w"); //open file Studentdetails.txt
    if(fptr==NULL){
        printf("File does not exist");
        return 1;
    }else{

    
    char name[100];
    int age;
    int id;
    float cgpa;
    printf("Enter Name(space nont allowed) :");
    scanf("%s",name);
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter ID :");
    scanf("%d",&id);
    printf("Enter CGPA :");
    scanf("%f",&cgpa);

    fprintf(fptr,"Student name  :%s\n",name);
    fprintf(fptr,"Student age   :%d\n",age);
    fprintf(fptr,"Student ID    :%d\n",id);
    fprintf(fptr,"CGPA          :%f\n",cgpa);
    
    fclose(fptr);
    }
    return 0;
}