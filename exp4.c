#include <stdio.h>

int main() {
    int a, b, i, j;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    printf("\nrange : %d to %d \nPrime nos : ", a, b);

    for(i = a; i <= b; i++) {
        int flag = 1;
        if(i < 2) continue;
        for(j = 2; j*j <= i; j++)
            if(i % j == 0) { flag = 0; break; }

        if(flag) printf("%d ", i);
    }
    return 0;
}
