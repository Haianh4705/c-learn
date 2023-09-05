#include <stdio.h>
#include <stdlib.h>

int main() {
    int nam; scanf("%d", &nam);
    if (nam%400 == 0 || nam%4 == 0 && nam%100 != 0) printf("YES");
    else if (nam <= 0) printf("INVALID");
    else printf("NO");
    return 0;
}
