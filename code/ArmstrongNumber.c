# include <stdio.h>

int main()
{
    int num, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0)
        count = 1;

    else
    {
        while(temp !=0)
        {
            temp = temp / 10;
            count++;
        }
    }
    printf("%d",count);

    return 0;
}