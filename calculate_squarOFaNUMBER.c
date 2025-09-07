#include<stdio.h>
#include<math.h>
int main(){
    float num,squar;
    printf("Enter number =");
    scanf("%f",&num);
    squar=pow(num,2);
    printf("The squar of %f is =%f",num,squar);
    return 0;
}