#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf", &a); scanf("%lf", &b); scanf("%lf", &c);
    double d = b*b - 4*a*c;
    if (d < 0) printf("VO NGHIEM");
    else if (d == 0) printf("%.2lf %.2lf", -b/(2*a), -b/2*a);
    else {
        double x1 = (-b-sqrt(d))/(2*a);
        double x2 = (-b+sqrt(d))/(2*a);
        printf("%.2lf %.2lf", x1, x2);
    }
    return 0;
}
