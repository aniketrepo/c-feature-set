# include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    
    // Equal to: `==` operator, returns 1 if the values are equal
    printf("%d\n", x==y);

    // Not equal: '!=` operator, returns 1 if the values are NOT equal
    printf("%d\n", x!=y);

    // Greater than: '>' operator, returns 1 if the first value is greater than the second value
    printf("%d\n", x>y);

    // Less than: '<' operator, returns 1 if the first value is less than the second value
    printf("%d\n", x<y);

    // Greater than or equal to: '>=' operator, returns 1 if the first value is greater than or equal to the second value
    printf("%d\n", x>=y);

    // Less than or equal to: '<=' operator, returns 1 if the first value is less than or equal to the second value
    printf("%d\n", x<=y);

    return 0;
}