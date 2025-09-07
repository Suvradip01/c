#include <stdio.h>

int main() {
    // Define an integer variable named 'price' and assign it the value 100
    int price = 100;

    // Define a pointer variable named 'ptr' and assign it the address of 'price'
    int *ptr = &price;

    // Define a pointer variable named 'pptr' and assign it the address that 'ptr' points to
    // This effectively means 'pptr' holds the address of 'price' indirectly via 'ptr'
    int *pptr = &*ptr;

    // Print the address and value of 'price'
    printf("Address of price: %p\n Value of price: %d\n", (void*)&price, price);

    // Print the address and value that 'ptr' holds (the address of 'price')
    printf("Address of ptr: %p\n Value of ptr (address it points to): %p\n", (void*)&ptr, (void*)ptr);

    // Print the address and value that 'pptr' holds (the address that 'ptr' points to)
    printf("Address of pptr: %p\n Value of pptr (address it points to): %p\n", (void*)&pptr, (void*)pptr);

    return 0;
}
