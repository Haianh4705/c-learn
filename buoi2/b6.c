#include <stdio.h>
#include <stdlib.h>

long long n; long long a, b;
int main() {
    scanf("%lld %lld %lld", &n, &a, &b);
    if (n%2 == 0) {
        if (a < b/2) printf("%lld", a*n);
        else printf("%lld", n*b/2);
    } else {
        if (a*n < n*b/2 + a) printf("%lld", a*n);
        else printf("%lld", n*b/2 + a);
    }
    return 0;
}
