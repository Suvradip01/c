#include<stdio.h>
#include<math.h>
float powerOFnum(float num,float power);

int main(){
    float num,power;
    printf("Enter number =");
    scanf("%f",&num);
    printf("Enter power =");
    scanf("%f",&power);
    printf("%f",powerOFnum(num,power));
    return 0;
}

float powerOFnum(float num,float power){
   return pow(num,power);
    
}