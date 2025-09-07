#include<stdio.h>
int main(){
  int num;
  printf("Enter a number =");
  scanf("%d",&num);
  printf("%d",num>9 && num<100);
    return 0;
}