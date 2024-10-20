#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int sum = *a + *b;
    printf("%d\n",sum);
    if(*a > *b){
        int sub = *a-*b;
        printf("%d",sub);
    }
    else{
        int sub2 = *b-*a;
        printf("%d",sub2);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}