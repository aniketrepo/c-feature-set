# include <stdio.h>

int main()
{
    int num, orignal, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    orignal = num;

    while (num != 0){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num = num / 10;

    }

    if (orignal == reversed)
        printf("%d is a palindrome number", orignal);

    else
        printf("%d is not a palindrome number", orignal);

    return 0;
}