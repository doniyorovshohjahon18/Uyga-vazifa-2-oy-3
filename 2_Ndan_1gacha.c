#include <stdio.h>

void chiqar(int n) {
    if (n < 1) return;
    printf("%d ", n);
    chiqar(n - 1);
}

int main(void) {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    chiqar(N);
    return 0;
}
