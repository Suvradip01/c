
//pointers

#include<stdio.h>
int main(){
    int age = 20;                //variable declaration

    int *ptr = &age;            // here ,int*ptr store the memory location of the variable age.

    int _age = *ptr;           // here, int _age store the value of the age variable from the age variable's memory location

    printf("Memory address of age: %p\n",&age);      //here , we are printing the memory location of age.

    printf("Memory address of ptr/age variable : %p\n",ptr);  //it will print the same address/location of age bec the age address stored in ptr variable.

    printf("Memory address of ptr %p\n",&ptr); // here it will print the address of ptr in memory.

    printf("%d\n",_age);     //here , we are printing the age variable value from the memory location of age variable.

    
    printf("%d\n",age);   //here,it will print the age value.
    
    printf("%d\n",*ptr);   //here,it will print the value at ptr .now the ptr value is initialised by age value so the value is same.
    
    printf("%d\n",*(&age));  //here, first it will store the value of age then the address at age which is also 20 here same ptr=age so it will print 20 .
    return 0;
}