#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a), scanf("%d", &b);
    int c = a/b;
    if (c*b != a) printf("%d", (c+1)*b);
    else printf("%d", c*b);
    return 0;
}
