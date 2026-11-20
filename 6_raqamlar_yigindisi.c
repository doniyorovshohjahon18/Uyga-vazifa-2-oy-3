#include <stdio.h>

int raqamlarYigindisi(int n) {
    if (n == 0) return 0;
    return n % 10 + raqamlarYigindisi(n / 10);
}

int main(void) {
    int n;
    printf("Natural son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar yig'indisi: %d\n", raqamlarYigindisi(n));
    return 0;
}
