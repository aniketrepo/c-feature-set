# include <stdio.h>

int main(){
    int a = 10;
    double b = 3.14;
    char c = 'A';

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of float: %lu bytes\n", sizeof(b));
    printf("Size of char: %lu bytes\n", sizeof(c));

    return 0;
}