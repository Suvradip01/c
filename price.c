#include<stdio.h>
int main(){
    float marketprice = 80.00; //user define (price)value 
    float kg;
    
    printf("Enter kg = ");  
    scanf("%f",&kg);

    float subtotal =(marketprice*kg);  //price of the whole amount.

    float totalprice = ((subtotal*0.18)+subtotal); //including gst.

    printf("Total price = %f",totalprice);
    return 0;
}