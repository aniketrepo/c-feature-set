# include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i <= 55; i++){
        sum += i;
    }
    printf("The sum is %d.\n", sum);

    return 0;
}