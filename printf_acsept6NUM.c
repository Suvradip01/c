#include<stdio.h>
int main(){
int i,range;
printf("Enter range =");
scanf("%d",&range);
for(i=0;i<=range;i++){
if(i == 6){
    continue;
}
printf("%d ",i);
}
return 0;
}