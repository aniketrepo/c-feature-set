# include <stdio.h>

int main()
{
    const int myNum = 15; // will ALWAYS be 15
    myNum = 10; // error: assignment of read-only variable 'myNum' 

    return 0;
}