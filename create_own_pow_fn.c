#include<stdio.h>
#include<math.h>
float power(float n,float p);

int main(){
    int n,p;
    printf("Enter number = ");
    scanf("%d",&n);
    printf("Enter power = ");
    scanf("%d",&p);
    printf("Result = %f",power(n,p));
    return 0;
}

float power(float n,float p){
    return pow(n,p);
}