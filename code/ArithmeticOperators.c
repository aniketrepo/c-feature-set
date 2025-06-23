# include <stdio.h>

int main()
{
    // Addition: '+' operator, adds two values
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum1 + sum2;

    printf("%d\n%d\n%d\n\n", sum1, sum2, sum3);

    // Subtraction: '-' operator, subtracts one value from another
    int sub1 = 100 - 50;
    int sub2 = sub1 - 250;
    int sub3 = sub1 - sub2;

    printf("%d\n%d\n%d\n\n", sub1, sub2, sub3);

    // Multiplication: '*' operator, multiplies two values
    int mul1 = 100 * 50;
    int mul2 = mul1 * 250;
    int mul3 = mul1 * mul2;

    printf("%d\n%d\n%d\n\n", mul1, mul2, mul3);

    // Division: '/' operator, divides one value from another, returns the quotient
    float div1 = 100 / 50;
    float div2 = div1 / 10;
    float div3 = div1 / div2;
    
    printf("%f\n%f\n%f\n\n", div1, div2, div3);

    // Modulus: '%' opertor, divides one value from another, returns the remainder
    int mod1 = 100 % 50;
    int mod2 = mod1 % 250;
    int mod3 = mod1 % mod2;

    printf("%\n%d\n%d\n\n", mod1, mod2, mod3);
    

    // Increment: '++' operator, increases the value of a variable by 1
    int inc1 = 100;
    inc1++;
    int inc2 = inc1++;
    int inc3 = ++inc2;

    printf("%d\n%d\n%d\n\n", inc1, inc2, inc3);

    // Decrement: '--' operator, decreases the value of a variable by 1
    int dec1 = 100;
    dec1--;
    int dec2 = dec1--;
    int dec3 = --dec2;

    printf("%d\n%d\n%d\n\n", dec1, dec2, dec3);

    return 0;
}