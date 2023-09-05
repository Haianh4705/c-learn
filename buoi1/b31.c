#include <stdio.h>
#include <stdlib.h>

int main() {
    double hs1_1, hs1_2, hs2, hs3;
    scanf("%lf", &hs1_1); scanf("%lf", &hs1_2); scanf("%lf", &hs2); scanf("%lf", &hs3);
    double tk = (hs1_1 + hs1_2 + hs2*2 + hs3*3) / 7;
    if (tk >= 8) printf("GIOI");
    else if (tk < 8 && tk >= 6.5) printf("KHA");
    else if (tk < 6.5 && tk >= 5) printf("TRUNG BINH");
    else printf("YEU");
    return 0;
}
