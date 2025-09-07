#include<stdio.h>
int main(){
    FILE*fptr;

//add  values of a and b before reading the file.

    fptr = fopen("replace a,b to sum.txt","r"); //1st open to read the a and b values

    if(fptr==NULL){
        printf("File doesn't Exist");
        return 1;
    }else{

        int sum;
        int a,b;
        fscanf(fptr,"%d",&a); //reading value of a
        fscanf(fptr,"%d",&b);//reading value of b

        fclose(fptr);        //closing file to open in a different mode(write mode 'w')

        fptr = fopen("replace a,b to sum.txt","w"); //file opened in write mode
        sum = a+b;
        fprintf(fptr,"sum = %d",sum);             //writng/updating sum in  file which wwill replaced a and b
        fclose(fptr);       //finally closing the file.
        
        return 0;

    }
}