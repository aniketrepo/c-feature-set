# include <stdio.h>

int main()
{
    // when we divide these two, we would expect 1.428571, but since we are working with integers
    // and not floating point values, the result will be 1
    int x = 10;
    int y = 7;

    printf("%d\n", x/y);
}