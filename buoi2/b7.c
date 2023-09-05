#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, S;
    scanf("%d %d", &n, &S);
    if (S%n == 0) printf("%d", S/n);
    else printf("%d", S/n + 1);
    return 0;
}
