#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    unsigned int s;
    scanf("%d %d %ud", &a, &b, &s);
    if (a == b || a == -b) {
        if (s%2 == 0) printf("YES");
        else printf("NO");
    } else {
        int max, min;
        if (a>b) {
            max = a;
            min = b;
        } else {
            max = b;
            min = a;
        }
        if (s%2 == (min*2 + (max - min))%2) printf("YES");
        else printf("NO");
    }
    return 0;
}
