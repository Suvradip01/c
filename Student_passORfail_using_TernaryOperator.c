#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks(0-100) =");
    scanf("%d",&marks);
    marks<=30?printf("Fail"):printf("Pass");
    return 0;
}