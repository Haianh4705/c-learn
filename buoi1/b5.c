#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14;

int main() {
    int r; scanf("%d", &r);
    printf("%.2f %.2f", r*2*PI, r*r*PI);
    return 0;
}
