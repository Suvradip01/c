#include<stdio.h>
int main(){
    float num1,num2;
    char ch;
    printf("Enter 1st number = ");
    scanf("%f",&num1);
    printf("Enter 2nd number = ");
    scanf("%f",&num2);
    printf("Enter operator(+ , - , * , /) = ");
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("Calculation result %f + %f = %f",num1,num2,num1+num2);
    }else if(ch=='-'){
        printf("Calculation result %f - %f = %f",num1,num2,num1-num2);
    }else if(ch=='*'){
        printf("Calculation result %f * %f = %f",num1,num2,num1*num2);
    }else if(ch=='/'){
        printf("Calculation result %f / %f = %f",num1,num2,num1/num2);
    }else{
       printf(" invalid operator ");
    }
    return 0;
    
}