#include <stdio.h>

int main() {
    int a = 5, b = 10;

    if (a > 0 && b > 0) {
        printf("Both a and b are positive\n");
    }

    if (a > 0 || b < 0) {
        printf("At least one condition is true\n");
    }

    if (!(a < 0)) {
        printf("a is not negative\n");
    }

    return 0;
}
