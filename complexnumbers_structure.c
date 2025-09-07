#include<stdio.h>

struct complex{
int real;
int imaginary;
};

int main(){
    struct complex num = {5,9};
    
    struct complex *ptr = &num;         //for using arrow operator and pointer  in this program to print output.


    printf("real number = %d\n",num.real);              //normal method
    printf("imaginary number = %d\n",num.imaginary);

    printf("real number = %d\n",ptr->real);             //using arrow operator
    printf("imaginary number = %d\n",ptr->imaginary);


    printf("real number = %d\n",(*ptr).real);            //using pointer
    printf("imaginary number = %d\n",(*ptr).imaginary);
    
    return 0;
}
