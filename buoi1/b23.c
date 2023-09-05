#include <stdio.h>
#include <stdlib.h>

int main() {
    char kt; scanf("%c", &kt);
    int a = 'a'; int z = 'z';
    if (kt >= a && kt <= z) printf("%c", kt - 32);
    else printf("%c", kt);
    return 0;
}
