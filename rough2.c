#include<stdio.h>
int main(){
    float pyi = 900;
    float pycost = 100;
    float tyincome= 0;
    float tycost = 0;

    tyincome = pyi*0.2+pyi;     //this year total income
    printf("this year total income : %f\n",tyincome);

    tycost = 100*0.25+pycost;     //this year total cost
    printf("this year total cost/spent : %f\n",tycost);

    float pyprofit = pyi-pycost;
    float typrofit = tyincome-tycost;
    float profit = typrofit-pyprofit;


    printf("previous yr total  profit  : %f\n", pyprofit);

    printf("This yr total profit : %f\n",typrofit); 
    
    printf("compairing previous year profit to this year : %f - %f = %f",typrofit,pyprofit,profit);


    return 0;

    
}