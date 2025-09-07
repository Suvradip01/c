#include<stdio.h>
int main(){
    int i,num,range,table;
    printf("Enter number =");
    scanf("%d",&num);
    printf("Enter range = ");
    scanf("%d",&range);
    for(i=range;i>=0;i--){
        table=num*i;
    printf("%d * %d = %d\n",num,i,table);
    }
    return 0;
}