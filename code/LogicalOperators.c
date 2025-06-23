# include <stdio.h>

int main()
{
    int x = 5;
    int y = 4;

    // AND operator: '&&' operator, returns 1 if both statements are true
    printf("%d\n", x<6&&x<10);

    // OR operator: '||' operator, returns 1 if one of the statements are turue
    printf("%d\n", x<6||x<4);

    // NOT operator: '!' operator, reverses the result, returns 0 if the result is 1, vice versa
    printf("%d\n", !(x<6&&x<10));

    return 0;
}