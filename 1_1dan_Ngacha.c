#include <stdio.h>

void chiqar(int n) {
    if (n < 1) return;
    chiqar(n - 1);
    printf("%d ", n);
}

int main(void) {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    chiqar(N);
    return 0;
}
