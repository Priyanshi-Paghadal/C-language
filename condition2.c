#include <stdio.h>
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    char *digit[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (i = a - 1; i <= b; i++)
    {
        if (i <= 9)
        {
            printf("%s\n", digit[i]);
        }
    }

    for (i = a - 1; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
