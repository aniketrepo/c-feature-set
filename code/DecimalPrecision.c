# include <stdio.h>

int main()
{
    float myFloatNum = 3.5;
    double myDoubleNum = 19.9;

    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);

    printf("%.9f\n", myFloatNum);       // 9 digits after decimal
    printf("%.9lf\n", myDoubleNum);     // 9 digits after decimal

    return 0;
}