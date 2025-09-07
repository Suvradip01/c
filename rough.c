/*
# include<stdio.h>
int main(){
 float pCost = 100 ;
 float pIncome = 900 ;

 printf("This year cost is = %f\n", pCost+(pCost*0.25));
 printf("This year income is = %f\n", pIncome+(pIncome*0.20));
 printf("Previous year profit = %f\n", pIncome-pCost);
 printf("This year profit is = %f\n", (pIncome+(pIncome*0.20))-(pCost+(pCost*0.25)));
 printf("This year profit than previous year is = %f", ((pIncome+(pIncome*0.20))-(pCost+(pCost*0.25)))-(pIncome-pCost));
 return 0;
}
*/
#include <stdio.h>
void main( )
{
int i = -9;
printf("%d %d %d", i++, ++i, ++i);
}