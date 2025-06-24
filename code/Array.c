# include <stdio.h>

int main()
{
    // initialise an array
    int myNums[] = {25, 69, 88, 102};

    // access an element of an array
    printf("%d\n", myNums[0]);

    // change an array element
    myNums[0] = 88888;
    printf("%d\n", myNums[0]);

    return 0;
}