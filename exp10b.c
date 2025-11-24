#include <stdio.h>

int main() {
    int a[50], n;
    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int *p = a;

    printf("Reverse: ");
    for(int i = n - 1; i >= 0; i--)
        printf("%d ", *(p + i));

    return 0;
}
