#include <stdio.h>

void printPattern(int n) {
    int space = 1,i,n;
    int num_count = n;

    // Loop for upper part of the pattern
    for (int i = n; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print spaces
        for (int j = 1; j <= space; j++) {
            printf("  ");
        }

        // Print numbers from i to 1
        for (int j = i; j >= 1; j--) {
            if (j != n) {
                printf("%d ", j);
            }
        }

        // Move to the next line
        printf("\n");
        space += 4;
        num_count--;
    }
}

int main() {
    int n = 5; // Change this value to adjust the pattern size
    printPattern(n);

    return 0;
}

