# include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    
    a += b;
    printf("a += b: %d\n", a);

    a -= b;
    printf("a -= b: %d\n", a);

    a *= b;
    printf("a *= b: %d\n", a);

    a /= b;
    printf("a /= b: %d\n", a);

    a %= b;
    printf("a %%= b: %d\n", a);

    return 0;
}
