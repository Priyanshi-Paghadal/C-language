#include <stdio.h>

// TAKE SOMETHING RETURN NOTHING

void sum(int a, int b);

int main()
{
    sum(30, 20);

    return 0;
}
void sum(int a, int b)
{
    printf("Addition of a + b = %d", (a + b));
}