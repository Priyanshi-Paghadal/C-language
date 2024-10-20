#include <stdio.h>

// TAKE NOTHING RETURN SOMETHING

int sum();

int main()
{
    int ans = sum();
    printf("%d", ans);

    return 0;
}
int sum()
{
    int a = 30, b = 10;
    return a + b;
}