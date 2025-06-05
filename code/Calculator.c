# include <stdio.h>

int main()
{
    float int1, int2;
    char operator;

    printf("Choose one operator[+, -, /, *]: ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%f", &int1);

    printf("Enter number 2: ");
    scanf("%f", &int2);

    switch(operator)
    {
        case '+': printf("The sum is: %f", int1+int2);
        break;

        case '-': printf("The difference is: %f", int1-int2);
        break;

        case '*': printf("The product is: %f", int1*int2);
        break;

        case '/': printf("The division is: %f", int1/int2);
        break;

        default: printf("ERROR");
    }
    return 0;
}