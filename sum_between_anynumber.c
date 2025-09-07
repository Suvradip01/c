#include<stdio.h>
int main(){
    int i,num1,num2,sum=0;
    printf("Enter 1st number =");
    scanf("%d",&num1);
    printf("Enter 2nd number =");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++){
        sum=sum+i;
    }
    printf("sum is = %d",sum);
}