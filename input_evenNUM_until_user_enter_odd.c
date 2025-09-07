#include<stdio.h>
int main(){
int i,num;
for(i=0;i<=num;i++){
printf("Enter Even number =");
scanf("%d",&num);
if(num % 2 != 0){
    break;
}
printf("%d is even number\n",num);
}
printf("%d \nis odd number,user took odd number !",num);

return 0;
}