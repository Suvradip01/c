#include<stdio.h>
FILE *fptr;
int main(){
char ch;
fptr = fopen("functions.txt","r");//use r mode to read //use w,a mode to write

if(fptr==NULL){
    printf("File Doesn't Exist");
    return 1;
}else{
    ch = fgetc(fptr);
    while(ch != EOF){
    printf("%c",ch); //for reading
    ch = fgetc(fptr);
    }   
}
fclose(fptr);
return 0;
}