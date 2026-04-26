#include <stdio.h>

int main() {
    int tableSize = 10;
    int tables[2][tableSize];

    // Generating tables
    for (int i = 0; i < tableSize; i++) {
        tables[0][i] = 2 * (i + 1); // Table of 2
        tables[1][i] = 3 * (i + 1); // Table of 3
    }

    // Printing tables
    printf("Table of 2:\n");
    for (int i = 0; i < tableSize; i++) {
        printf("%d x 2 = %d\n", i + 1, tables[0][i]);
    }

    printf("\nTable of 3:\n");
    for (int i = 0; i < tableSize; i++) {
        printf("%d x 3 = %d\n", i + 1, tables[1][i]);
    }

    return 0;
}
