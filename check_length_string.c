#include <stdio.h>
int Countlength(char arr[]);
int main(){
    char name[100];
    printf("Enter First Name = ");
    fgets(name,100,stdin);
    puts(name);
    printf("length = %d",Countlength(name));
    return 0;

}
int Countlength(char arr[]){
    int count = 0;
    for(int i=0;arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}