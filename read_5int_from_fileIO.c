#include<stdio.h>
int main(){

    FILE*fptr;
    fptr = fopen("readint.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist");
        return 0;
    }else{
    int num;
    fscanf(fptr,"%d",&num);
    printf("%d\t",num);
    fscanf(fptr,"%d",&num);
    printf("%d\t",num);
    fscanf(fptr,"%d",&num);
    printf("%d\t",num);
    fscanf(fptr,"%d",&num);
    printf("%d\t",num);
    fscanf(fptr,"%d",&num);
    printf("%d",num);
    fclose(fptr);
    }
    return 0;
}