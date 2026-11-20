#include <stdio.h>

int yigindi(int n) {
    if (n <= 0) return 0;
    return n + yigindi(n - 1);
}

int main(void) {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    printf("Yig'indi: %d\n", yigindi(N));
    return 0;
}
