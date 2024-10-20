#include <stdio.h>

// TAKE SOMETHING RETURN SOMETHING

int sum(int a, int b);

int main()
{
    int ans = sum(10, 20);
    printf("%d", ans);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}