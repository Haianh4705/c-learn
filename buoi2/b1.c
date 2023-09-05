#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int s1,s2,s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    double v = sqrt(s1*s2*s3);
    printf("%.0lf", (v/s1 + v/s2 + v/s3)*4);
    return 0;
}
