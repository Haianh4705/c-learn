#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n; scanf("%lld", &n);
    if (n%2 == 0) printf("%lld", n/2);
    else printf("%lld", (n-1)/2-n);
    return 0;
}
