#include <stdio.h>
#include <stdlib.h>

int main() {
    int kt; scanf("%d", &kt);
    int a = 'a'; int z = 'z'; int A = 'A'; int Z = 'Z';
    if (kt >= a && kt <= z || kt >= A && kt <= Z) printf("YES");
    else printf("NO");
    return 0;
}
