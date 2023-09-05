#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d", &x1); scanf("%d", &y1); scanf("%d", &x2); scanf("%d", &y2);
    printf("%.2f", sqrtf(powf(x2-x1, 2.0)+powf(y2-y1,2.0)));
    return 0;
}
