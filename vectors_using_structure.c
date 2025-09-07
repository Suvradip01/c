
#include<stdio.h>

struct vector{          //structure declaration
    int x;              //x co-ordinate
    int y;              //y co-ordinate
};

void vectorSum(struct vector v1,struct vector v2,struct vector sum);  //function declaration(struct vector is common)

int main(){                         //initialisation(values)
    struct vector v1 = {5,10};
    struct vector v2 = {6,8};
    struct vector sum = {0};
    vectorSum(v1,v2,sum);           //function call
    return 0;
}

void vectorSum(struct vector v1,struct vector v2,struct vector sum){      //function defination
    sum.x = v1.x + v2.x;    
    sum.y = v1.y + v2.y;
    printf("sum of x = %d\n",sum.x);
    printf("sum of y = %d\n",sum.y);
}