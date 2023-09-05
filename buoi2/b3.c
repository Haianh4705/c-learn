#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, a;
    scanf("%d %d %d", &m, &n, &a);
    int m_num, n_num;

    if (m < a) m_num = 1;
    else {
        if (m % a == 0) m_num = m/a;
        else m_num = m/a + 1;
    }

    if (n < a) n_num = 1;
    else {
        if (n % a == 0) n_num = n/a;
        else n_num = n/a + 1;
    }

    printf("%d", m_num*n_num);
    return 0;
}