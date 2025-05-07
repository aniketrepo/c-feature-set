# include <stdio.h>

int main()
{
    int a, b, result;
    char operator;

    printf("Please select your operator [+ - * /]: ", operator);
    scanf(" %c", &operator);

    printf("Please enter number one: ", a);
    scanf("%d", &a);

    printf("Please enter number two: ", b);
    scanf("%d", &b);

    switch (operator)
    {
        case '+':
            result = a + b;
            printf("The result is %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("The result is %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("The result is %d\n", result);
            break;
        case '/':
            result = a / b;
            printf("The result is %d\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}