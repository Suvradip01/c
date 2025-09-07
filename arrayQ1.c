#include<stdio.h>
int main(){
float price[3];
printf("Enter price of egg = ");
scanf("%f",&price[0]);
printf("Enter price of bread= ");
scanf("%f",&price[1]);
printf("Enter price  book= ");
scanf("%f",&price[2]);
printf("Egg price = %f,\nBread price = %f,\nBook price = %f",price[0]+(price[0]*0.18),price[1]+(price[0]*0.18),price[2]+(price[0]*0.18));
return 0;
}