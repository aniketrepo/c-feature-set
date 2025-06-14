# include <stdio.h>

int main()
{
    // this is done by manually placing parentheses in front of the value

    int num1 = 5, num2 = 2;
    float mySum1 = (float) num1 / num2;
    float mySum2 = (float) 5 / 2;

    printf("%f\n", mySum1);
    printf("%f\n", mySum2);

    return 0;
}