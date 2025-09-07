#include<stdio.h>
int main(){
    int num,i,j,sum=0;
    printf("Enter number =");
    scanf("%d",&num);
    for(i=1,j=num;i<=num && j>=1; i++,j--){
    sum=sum+i;
    printf("%d ",j);
    }
    printf("sum=%d",sum);
return 0;
}