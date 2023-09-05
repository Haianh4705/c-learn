#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a,b,c,d,e;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
    long long min1, min2;
    if (a < b) {
        min1 = a;
        min2 = b;
    } else {
        min1 = b;
        min2 = a;
    }

    if (c < min1) {
        min2 = min1;
        min1 = c;
    } else if (c > min1 && c < min2) {
        min2 = c;
    }

    if (d < min1) {
        min2 = min1;
        min1 = d;
    } else if (d > min1 && d < min2) {
        min2 = d;
    }

    if (e < min1) {
        min2 = min1;
        min1 = e;
    } else if (e > min1 && e < min2) {
        min2 = e;
    }
    
    printf("%lld", min2);

    return 0;
}