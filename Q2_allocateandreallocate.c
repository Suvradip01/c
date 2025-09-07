#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    int i;

    ptr = (int*)calloc(5,sizeof(int*));

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    printf("Odd numbers are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",ptr[i]);
    }


ptr = realloc(ptr,6);

    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;

    printf("\nEven numbers are:\n");
    for(int j=0;j<6;j++){
        printf("%d\t",ptr[j]);
    }

    free(ptr);
    return 0;
}