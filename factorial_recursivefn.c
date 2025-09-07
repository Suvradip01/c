#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter n =");
    scanf("%d",&n);
    printf("Factorial is = %d",fact(n));
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factN = fact(n-1);
    int fact = factN*n;
    return fact;
}