#include<stdio.h>
int main(){
    FILE*fptr;
    fptr = fopen("Oddnum.txt","w"); //OPEN Odddnum.txt file

    if(fptr==NULL){
        printf("File doen not exist");
        return 1;
    }else{

    int i,n;
    printf("Enter Range(n) = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==1){
           fprintf(fptr, "%d\n",i);
        }  
    }

}
    fclose(fptr);
    return 0;

}