#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b;
    scanf("%lld", &a); scanf("%lld", &b);
    printf("%lld %lld %lld %.2lf", a+b, a-b, a*b, a*1.0/b);
    return 0;
}
