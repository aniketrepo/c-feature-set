# include <stdio.h>

int main()
{
    // We use a comma-separated list to declare multiple variables of the same type
    int x = 10, y = 30, z = 50;
    printf("%d\n", x + y + z);

    // We can also assign a same value to multiple variables of the same type
    int a, b, c;
    a = b = c = 50;
    printf("%d\n", a + b + c);

    getchar();
    return 0;
}
