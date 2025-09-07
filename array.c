#include<stdio.h>
int main(){
int marks[3];
printf("Enter Math marks = ");
scanf("%d",&marks[0]);
printf("Enter Chemistry marks = ");
scanf("%d",&marks[1]);
printf("Enter biology marks = ");
scanf("%d",&marks[2]);
printf("Math = %d,\nchemistry = %d,\nbiology = %d",marks[0],marks[1],marks[2]);
return 0;
}