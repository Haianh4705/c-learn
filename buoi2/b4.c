#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,k;
    scanf("%d %d %d", &a, &b, &k);
    if (k%2 == 0) printf("%d", (a-b)*k/2);
    else printf("%d", (a-b)*(k/2) + a);
    return 0;
}
