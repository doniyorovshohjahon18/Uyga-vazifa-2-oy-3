#include <stdio.h>

int raqamlarSoni(int n) {
    if (n < 10) return 1;
    return 1 + raqamlarSoni(n / 10);
}

int main(void) {
    int n;
    printf("Natural son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar soni: %d\n", raqamlarSoni(n));
    return 0;
}
