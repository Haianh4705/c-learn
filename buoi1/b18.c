#include <stdio.h>
#include <stdlib.h>

int main() {
    int kt; scanf("%c", &kt);
    int a = 'a'; int z = 'z';
    if (kt >= a && kt <= z) printf("YES");
    else printf("NO");
    return 0;
}
