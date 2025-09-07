#include<stdio.h>

float ConnvertTemp(float t);

int main(){
float t;
printf("Enter temperature(celcius) = ");
scanf("%f",&t);
printf("Temperature in Farenheit = %f",ConnvertTemp(t));
return 0;    
}


float ConnvertTemp(float t){
    float farenheit = (t* 9.0/5.0) + 32;
    return farenheit;
}