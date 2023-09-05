#include <stdio.h>
#include <stdlib.h>

int main() {
    char kt; scanf("%c", &kt);
    int A = 'A'; int Z = 'Z'; int a = 'a';
    if (kt >= A && kt <= Z) printf("%c", kt + 32);
    else printf("%c", kt);
    return 0;
}
