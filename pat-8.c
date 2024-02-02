#include <stdio.h>
/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4     4 3 2 1
    1 2 3         3 2 1
    1 2             2 1
    1                 1
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/
main() {
    int rows = 10,i,j;
    for (i = 0; i < rows; i++) {
        if (i < 5) {
            for (j = 1; j <= 5 - i; j++) {
                printf("%d ", j);
            }
            for (j = 0; j < 2 * i; j++) {
                printf("  ");
            }
            for (j = 5 - i; j >= 1; j--) {
                if (j != 6)
                    printf("%d ", j);
            }
        } else {
            for (j = 1; j <= i - 4; j++) {
                printf("%d ", j);
            }
            for (j = 0; j < 2 * (9 - i); j++) {
                printf("  ");
            }
            for (j = i - 4; j >= 1; j--) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

