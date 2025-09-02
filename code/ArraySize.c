# include <stdio.h>

int main()
{  
    int myNum[5];
    
    myNum[0] = 25;
    myNum[1] = 50;
    myNum[2] = 75;
    myNum[3] = 100;

    printf("%zu\n", sizeof(myNum));   // will return 20 as each int value takes 4 bytes of space, and there are 50 such elements
    printf("%zu\n", sizeof(myNum) / sizeof(myNum[0]));  // will return the number of elements in an array by dividing the actual size with the storage taken by the first element in the array

    return 0;
}