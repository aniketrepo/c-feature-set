# include <stdio.h>

int main()
{
    // compiler automatically converts the value of one type to another
    
    float myFloat = 9; // giving an int value to float
    int myInt = 9.99; // giving a float value to int
    float mySum = 5/2; 

    printf("%f\n", myFloat);
    printf("%d\n", myInt);
    printf("%f\n", mySum);

    return 0;
}