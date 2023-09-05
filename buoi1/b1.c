#include <stdlib.h>
#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    printf("%d %d", a/b, a%b);
    return 0;
}
