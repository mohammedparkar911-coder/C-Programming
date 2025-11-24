#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], n, m;

    printf("Enter rows & cols: ");
    scanf("%d %d", &m, &n);
    printf("%d %d \n", m, n);

    printf("Enter matrix A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
