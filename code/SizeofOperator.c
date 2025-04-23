# include <stdio.h>

int main(){
    int a = 10;
    double b = 3.14;
    char c = 'A';

    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of float: %d bytes\n", sizeof(b));
    printf("Size of char: %d bytes\n", sizeof(c));

    return 0;
}