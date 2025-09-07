#include<stdio.h>
int sumOfdigit(int sum,int n);

int main(){
    int num,digit,i,n,sum = 0;
    printf("Enter Number = ");
    scanf("%d",&num);
    printf("Enter total total digit count  = ");
    scanf("%d",&digit);
    for(i=1;i<=digit;i++){
    printf("Enter Digits From given number  = ");
    scanf("%d",&n);
    sum = sumOfdigit(sum,n);
    }
    printf("The sum of the digits is = %d ",sum);
    return 0;
}

int sumOfdigit(int sum,int n){
    sum = sum+n;
    return sum;
}