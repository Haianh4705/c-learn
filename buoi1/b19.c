#include <stdio.h>
#include <stdlib.h>

int main() {
    int kt; scanf("%c", &kt);
    int a = 'A'; int z = 'Z';
    if (kt >= a && kt <= z) printf("YES");
    else printf("NO");
    return 0;
}
