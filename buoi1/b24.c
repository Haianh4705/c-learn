#include <stdio.h>
#include <stdlib.h>

int main() {
    char kt; scanf("%c", &kt);
    int a = 'a'; int z = 'z'; int A = 'A'; int Z = 'Z';
    if (kt >= a && kt <= z) {
        if (kt < z) printf("%c", kt - 32 + 1);
        else printf("%c", A);
    } else if (kt >= A && kt <= Z) {
        if (kt < Z) printf("%c", kt + 32 + 1);
        else printf("%c", a);
    } else {
        printf("INVALID");
    }
    return 0;
}
