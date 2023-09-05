#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    scanf("%lld", &a); scanf("%lld", &b); scanf("%lld", &c);
    if (a/b == c || b/a == c || c/b == a) printf("/");
    else printf("NOSOL");
    return 0;
}