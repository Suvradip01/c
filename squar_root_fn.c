#include<stdio.h>
#include<math.h>
float squarroot(float num);

int main(){
float num;
printf("Enter number : ");
scanf("%f",&num);
printf("Squar root of this number is = %f",squarroot(num));
return 0;
}

float squarroot(float num){
    float sqroot = sqrt(num);
    return sqroot;
}