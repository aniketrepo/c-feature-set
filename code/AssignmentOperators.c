# include <stdio.h>

int main()
{
    // Assignment: '=' operator, assigns a value to a variable
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Initial values: a = %d, b = %d, c = %d\n", a, b, c);

    // Assignment with addition: '+=', adds the right operand to the left operand and assigns the result to the left operand
    a += 5; // equivalent to a = a + 5
    printf("After a += 5: a = %d\n", a);

    // Assignment with subtraction: '-=', subtracts the right operand from the left operand and assigns the result to the left operand
    b -= 10; // equivalent to b = b - 10
    printf("After b -= 10: b = %d\n", b);

    // Assignment with multiplication: '*=', multiplies the left operand by the right operand and assigns the result to the left operand
    c *= 2; // equivalent to c = c * 2
    printf("After c *= 2: c = %d\n", c);

    // Assignment with division: '/=', divides the left operand by the right operand and assigns the result to the left operand
    c /= 3; // equivalent to c = c / 3
    printf("After c /= 3: c = %d\n", c);

    // Assignment with modulus: '%=', calculates the modulus of the left operand by the right operand and assigns it to the left operand
    a %= 3; // equivalent to a = a % 3
    printf("After a %%= 3: a = %d\n", a);

    return 0;
}