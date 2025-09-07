#include<stdio.h>
int main(){
float i,n;
float fib;
printf("Enter range = ");
scanf("%f",&n);
for(i=2;i<=n;i++){
    fib = (i-1) + (i-2);
    printf("%f\t",fib);
}
return 0;
}