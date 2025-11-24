#include <stdio.h>

int main() {
    int a, b, *p, *q;
    p = &a;
    q = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p, q);
    printf("%d %d", a, b);

    printf("\nSum = %d", (*p + *q));
    return 0;
}
