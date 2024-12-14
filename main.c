#include <stdio.h>

int main(void) {
    unsigned long long int a, b, c, counter;
    a = 0;
    b = 1;
    counter = 0;
    while (counter++ < 93) {
        printf("%llu\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("%llu\n", a);
}