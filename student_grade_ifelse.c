#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks(0-100) =");
    scanf("%d",&marks);
    if(marks>=0 && marks<30){
        printf("C\nFair");
    }else if(marks>=30 && marks<70){
        printf("B\nGood");
    }else if(marks>=70 && marks<90){
        printf("A\nVery Good");
    }else if(marks>=90 && marks<=100){
        printf("A+\nExcellent");
    }else{
        printf("Wrong marks!");
    }
    return 0;
}