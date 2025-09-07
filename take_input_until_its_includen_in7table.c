#include<stdio.h>
int main(){
int i,num;
for(i=0;i<=num;i++){
printf("Enter number =");
scanf("%d",&num);
if(num/7 == 1){
    break;
}
printf("%d\n",num);
}
printf("%d \nDivisible by 7",num);

return 0;
}