#include<stdio.h>
int main(){
    int num;
    printf("Enter a number =");
    scanf("%d",&num);
    if(num>0){
        printf("%d is a natural number",num);
    }else{
        printf("not a natural number");
    }
    return 0;
}