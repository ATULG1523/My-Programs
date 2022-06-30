#include <stdio.h>
#include <math.h>

int sumofGP(int a, int n, int r)
{
    int sum = (a * (1 - pow(r, n))) / (1 - r);
    return sum;
}

int main() {

    int a, n, r;
    float sum = 0;

    printf("please enter first number an G.P. series:");
    scanf("%d", &a);
    printf("please enter the total numbers in this G.P. series:");
    scanf("%d", &n);
    printf("please enter the commom ratio:");
    scanf("%d", &r);

    sum = sumofGP(a, n, r);
    printf("\n the sum of geometric progression series = %f\n", sum);
    return 0;
}