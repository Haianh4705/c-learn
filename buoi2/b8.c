#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int n1 = 0;int n5 = 0;int n10 = 0;int n20 = 0;int n100 = 0;
    if (n >= 100) {
        n100 = n/100;
        n -= n100 * 100;
    }
    if (n >= 20) {
        n20 = n/20;
        n -= n20 * 20;
    }
    if (n >= 10) {
        n10 = n/10;
        n -= n10 * 10;
    }
    if (n >= 5) {
        n5 = n/5;
        n -= n5 * 5;
    }
    n1 = n;
    printf("%d", n1 + n5 + n10 + n20 + n100);
    return 0;
}
