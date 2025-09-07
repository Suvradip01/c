#include<stdio.h>

ConnvertC(float t);
//convertTempF(float T);

int main(){
float c,t;
printf("Enter temperature(celcius) = ");
scanf("%f",&c);
printf("Temperature = %f",ConnvertC(t));
return 0;
}

ConnvertC(float t){
    int farenheit = (t*9/5)+32;
    return farenheit;
}
/*
convertTempF(float T){
int f;
    printf("Enter temperature(farenheit) = ");
    scanf("%d",&f);
    int celcius = (f- 32)*5/9;
    return celcius;
}*/