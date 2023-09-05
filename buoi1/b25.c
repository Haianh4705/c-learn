#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0) printf("INVALID");
    else {
        if (a+b <= c || a+c <= b || b+c <= a) printf("NO");
        else printf("YES");
    }
    return 0;
}
