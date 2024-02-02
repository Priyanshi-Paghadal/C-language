#include <stdio.h>
/*
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
*/
main()
{    
    int i, j, k,rows=5;

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf("   ");
        }
        for (j = 1; j <= i; j++) {
            printf("*", j);
            if (j != i) {
                printf("  ");
            }
        }
        for (k = i - 1; k >= 1; k--) {
            printf("  *", k);
        }
        printf("\n");
    }
}
