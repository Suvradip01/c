#include<stdio.h>
int main(){
    int i,num;
    printf("Enter a number =");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i == 0){
            printf("%d is a prime number",num);
        }else{
            printf("%d is not a prime number",num);
        }
    return 0;
    }
}