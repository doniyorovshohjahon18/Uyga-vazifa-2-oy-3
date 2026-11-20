#include <stdio.h>

long long daraja(long long a, int n) {
    if (n == 0) return 1;
    return a * daraja(a, n - 1);
}

int main(void) {
    long long a;
    int n;

    printf("a va n ni kiriting: ");
    scanf("%lld %d", &a, &n);

    if (n < 0) {
        printf("n manfiy bo'lmasligi kerak.\n");
        return 1;
    }

    printf("Natija: %lld\n", daraja(a, n));
    return 0;
}
