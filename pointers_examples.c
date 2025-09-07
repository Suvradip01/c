#include <stdio.h>
int main()
{
    int *ptr;
    int x;
    ptr = &x; // here ,we are initialising the address of x to ptr.

    *ptr = 0; // here , we are initialising the value at ptr is 0 so the value of x becomes also 0.

    printf("x is = %d \n", x);      // x = 0 bec the address of x is ptr which can be anything in memory but the *ptr = 0 so the  value at ptr address is o so x becomes 0.
    printf("*ptr is = %d\n", *ptr); // the *ptr we defined 0 so it will print the value also 0 as x.

    *ptr += 5;
    printf("x is = %d \n", x);      // previously the c or *ptr value is 0 now it updated to *ptr+5=0+5=5 so the value of x becomes t and also *ptr value is 5.
    printf("*ptr is = %d\n", *ptr); // the value at *ptr is x variable and x is 0 so *ptr is also 0.
    (*ptr)++;                       // now the x is 5 bec previously it was updated and also the value of *ptr is 5 ,here it will become 6 bec of *ptr++=*ptr+1
    printf("x is = %d \n", x);      // x=6
    printf("*ptr is = %d\n", *ptr); //*ptr = 6
    return 0;
}