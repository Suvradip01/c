#include <stdio.h>

int calculation();
int table();
int pattern();

int main() {
    calculation();
    table();
    pattern();
    return 0;
}

int calculation() {
    int a, b;
    char ch;
    printf("Enter 1st number = ");
    scanf("%d", &a);
    printf("Enter 2nd number = ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /) = ");
    scanf(" %c", &ch); // Notice the space before %c
    if (ch == '+') {
        printf("Result is = %d\n", a + b);
    } else if (ch == '-') {
        printf("Result is = %d\n", a - b);
    } else if (ch == '*') {
        printf("Result is = %d\n", a * b);
    } else if (ch == '/') {
        printf("Result is = %d\n", a / b);
    } else {
        printf("Invalid operator\n");
    }
    return 0;
}

int table() {
    int i, n, range, table;
    printf("Enter a number = ");
    scanf("%d", &n);
    printf("Enter range = ");
    scanf("%d", &range);
    for (i = 0; i <= range; i++) {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
    return 0;
}

int pattern() {
    int i, j, rows;
    printf("Enter number of rows = ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
