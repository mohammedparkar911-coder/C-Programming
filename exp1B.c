#include <stdio.h>

int main() {
    float p, c, m, avg;

    printf("Enter Physics, Chemistry, Maths marks: ");
    scanf("%f %f %f", &p, &c, &m);

    avg = (p + c + m) / 3.0;

    printf("Average = %.2f\n", avg);

    if(avg >= 60)
        printf("Eligible for admission\n");
    else
        printf("Not eligible\n");

    return 0;
}
