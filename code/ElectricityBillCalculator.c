#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Please enter units of electricity used: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.00;
    }
    
    else if (units <= 200) {
        bill = 100 * 1.00 + (units - 100) * 1.50;
    }
    
    else if (units <= 300) {
        bill = 100 * 1.00 + 100 * 1.50 + (units - 200) * 2.00;
    }
    
    else if (units > 300) {
        bill = 100 * 1.00 + 100 * 1.50 + 100 * 2.00 + (units - 300) * 3.00;
    }
    
    else {
        printf("INVALID VALUE ENTERED\n");
    }

    printf("Your bill is Rs. %.2f\n", bill);
    
    return 0;
}
