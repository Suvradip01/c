#include<stdio.h>
int main(){
    int i= 5;
    int *ptr = &i;
    printf("value of i = %d\n",*ptr);
    int **pptr = &ptr;
    printf("value of i = %d\n",**pptr); // bec of ** it jumps 2 steps ....here ptr stored the address of i and 
                                        // pptr stored address of ptr so the value at *ptr is i value which is 5 and now ** pptr jumps 2 values so the value become 5.  
    return 0;
}