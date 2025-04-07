# include <stdio.h>

int main()
{
    // Changing the values of an existing variable
    int myNum = 15;
    myNum = 16;
    printf("%d\n", myNum);
    
    // Assigning the value of one existing variable to another existing variable
    int myNum2 = 20;
    int myOtherNum = 22;
    myOtherNum = myNum2;
    printf("%d\n", myOtherNum);

    // Copying values to empty variables
    int myNum3 = 31;
    int myOtherNum2;
    myOtherNum2 = myNum3;
    printf("%d\n", myOtherNum2);

    // Adding variables together using the `+` operator
    int x = 6;
    int y = 10;
    int sum  = x + y;
    printf("%d\n", sum);

    getchar();
    return 0;
}
