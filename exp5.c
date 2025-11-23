#include <stdio.h>

int factRec(int n) {
    if(n == 0) return 1;
    return n * factRec(n - 1);
}

int factItr(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);

    printf("Iterative = %d\n", factItr(n));
    printf("Recursive = %d\n", factRec(n));

    return 0;
}
