#include<stdio.h>
int main(){
    int num,rows;
    printf("Enter number of rows =");
    scanf("%d",&rows);
    printf("Enter number =");
    scanf("%d",&num);
    for(int i=0;i<rows;i++){
        for(int j=1;j<=num;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}