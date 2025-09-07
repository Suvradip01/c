#include<stdio.h>
int main(){
int i,num,factorial=1;
printf("Enter number =");
scanf("%d",&num);
for(i=1;i<=num;i++){
 factorial= factorial*i; 
}
printf("%d",factorial);
return 0;
}