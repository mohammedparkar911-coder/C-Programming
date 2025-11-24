#include <stdio.h>

int main() {
    int ch;
    float a, b;

START:
    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\nEnter choice: ");
    scanf("%d", &ch);

    if(ch == 5) return 0;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(ch) {
        case 1: printf("Result = %.2f\n", a + b); break;
        case 2: printf("Result = %.2f\n", a - b); break;
        case 3: printf("Result = %.2f\n", a * b); break;
        case 4: printf("Result = %.2f\n", a / b); break;
        default: printf("Invalid choice\n");
    }

    goto START;
}
