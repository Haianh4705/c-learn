#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf", &a); scanf("%lf", &b);
    printf("%.0lf", ceil(b) - floor(a) - 1);
    return 0;
}