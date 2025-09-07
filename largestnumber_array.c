#include<stdio.h>

int main() {
    int n;
    int large = 0;

    printf("Enter total numbers (n): ");
    scanf("%d", &n);

    int arr[n]; // Declare array after reading the value of n.

    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > large) {
            large = arr[i];
        }
    }

    printf("The largest number is: %d\n", large);
    return 0;
}
