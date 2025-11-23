#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Entered two numbers r: %d & %d \n", a, b);

    for(int i = a; i <= b; i++)
        if(i % 2 != 0)
            sum += i;

    printf("Sum of all odd nos between %d & %d  = %d", a, b ,sum);
    return 0;
}
