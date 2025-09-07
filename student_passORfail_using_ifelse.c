#include<stdio.h>
int main(){
    int Marks;
    printf("Enter Marks =");
    scanf("%d",&Marks);
    if(Marks>=0 && Marks<=30){
        printf("Fail \n"); 
    }else if(Marks>30 && Marks<=100){
        printf("Pass \n");
    }else{
        printf("Wrong marks");
    }
    return 0;
}