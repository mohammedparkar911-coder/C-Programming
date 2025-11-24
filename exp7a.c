#include <stdio.h>

int main() {
    int a[50], n, max;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}
