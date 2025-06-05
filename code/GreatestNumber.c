# include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    switch(num1>num2 && num3<num1)
    {
        case 1:
        printf("The largest number is %d", num1);
        break;
    }

    switch(num2>num1 && num3<num2)
    {
        case 1:
        printf("The largest number is %d", num2);
        break;
    }

    switch(num3>num1 && num2<num3)
    {
        case 1:
        printf("The largest number is %d", num3);
        break;
    }

    return 0;
}