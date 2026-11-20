#include <stdio.h>

long long faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main(void) {
    int N;
    printf("N ni kiriting (0 dan 20 gacha): ");
    scanf("%d", &N);

    if (N < 0 || N > 20) {
        printf("N 0 dan 20 gacha bo'lishi kerak.\n");
        return 1;
    }

    printf("%d! = %lld\n", N, faktorial(N));
    return 0;
}
