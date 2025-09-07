#include<stdio.h>

int hot();
int cold();
int normal();

int main(){
    float temp;
    printf("Enter Temperature(celcius) = ");
    scanf("%f",&temp);
    if(temp<10){
       cold();
    }else if(temp>10 && temp<25){
        normal();
    }else{
        hot();
    }
}

int hot(){
    return printf("Hot");
}
int cold(){
    return printf("Cold");
 }
 int normal(){
    return printf("Normal Temperature");
 }