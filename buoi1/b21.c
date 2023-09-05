#include <stdio.h>
#include <stdlib.h>

int main() {
    int kt; scanf("%c", &kt);
    int one = '1'; int nine = '9';
    if (kt >= one && kt <= nine) printf("YES");
    else printf("NO");
    return 0;
}
